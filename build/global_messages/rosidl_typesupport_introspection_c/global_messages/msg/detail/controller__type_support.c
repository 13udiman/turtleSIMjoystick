// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from global_messages:msg/Controller.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "global_messages/msg/detail/controller__rosidl_typesupport_introspection_c.h"
#include "global_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "global_messages/msg/detail/controller__functions.h"
#include "global_messages/msg/detail/controller__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void global_messages__msg__Controller__rosidl_typesupport_introspection_c__Controller_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  global_messages__msg__Controller__init(message_memory);
}

void global_messages__msg__Controller__rosidl_typesupport_introspection_c__Controller_fini_function(void * message_memory)
{
  global_messages__msg__Controller__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember global_messages__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_member_array[3] = {
  {
    "velx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_messages__msg__Controller, velx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vely",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_messages__msg__Controller, vely),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angvel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_messages__msg__Controller, angvel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers global_messages__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_members = {
  "global_messages__msg",  // message namespace
  "Controller",  // message name
  3,  // number of fields
  sizeof(global_messages__msg__Controller),
  global_messages__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_member_array,  // message members
  global_messages__msg__Controller__rosidl_typesupport_introspection_c__Controller_init_function,  // function to initialize message memory (memory has to be allocated)
  global_messages__msg__Controller__rosidl_typesupport_introspection_c__Controller_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t global_messages__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_type_support_handle = {
  0,
  &global_messages__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_global_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, global_messages, msg, Controller)() {
  if (!global_messages__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_type_support_handle.typesupport_identifier) {
    global_messages__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &global_messages__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
