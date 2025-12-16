// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from global_messages:msg/SwerveModuleState.idl
// generated code does not contain a copyright notice
#include "global_messages/msg/detail/swerve_module_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
global_messages__msg__SwerveModuleState__init(global_messages__msg__SwerveModuleState * msg)
{
  if (!msg) {
    return false;
  }
  // speed
  // angle
  return true;
}

void
global_messages__msg__SwerveModuleState__fini(global_messages__msg__SwerveModuleState * msg)
{
  if (!msg) {
    return;
  }
  // speed
  // angle
}

bool
global_messages__msg__SwerveModuleState__are_equal(const global_messages__msg__SwerveModuleState * lhs, const global_messages__msg__SwerveModuleState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  return true;
}

bool
global_messages__msg__SwerveModuleState__copy(
  const global_messages__msg__SwerveModuleState * input,
  global_messages__msg__SwerveModuleState * output)
{
  if (!input || !output) {
    return false;
  }
  // speed
  output->speed = input->speed;
  // angle
  output->angle = input->angle;
  return true;
}

global_messages__msg__SwerveModuleState *
global_messages__msg__SwerveModuleState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_messages__msg__SwerveModuleState * msg = (global_messages__msg__SwerveModuleState *)allocator.allocate(sizeof(global_messages__msg__SwerveModuleState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(global_messages__msg__SwerveModuleState));
  bool success = global_messages__msg__SwerveModuleState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
global_messages__msg__SwerveModuleState__destroy(global_messages__msg__SwerveModuleState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    global_messages__msg__SwerveModuleState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
global_messages__msg__SwerveModuleState__Sequence__init(global_messages__msg__SwerveModuleState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_messages__msg__SwerveModuleState * data = NULL;

  if (size) {
    data = (global_messages__msg__SwerveModuleState *)allocator.zero_allocate(size, sizeof(global_messages__msg__SwerveModuleState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = global_messages__msg__SwerveModuleState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        global_messages__msg__SwerveModuleState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
global_messages__msg__SwerveModuleState__Sequence__fini(global_messages__msg__SwerveModuleState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      global_messages__msg__SwerveModuleState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

global_messages__msg__SwerveModuleState__Sequence *
global_messages__msg__SwerveModuleState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_messages__msg__SwerveModuleState__Sequence * array = (global_messages__msg__SwerveModuleState__Sequence *)allocator.allocate(sizeof(global_messages__msg__SwerveModuleState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = global_messages__msg__SwerveModuleState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
global_messages__msg__SwerveModuleState__Sequence__destroy(global_messages__msg__SwerveModuleState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    global_messages__msg__SwerveModuleState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
global_messages__msg__SwerveModuleState__Sequence__are_equal(const global_messages__msg__SwerveModuleState__Sequence * lhs, const global_messages__msg__SwerveModuleState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!global_messages__msg__SwerveModuleState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
global_messages__msg__SwerveModuleState__Sequence__copy(
  const global_messages__msg__SwerveModuleState__Sequence * input,
  global_messages__msg__SwerveModuleState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(global_messages__msg__SwerveModuleState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    global_messages__msg__SwerveModuleState * data =
      (global_messages__msg__SwerveModuleState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!global_messages__msg__SwerveModuleState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          global_messages__msg__SwerveModuleState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!global_messages__msg__SwerveModuleState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
