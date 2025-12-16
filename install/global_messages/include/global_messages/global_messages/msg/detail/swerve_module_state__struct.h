// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from global_messages:msg/SwerveModuleState.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATE__STRUCT_H_
#define GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SwerveModuleState in the package global_messages.
typedef struct global_messages__msg__SwerveModuleState
{
  /// wheel speed (m/s)
  float speed;
  /// wheel angle (radians)
  float angle;
} global_messages__msg__SwerveModuleState;

// Struct for a sequence of global_messages__msg__SwerveModuleState.
typedef struct global_messages__msg__SwerveModuleState__Sequence
{
  global_messages__msg__SwerveModuleState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} global_messages__msg__SwerveModuleState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATE__STRUCT_H_
