// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from global_messages:msg/SwerveModuleStates.idl
// generated code does not contain a copyright notice
#include "global_messages/msg/detail/swerve_module_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `modules`
#include "global_messages/msg/detail/swerve_module_state__functions.h"

bool
global_messages__msg__SwerveModuleStates__init(global_messages__msg__SwerveModuleStates * msg)
{
  if (!msg) {
    return false;
  }
  // modules
  for (size_t i = 0; i < 4; ++i) {
    if (!global_messages__msg__SwerveModuleState__init(&msg->modules[i])) {
      global_messages__msg__SwerveModuleStates__fini(msg);
      return false;
    }
  }
  return true;
}

void
global_messages__msg__SwerveModuleStates__fini(global_messages__msg__SwerveModuleStates * msg)
{
  if (!msg) {
    return;
  }
  // modules
  for (size_t i = 0; i < 4; ++i) {
    global_messages__msg__SwerveModuleState__fini(&msg->modules[i]);
  }
}

bool
global_messages__msg__SwerveModuleStates__are_equal(const global_messages__msg__SwerveModuleStates * lhs, const global_messages__msg__SwerveModuleStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // modules
  for (size_t i = 0; i < 4; ++i) {
    if (!global_messages__msg__SwerveModuleState__are_equal(
        &(lhs->modules[i]), &(rhs->modules[i])))
    {
      return false;
    }
  }
  return true;
}

bool
global_messages__msg__SwerveModuleStates__copy(
  const global_messages__msg__SwerveModuleStates * input,
  global_messages__msg__SwerveModuleStates * output)
{
  if (!input || !output) {
    return false;
  }
  // modules
  for (size_t i = 0; i < 4; ++i) {
    if (!global_messages__msg__SwerveModuleState__copy(
        &(input->modules[i]), &(output->modules[i])))
    {
      return false;
    }
  }
  return true;
}

global_messages__msg__SwerveModuleStates *
global_messages__msg__SwerveModuleStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_messages__msg__SwerveModuleStates * msg = (global_messages__msg__SwerveModuleStates *)allocator.allocate(sizeof(global_messages__msg__SwerveModuleStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(global_messages__msg__SwerveModuleStates));
  bool success = global_messages__msg__SwerveModuleStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
global_messages__msg__SwerveModuleStates__destroy(global_messages__msg__SwerveModuleStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    global_messages__msg__SwerveModuleStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
global_messages__msg__SwerveModuleStates__Sequence__init(global_messages__msg__SwerveModuleStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_messages__msg__SwerveModuleStates * data = NULL;

  if (size) {
    data = (global_messages__msg__SwerveModuleStates *)allocator.zero_allocate(size, sizeof(global_messages__msg__SwerveModuleStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = global_messages__msg__SwerveModuleStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        global_messages__msg__SwerveModuleStates__fini(&data[i - 1]);
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
global_messages__msg__SwerveModuleStates__Sequence__fini(global_messages__msg__SwerveModuleStates__Sequence * array)
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
      global_messages__msg__SwerveModuleStates__fini(&array->data[i]);
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

global_messages__msg__SwerveModuleStates__Sequence *
global_messages__msg__SwerveModuleStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_messages__msg__SwerveModuleStates__Sequence * array = (global_messages__msg__SwerveModuleStates__Sequence *)allocator.allocate(sizeof(global_messages__msg__SwerveModuleStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = global_messages__msg__SwerveModuleStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
global_messages__msg__SwerveModuleStates__Sequence__destroy(global_messages__msg__SwerveModuleStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    global_messages__msg__SwerveModuleStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
global_messages__msg__SwerveModuleStates__Sequence__are_equal(const global_messages__msg__SwerveModuleStates__Sequence * lhs, const global_messages__msg__SwerveModuleStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!global_messages__msg__SwerveModuleStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
global_messages__msg__SwerveModuleStates__Sequence__copy(
  const global_messages__msg__SwerveModuleStates__Sequence * input,
  global_messages__msg__SwerveModuleStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(global_messages__msg__SwerveModuleStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    global_messages__msg__SwerveModuleStates * data =
      (global_messages__msg__SwerveModuleStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!global_messages__msg__SwerveModuleStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          global_messages__msg__SwerveModuleStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!global_messages__msg__SwerveModuleStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
