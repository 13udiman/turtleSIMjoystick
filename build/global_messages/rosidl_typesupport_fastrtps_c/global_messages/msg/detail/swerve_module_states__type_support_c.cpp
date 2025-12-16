// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from global_messages:msg/SwerveModuleStates.idl
// generated code does not contain a copyright notice
#include "global_messages/msg/detail/swerve_module_states__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "global_messages/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "global_messages/msg/detail/swerve_module_states__struct.h"
#include "global_messages/msg/detail/swerve_module_states__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "global_messages/msg/detail/swerve_module_state__functions.h"  // modules

// forward declare type support functions
size_t get_serialized_size_global_messages__msg__SwerveModuleState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_global_messages__msg__SwerveModuleState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, global_messages, msg, SwerveModuleState)();


using _SwerveModuleStates__ros_msg_type = global_messages__msg__SwerveModuleStates;

static bool _SwerveModuleStates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SwerveModuleStates__ros_msg_type * ros_message = static_cast<const _SwerveModuleStates__ros_msg_type *>(untyped_ros_message);
  // Field name: modules
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, global_messages, msg, SwerveModuleState
      )()->data);
    size_t size = 4;
    auto array_ptr = ros_message->modules;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _SwerveModuleStates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SwerveModuleStates__ros_msg_type * ros_message = static_cast<_SwerveModuleStates__ros_msg_type *>(untyped_ros_message);
  // Field name: modules
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, global_messages, msg, SwerveModuleState
      )()->data);
    size_t size = 4;
    auto array_ptr = ros_message->modules;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_global_messages
size_t get_serialized_size_global_messages__msg__SwerveModuleStates(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SwerveModuleStates__ros_msg_type * ros_message = static_cast<const _SwerveModuleStates__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name modules
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->modules;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_global_messages__msg__SwerveModuleState(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SwerveModuleStates__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_global_messages__msg__SwerveModuleStates(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_global_messages
size_t max_serialized_size_global_messages__msg__SwerveModuleStates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: modules
  {
    size_t array_size = 4;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_global_messages__msg__SwerveModuleState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = global_messages__msg__SwerveModuleStates;
    is_plain =
      (
      offsetof(DataType, modules) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SwerveModuleStates__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_global_messages__msg__SwerveModuleStates(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SwerveModuleStates = {
  "global_messages::msg",
  "SwerveModuleStates",
  _SwerveModuleStates__cdr_serialize,
  _SwerveModuleStates__cdr_deserialize,
  _SwerveModuleStates__get_serialized_size,
  _SwerveModuleStates__max_serialized_size
};

static rosidl_message_type_support_t _SwerveModuleStates__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SwerveModuleStates,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, global_messages, msg, SwerveModuleStates)() {
  return &_SwerveModuleStates__type_support;
}

#if defined(__cplusplus)
}
#endif
