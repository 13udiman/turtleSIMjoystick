cmake_minimum_required(VERSION 3.8)
project(global_messages)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Controller.msg"
  "msg/SwerveModuleState.msg"
  "msg/SwerveModuleStates.msg"
  DEPENDENCIES std_msgs
)
ament_export_dependencies(rosidl_default_runtime std_msgs)

include_directories(
  include
  ${LIBUSBP_INCLUDE_DIR}
)

ament_package()
