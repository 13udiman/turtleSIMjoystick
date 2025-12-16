#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <libusbp.hpp>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "global_messages/msg/controller.hpp"
#include "geometry_msgs/msg/twist.hpp"

#define STM_VID 0x0483
#define STM_PID 0x5740
int serial_port;

using namespace std::chrono_literals;

std::string discover_STM(uint16_t vid, uint16_t pid);
int initialize_tty(const char *dev_path);

class JoyPublisher : public rclcpp::Node
{
  public:
    JoyPublisher()
    : Node("joystick_publisher")
    {
      sub_ = this->create_subscription<sensor_msgs::msg::Joy>(
    "/joy", 10,
    std::bind(&JoyPublisher::joyCallback, this, std::placeholders::_1));
    pub_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
    }

  private:

    void joyCallback(const sensor_msgs::msg::Joy::SharedPtr msg)
    {
      bool flag = false;
      auto message = global_messages::msg::Controller();
      message.velx = msg->axes[0]*3;
      message.vely = msg->axes[1]*3;
      message.angvel = msg->axes[3]*3;
      RCLCPP_INFO(this->get_logger(), "Publishing: '%f'", message.velx);
        RCLCPP_INFO(this->get_logger(), "Publishing: '%f'", message.vely);
        RCLCPP_INFO(this->get_logger(), "Publishing: '%f'", message.angvel);
        auto twist_msg = geometry_msgs::msg::Twist();
        twist_msg.linear.x = message.vely;
        twist_msg.linear.y = message.velx;
        twist_msg.angular.z = message.angvel;
        pub_->publish(twist_msg);

      std::string dev_path = discover_STM(STM_VID, STM_PID);

        if (dev_path != "NULL")
        {
            serial_port = initialize_tty(dev_path.c_str());
            RCLCPP_INFO(this->get_logger(), "Master discovered at %s", dev_path.c_str());
        }
        else
        {
            while (dev_path == "NULL" && !flag)
            {
                RCLCPP_WARN(this->get_logger(), "Master not found, retry!!!");
                dev_path = discover_STM(STM_VID, STM_PID);
                if(flag){
                    RCLCPP_INFO(this->get_logger(), "Interrupted by user. Exiting...");
                    break;
                }
                std::this_thread::sleep_for(std::chrono::seconds(1));
            }
            serial_port = initialize_tty(dev_path.c_str());
            RCLCPP_INFO(this->get_logger(), "Master discovered at %s", dev_path.c_str());
        }
        int pc[50] = {'I','T','S',message.velx,message.vely,message.angvel};
        write(serial_port, &pc, sizeof(pc));
    }
    rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr sub_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_;

    std::string discover_STM(uint16_t vid, uint16_t pid) {
        std::string dev_path;
        libusbp::device device = libusbp::find_device_with_vid_pid(vid, pid);
        if (!device) {
            return "NULL";
        }
        else {
            for (int i = 0; i < 2; i++) {
                try {
                    libusbp::serial_port port(device, i, true);
                    std::string port_name = port.get_name();
                    dev_path = port_name;
                    return dev_path;
                }
                catch (const std::exception &error) {
                    RCLCPP_ERROR(rclcpp::get_logger("serial_node"), "Exception %s", error.what());
                    return "NULL";
                }
            }
        }
        return "NULL";
    }

    int initialize_tty(const char *dev_path){
        int serial_port = open(dev_path, O_RDWR);
        printf("serial_port: %d\n", serial_port);

        if (serial_port < 0)  
        {
        RCLCPP_ERROR(rclcpp::get_logger("serial_node"), "Error %d from open: %s", errno, strerror(errno));
        return -1;
        }

        struct termios tty;
        if (tcgetattr(serial_port, &tty) != 0) 
        {
            RCLCPP_ERROR(rclcpp::get_logger("serial_node"), "Error %d from tcgetattr: %s", errno, strerror(errno));
            return -1;
        }

        tty.c_cflag &= ~PARENB;        // Clear parity bit, disabling parity (most common)
        tty.c_cflag &= ~CSTOPB;        // Clear stop field, only one stop bit used in communication (most common)
        tty.c_cflag &= ~CSIZE;         // Clear all bits that set the data size
        tty.c_cflag |= CS8;            // 8 bits per byte (most common)
        tty.c_cflag |= CRTSCTS;        // Enable RTS/CTS hardware flow control
        tty.c_cflag |= CREAD | CLOCAL; // Turn on READ & ignore ctrl lines (CLOCAL = 1)

        // Set baud rate to 115200 (common for STM32)
        cfsetispeed(&tty, B115200);
        cfsetospeed(&tty, B115200);

        tty.c_lflag &= ~ICANON;        // Input is not processed
        tty.c_lflag &= ~ECHO;          // Disable echo
        tty.c_lflag &= ~ECHOE;         // Disable erasure
        tty.c_lflag &= ~ECHONL;        // Disable new-line echo
        tty.c_lflag &= ~ISIG;          // Disable interpretation of INTR, QUIT and SUSP
        tty.c_iflag &= ~(IXON | IXOFF | IXANY); // Turn off s/w flow ctrl
        tty.c_iflag &= ~(IGNBRK | BRKINT | PARMRK | ISTRIP | INLCR | IGNCR | ICRNL); // Disable special handling of received bytes

        tty.c_oflag &= ~OPOST;         // Prevent special interpretation of output bytes (e.g. newline chars)
        tty.c_oflag &= ~ONLCR;         // Prevent conversion of newline to carriage return/line feed

        tty.c_cc[VTIME] = 10;          // Wait for up to 1s (10 deciseconds), returning as soon as any data is received
        tty.c_cc[VMIN] = 0;

        if (tcsetattr(serial_port, TCSANOW, &tty) != 0) {
            RCLCPP_ERROR(rclcpp::get_logger("serial_node"), "Error %d from tcsetattr: %s", errno, strerror(errno));
            return -1;
        }
        RCLCPP_INFO(rclcpp::get_logger("serial_node"), "Opened %s serial port with fd %d", dev_path, serial_port);
        return serial_port;
    }
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<JoyPublisher>());
  rclcpp::shutdown();
  return 0;
}