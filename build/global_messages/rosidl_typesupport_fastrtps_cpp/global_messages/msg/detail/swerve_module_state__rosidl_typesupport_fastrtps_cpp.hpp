// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from global_messages:msg/SwerveModuleState.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "global_messages/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "global_messages/msg/detail/swerve_module_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace global_messages
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_global_messages
cdr_serialize(
  const global_messages::msg::SwerveModuleState & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_global_messages
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  global_messages::msg::SwerveModuleState & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_global_messages
get_serialized_size(
  const global_messages::msg::SwerveModuleState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_global_messages
max_serialized_size_SwerveModuleState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace global_messages

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_global_messages
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, global_messages, msg, SwerveModuleState)();

#ifdef __cplusplus
}
#endif

#endif  // GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
