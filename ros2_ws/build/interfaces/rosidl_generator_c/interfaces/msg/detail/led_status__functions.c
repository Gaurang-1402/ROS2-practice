// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/LedStatus.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/led_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `led_status`
#include "rosidl_runtime_c/string_functions.h"

bool
interfaces__msg__LedStatus__init(interfaces__msg__LedStatus * msg)
{
  if (!msg) {
    return false;
  }
  // led_status
  if (!rosidl_runtime_c__String__init(&msg->led_status)) {
    interfaces__msg__LedStatus__fini(msg);
    return false;
  }
  // battery_level
  return true;
}

void
interfaces__msg__LedStatus__fini(interfaces__msg__LedStatus * msg)
{
  if (!msg) {
    return;
  }
  // led_status
  rosidl_runtime_c__String__fini(&msg->led_status);
  // battery_level
}

bool
interfaces__msg__LedStatus__are_equal(const interfaces__msg__LedStatus * lhs, const interfaces__msg__LedStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->led_status), &(rhs->led_status)))
  {
    return false;
  }
  // battery_level
  if (lhs->battery_level != rhs->battery_level) {
    return false;
  }
  return true;
}

bool
interfaces__msg__LedStatus__copy(
  const interfaces__msg__LedStatus * input,
  interfaces__msg__LedStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // led_status
  if (!rosidl_runtime_c__String__copy(
      &(input->led_status), &(output->led_status)))
  {
    return false;
  }
  // battery_level
  output->battery_level = input->battery_level;
  return true;
}

interfaces__msg__LedStatus *
interfaces__msg__LedStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__LedStatus * msg = (interfaces__msg__LedStatus *)allocator.allocate(sizeof(interfaces__msg__LedStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__LedStatus));
  bool success = interfaces__msg__LedStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__LedStatus__destroy(interfaces__msg__LedStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__LedStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__LedStatus__Sequence__init(interfaces__msg__LedStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__LedStatus * data = NULL;

  if (size) {
    data = (interfaces__msg__LedStatus *)allocator.zero_allocate(size, sizeof(interfaces__msg__LedStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__LedStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__LedStatus__fini(&data[i - 1]);
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
interfaces__msg__LedStatus__Sequence__fini(interfaces__msg__LedStatus__Sequence * array)
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
      interfaces__msg__LedStatus__fini(&array->data[i]);
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

interfaces__msg__LedStatus__Sequence *
interfaces__msg__LedStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__LedStatus__Sequence * array = (interfaces__msg__LedStatus__Sequence *)allocator.allocate(sizeof(interfaces__msg__LedStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__LedStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__LedStatus__Sequence__destroy(interfaces__msg__LedStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__LedStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__LedStatus__Sequence__are_equal(const interfaces__msg__LedStatus__Sequence * lhs, const interfaces__msg__LedStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__LedStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__LedStatus__Sequence__copy(
  const interfaces__msg__LedStatus__Sequence * input,
  interfaces__msg__LedStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__LedStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__LedStatus * data =
      (interfaces__msg__LedStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__LedStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__LedStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__LedStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
