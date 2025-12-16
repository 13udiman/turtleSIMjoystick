// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from global_messages:msg/SwerveModuleStates.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATES__STRUCT_H_
#define GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'modules'
#include "global_messages/msg/detail/swerve_module_state__struct.h"

/// Struct defined in msg/SwerveModuleStates in the package global_messages.
typedef struct global_messages__msg__SwerveModuleStates
{
  global_messages__msg__SwerveModuleState modules[4];
} global_messages__msg__SwerveModuleStates;

// Struct for a sequence of global_messages__msg__SwerveModuleStates.
typedef struct global_messages__msg__SwerveModuleStates__Sequence
{
  global_messages__msg__SwerveModuleStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} global_messages__msg__SwerveModuleStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATES__STRUCT_H_
