// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/ComputeRectangleArea.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__STRUCT_H_
#define INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ComputeRectangleArea in the package interfaces.
typedef struct interfaces__srv__ComputeRectangleArea_Request
{
  double length;
  double width;
} interfaces__srv__ComputeRectangleArea_Request;

// Struct for a sequence of interfaces__srv__ComputeRectangleArea_Request.
typedef struct interfaces__srv__ComputeRectangleArea_Request__Sequence
{
  interfaces__srv__ComputeRectangleArea_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__ComputeRectangleArea_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ComputeRectangleArea in the package interfaces.
typedef struct interfaces__srv__ComputeRectangleArea_Response
{
  double area;
} interfaces__srv__ComputeRectangleArea_Response;

// Struct for a sequence of interfaces__srv__ComputeRectangleArea_Response.
typedef struct interfaces__srv__ComputeRectangleArea_Response__Sequence
{
  interfaces__srv__ComputeRectangleArea_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__ComputeRectangleArea_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__STRUCT_H_
