// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from global_messages:msg/SwerveModuleState.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATE__TRAITS_HPP_
#define GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "global_messages/msg/detail/swerve_module_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace global_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const SwerveModuleState & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SwerveModuleState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SwerveModuleState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace global_messages

namespace rosidl_generator_traits
{

[[deprecated("use global_messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const global_messages::msg::SwerveModuleState & msg,
  std::ostream & out, size_t indentation = 0)
{
  global_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use global_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const global_messages::msg::SwerveModuleState & msg)
{
  return global_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<global_messages::msg::SwerveModuleState>()
{
  return "global_messages::msg::SwerveModuleState";
}

template<>
inline const char * name<global_messages::msg::SwerveModuleState>()
{
  return "global_messages/msg/SwerveModuleState";
}

template<>
struct has_fixed_size<global_messages::msg::SwerveModuleState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<global_messages::msg::SwerveModuleState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<global_messages::msg::SwerveModuleState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATE__TRAITS_HPP_
