// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from global_messages:msg/SwerveModuleStates.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATES__BUILDER_HPP_
#define GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "global_messages/msg/detail/swerve_module_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace global_messages
{

namespace msg
{

namespace builder
{

class Init_SwerveModuleStates_modules
{
public:
  Init_SwerveModuleStates_modules()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::global_messages::msg::SwerveModuleStates modules(::global_messages::msg::SwerveModuleStates::_modules_type arg)
  {
    msg_.modules = std::move(arg);
    return std::move(msg_);
  }

private:
  ::global_messages::msg::SwerveModuleStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::global_messages::msg::SwerveModuleStates>()
{
  return global_messages::msg::builder::Init_SwerveModuleStates_modules();
}

}  // namespace global_messages

#endif  // GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATES__BUILDER_HPP_
