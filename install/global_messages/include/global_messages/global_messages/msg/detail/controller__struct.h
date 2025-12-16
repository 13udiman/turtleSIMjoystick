// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from global_messages:msg/Controller.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_MESSAGES__MSG__DETAIL__CONTROLLER__STRUCT_H_
#define GLOBAL_MESSAGES__MSG__DETAIL__CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Controller in the package global_messages.
typedef struct global_messages__msg__Controller
{
  float velx;
  float vely;
  float angvel;
} global_messages__msg__Controller;

// Struct for a sequence of global_messages__msg__Controller.
typedef struct global_messages__msg__Controller__Sequence
{
  global_messages__msg__Controller * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} global_messages__msg__Controller__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLOBAL_MESSAGES__MSG__DETAIL__CONTROLLER__STRUCT_H_
