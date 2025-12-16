// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from global_messages:msg/SwerveModuleStates.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "global_messages/msg/detail/swerve_module_states__struct.hpp"
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

void SwerveModuleStates_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) global_messages::msg::SwerveModuleStates(_init);
}

void SwerveModuleStates_fini_function(void * message_memory)
{
  auto typed_message = static_cast<global_messages::msg::SwerveModuleStates *>(message_memory);
  typed_message->~SwerveModuleStates();
}

size_t size_function__SwerveModuleStates__modules(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SwerveModuleStates__modules(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<global_messages::msg::SwerveModuleState, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SwerveModuleStates__modules(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<global_messages::msg::SwerveModuleState, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SwerveModuleStates__modules(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const global_messages::msg::SwerveModuleState *>(
    get_const_function__SwerveModuleStates__modules(untyped_member, index));
  auto & value = *reinterpret_cast<global_messages::msg::SwerveModuleState *>(untyped_value);
  value = item;
}

void assign_function__SwerveModuleStates__modules(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<global_messages::msg::SwerveModuleState *>(
    get_function__SwerveModuleStates__modules(untyped_member, index));
  const auto & value = *reinterpret_cast<const global_messages::msg::SwerveModuleState *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SwerveModuleStates_message_member_array[1] = {
  {
    "modules",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<global_messages::msg::SwerveModuleState>(),  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(global_messages::msg::SwerveModuleStates, modules),  // bytes offset in struct
    nullptr,  // default value
    size_function__SwerveModuleStates__modules,  // size() function pointer
    get_const_function__SwerveModuleStates__modules,  // get_const(index) function pointer
    get_function__SwerveModuleStates__modules,  // get(index) function pointer
    fetch_function__SwerveModuleStates__modules,  // fetch(index, &value) function pointer
    assign_function__SwerveModuleStates__modules,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SwerveModuleStates_message_members = {
  "global_messages::msg",  // message namespace
  "SwerveModuleStates",  // message name
  1,  // number of fields
  sizeof(global_messages::msg::SwerveModuleStates),
  SwerveModuleStates_message_member_array,  // message members
  SwerveModuleStates_init_function,  // function to initialize message memory (memory has to be allocated)
  SwerveModuleStates_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SwerveModuleStates_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SwerveModuleStates_message_members,
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
get_message_type_support_handle<global_messages::msg::SwerveModuleStates>()
{
  return &::global_messages::msg::rosidl_typesupport_introspection_cpp::SwerveModuleStates_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, global_messages, msg, SwerveModuleStates)() {
  return &::global_messages::msg::rosidl_typesupport_introspection_cpp::SwerveModuleStates_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
