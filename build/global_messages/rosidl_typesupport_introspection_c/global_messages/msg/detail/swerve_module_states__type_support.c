// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from global_messages:msg/SwerveModuleStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "global_messages/msg/detail/swerve_module_states__rosidl_typesupport_introspection_c.h"
#include "global_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "global_messages/msg/detail/swerve_module_states__functions.h"
#include "global_messages/msg/detail/swerve_module_states__struct.h"


// Include directives for member types
// Member `modules`
#include "global_messages/msg/swerve_module_state.h"
// Member `modules`
#include "global_messages/msg/detail/swerve_module_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__SwerveModuleStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  global_messages__msg__SwerveModuleStates__init(message_memory);
}

void global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__SwerveModuleStates_fini_function(void * message_memory)
{
  global_messages__msg__SwerveModuleStates__fini(message_memory);
}

size_t global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__size_function__SwerveModuleStates__modules(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__get_const_function__SwerveModuleStates__modules(
  const void * untyped_member, size_t index)
{
  const global_messages__msg__SwerveModuleState * member =
    (const global_messages__msg__SwerveModuleState *)(untyped_member);
  return &member[index];
}

void * global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__get_function__SwerveModuleStates__modules(
  void * untyped_member, size_t index)
{
  global_messages__msg__SwerveModuleState * member =
    (global_messages__msg__SwerveModuleState *)(untyped_member);
  return &member[index];
}

void global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__fetch_function__SwerveModuleStates__modules(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const global_messages__msg__SwerveModuleState * item =
    ((const global_messages__msg__SwerveModuleState *)
    global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__get_const_function__SwerveModuleStates__modules(untyped_member, index));
  global_messages__msg__SwerveModuleState * value =
    (global_messages__msg__SwerveModuleState *)(untyped_value);
  *value = *item;
}

void global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__assign_function__SwerveModuleStates__modules(
  void * untyped_member, size_t index, const void * untyped_value)
{
  global_messages__msg__SwerveModuleState * item =
    ((global_messages__msg__SwerveModuleState *)
    global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__get_function__SwerveModuleStates__modules(untyped_member, index));
  const global_messages__msg__SwerveModuleState * value =
    (const global_messages__msg__SwerveModuleState *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__SwerveModuleStates_message_member_array[1] = {
  {
    "modules",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(global_messages__msg__SwerveModuleStates, modules),  // bytes offset in struct
    NULL,  // default value
    global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__size_function__SwerveModuleStates__modules,  // size() function pointer
    global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__get_const_function__SwerveModuleStates__modules,  // get_const(index) function pointer
    global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__get_function__SwerveModuleStates__modules,  // get(index) function pointer
    global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__fetch_function__SwerveModuleStates__modules,  // fetch(index, &value) function pointer
    global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__assign_function__SwerveModuleStates__modules,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__SwerveModuleStates_message_members = {
  "global_messages__msg",  // message namespace
  "SwerveModuleStates",  // message name
  1,  // number of fields
  sizeof(global_messages__msg__SwerveModuleStates),
  global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__SwerveModuleStates_message_member_array,  // message members
  global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__SwerveModuleStates_init_function,  // function to initialize message memory (memory has to be allocated)
  global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__SwerveModuleStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__SwerveModuleStates_message_type_support_handle = {
  0,
  &global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__SwerveModuleStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_global_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, global_messages, msg, SwerveModuleStates)() {
  global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__SwerveModuleStates_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, global_messages, msg, SwerveModuleState)();
  if (!global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__SwerveModuleStates_message_type_support_handle.typesupport_identifier) {
    global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__SwerveModuleStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &global_messages__msg__SwerveModuleStates__rosidl_typesupport_introspection_c__SwerveModuleStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
