// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/LedStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LED_STATUS__STRUCT_H_
#define INTERFACES__MSG__DETAIL__LED_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'led_status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LedStatus in the package interfaces.
typedef struct interfaces__msg__LedStatus
{
  rosidl_runtime_c__String led_status;
  double battery_level;
} interfaces__msg__LedStatus;

// Struct for a sequence of interfaces__msg__LedStatus.
typedef struct interfaces__msg__LedStatus__Sequence
{
  interfaces__msg__LedStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__LedStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__LED_STATUS__STRUCT_H_
