// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from global_messages:msg/Controller.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_MESSAGES__MSG__DETAIL__CONTROLLER__BUILDER_HPP_
#define GLOBAL_MESSAGES__MSG__DETAIL__CONTROLLER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "global_messages/msg/detail/controller__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace global_messages
{

namespace msg
{

namespace builder
{

class Init_Controller_angvel
{
public:
  explicit Init_Controller_angvel(::global_messages::msg::Controller & msg)
  : msg_(msg)
  {}
  ::global_messages::msg::Controller angvel(::global_messages::msg::Controller::_angvel_type arg)
  {
    msg_.angvel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::global_messages::msg::Controller msg_;
};

class Init_Controller_vely
{
public:
  explicit Init_Controller_vely(::global_messages::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_angvel vely(::global_messages::msg::Controller::_vely_type arg)
  {
    msg_.vely = std::move(arg);
    return Init_Controller_angvel(msg_);
  }

private:
  ::global_messages::msg::Controller msg_;
};

class Init_Controller_velx
{
public:
  Init_Controller_velx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Controller_vely velx(::global_messages::msg::Controller::_velx_type arg)
  {
    msg_.velx = std::move(arg);
    return Init_Controller_vely(msg_);
  }

private:
  ::global_messages::msg::Controller msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::global_messages::msg::Controller>()
{
  return global_messages::msg::builder::Init_Controller_velx();
}

}  // namespace global_messages

#endif  // GLOBAL_MESSAGES__MSG__DETAIL__CONTROLLER__BUILDER_HPP_
