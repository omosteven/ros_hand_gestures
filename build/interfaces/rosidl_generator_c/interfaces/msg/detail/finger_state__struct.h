// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/FingerState.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FINGER_STATE__STRUCT_H_
#define INTERFACES__MSG__DETAIL__FINGER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FingerState in the package interfaces.
typedef struct interfaces__msg__FingerState
{
  bool thumb;
  bool index;
  bool middle;
  bool ring;
  bool little;
} interfaces__msg__FingerState;

// Struct for a sequence of interfaces__msg__FingerState.
typedef struct interfaces__msg__FingerState__Sequence
{
  interfaces__msg__FingerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__FingerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__FINGER_STATE__STRUCT_H_
