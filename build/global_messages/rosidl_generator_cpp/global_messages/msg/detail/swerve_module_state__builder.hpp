// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from global_messages:msg/SwerveModuleState.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATE__BUILDER_HPP_
#define GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "global_messages/msg/detail/swerve_module_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace global_messages
{

namespace msg
{

namespace builder
{

class Init_SwerveModuleState_angle
{
public:
  explicit Init_SwerveModuleState_angle(::global_messages::msg::SwerveModuleState & msg)
  : msg_(msg)
  {}
  ::global_messages::msg::SwerveModuleState angle(::global_messages::msg::SwerveModuleState::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::global_messages::msg::SwerveModuleState msg_;
};

class Init_SwerveModuleState_speed
{
public:
  Init_SwerveModuleState_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SwerveModuleState_angle speed(::global_messages::msg::SwerveModuleState::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_SwerveModuleState_angle(msg_);
  }

private:
  ::global_messages::msg::SwerveModuleState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::global_messages::msg::SwerveModuleState>()
{
  return global_messages::msg::builder::Init_SwerveModuleState_speed();
}

}  // namespace global_messages

#endif  // GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATE__BUILDER_HPP_
