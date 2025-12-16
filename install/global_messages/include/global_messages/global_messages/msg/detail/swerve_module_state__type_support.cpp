// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from global_messages:msg/SwerveModuleState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "global_messages/msg/detail/swerve_module_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace global_messages
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SwerveModuleState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) global_messages::msg::SwerveModuleState(_init);
}

void SwerveModuleState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<global_messages::msg::SwerveModuleState *>(message_memory);
  typed_message->~SwerveModuleState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SwerveModuleState_message_member_array[2] = {
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_messages::msg::SwerveModuleState, speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_messages::msg::SwerveModuleState, angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SwerveModuleState_message_members = {
  "global_messages::msg",  // message namespace
  "SwerveModuleState",  // message name
  2,  // number of fields
  sizeof(global_messages::msg::SwerveModuleState),
  SwerveModuleState_message_member_array,  // message members
  SwerveModuleState_init_function,  // function to initialize message memory (memory has to be allocated)
  SwerveModuleState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SwerveModuleState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SwerveModuleState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace global_messages


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<global_messages::msg::SwerveModuleState>()
{
  return &::global_messages::msg::rosidl_typesupport_introspection_cpp::SwerveModuleState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, global_messages, msg, SwerveModuleState)() {
  return &::global_messages::msg::rosidl_typesupport_introspection_cpp::SwerveModuleState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
