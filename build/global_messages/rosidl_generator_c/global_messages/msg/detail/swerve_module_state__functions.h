// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from global_messages:msg/SwerveModuleState.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATE__FUNCTIONS_H_
#define GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "global_messages/msg/rosidl_generator_c__visibility_control.h"

#include "global_messages/msg/detail/swerve_module_state__struct.h"

/// Initialize msg/SwerveModuleState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * global_messages__msg__SwerveModuleState
 * )) before or use
 * global_messages__msg__SwerveModuleState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_global_messages
bool
global_messages__msg__SwerveModuleState__init(global_messages__msg__SwerveModuleState * msg);

/// Finalize msg/SwerveModuleState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_messages
void
global_messages__msg__SwerveModuleState__fini(global_messages__msg__SwerveModuleState * msg);

/// Create msg/SwerveModuleState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * global_messages__msg__SwerveModuleState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_global_messages
global_messages__msg__SwerveModuleState *
global_messages__msg__SwerveModuleState__create();

/// Destroy msg/SwerveModuleState message.
/**
 * It calls
 * global_messages__msg__SwerveModuleState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_messages
void
global_messages__msg__SwerveModuleState__destroy(global_messages__msg__SwerveModuleState * msg);

/// Check for msg/SwerveModuleState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_messages
bool
global_messages__msg__SwerveModuleState__are_equal(const global_messages__msg__SwerveModuleState * lhs, const global_messages__msg__SwerveModuleState * rhs);

/// Copy a msg/SwerveModuleState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_messages
bool
global_messages__msg__SwerveModuleState__copy(
  const global_messages__msg__SwerveModuleState * input,
  global_messages__msg__SwerveModuleState * output);

/// Initialize array of msg/SwerveModuleState messages.
/**
 * It allocates the memory for the number of elements and calls
 * global_messages__msg__SwerveModuleState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_messages
bool
global_messages__msg__SwerveModuleState__Sequence__init(global_messages__msg__SwerveModuleState__Sequence * array, size_t size);

/// Finalize array of msg/SwerveModuleState messages.
/**
 * It calls
 * global_messages__msg__SwerveModuleState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_messages
void
global_messages__msg__SwerveModuleState__Sequence__fini(global_messages__msg__SwerveModuleState__Sequence * array);

/// Create array of msg/SwerveModuleState messages.
/**
 * It allocates the memory for the array and calls
 * global_messages__msg__SwerveModuleState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_global_messages
global_messages__msg__SwerveModuleState__Sequence *
global_messages__msg__SwerveModuleState__Sequence__create(size_t size);

/// Destroy array of msg/SwerveModuleState messages.
/**
 * It calls
 * global_messages__msg__SwerveModuleState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_messages
void
global_messages__msg__SwerveModuleState__Sequence__destroy(global_messages__msg__SwerveModuleState__Sequence * array);

/// Check for msg/SwerveModuleState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_messages
bool
global_messages__msg__SwerveModuleState__Sequence__are_equal(const global_messages__msg__SwerveModuleState__Sequence * lhs, const global_messages__msg__SwerveModuleState__Sequence * rhs);

/// Copy an array of msg/SwerveModuleState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_messages
bool
global_messages__msg__SwerveModuleState__Sequence__copy(
  const global_messages__msg__SwerveModuleState__Sequence * input,
  global_messages__msg__SwerveModuleState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATE__FUNCTIONS_H_
