// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from global_messages:msg/SwerveModuleStates.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATES__TRAITS_HPP_
#define GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "global_messages/msg/detail/swerve_module_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'modules'
#include "global_messages/msg/detail/swerve_module_state__traits.hpp"

namespace global_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const SwerveModuleStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: modules
  {
    if (msg.modules.size() == 0) {
      out << "modules: []";
    } else {
      out << "modules: [";
      size_t pending_items = msg.modules.size();
      for (auto item : msg.modules) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SwerveModuleStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: modules
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.modules.size() == 0) {
      out << "modules: []\n";
    } else {
      out << "modules:\n";
      for (auto item : msg.modules) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SwerveModuleStates & msg, bool use_flow_style = false)
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
  const global_messages::msg::SwerveModuleStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  global_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use global_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const global_messages::msg::SwerveModuleStates & msg)
{
  return global_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<global_messages::msg::SwerveModuleStates>()
{
  return "global_messages::msg::SwerveModuleStates";
}

template<>
inline const char * name<global_messages::msg::SwerveModuleStates>()
{
  return "global_messages/msg/SwerveModuleStates";
}

template<>
struct has_fixed_size<global_messages::msg::SwerveModuleStates>
  : std::integral_constant<bool, has_fixed_size<global_messages::msg::SwerveModuleState>::value> {};

template<>
struct has_bounded_size<global_messages::msg::SwerveModuleStates>
  : std::integral_constant<bool, has_bounded_size<global_messages::msg::SwerveModuleState>::value> {};

template<>
struct is_message<global_messages::msg::SwerveModuleStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATES__TRAITS_HPP_
