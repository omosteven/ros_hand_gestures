// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:action/Gesture.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__ACTION__DETAIL__GESTURE__STRUCT_H_
#define INTERFACES__ACTION__DETAIL__GESTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'gesture_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Gesture in the package interfaces.
typedef struct interfaces__action__Gesture_Goal
{
  rosidl_runtime_c__String gesture_name;
} interfaces__action__Gesture_Goal;

// Struct for a sequence of interfaces__action__Gesture_Goal.
typedef struct interfaces__action__Gesture_Goal__Sequence
{
  interfaces__action__Gesture_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__Gesture_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Gesture in the package interfaces.
typedef struct interfaces__action__Gesture_Result
{
  bool success;
} interfaces__action__Gesture_Result;

// Struct for a sequence of interfaces__action__Gesture_Result.
typedef struct interfaces__action__Gesture_Result__Sequence
{
  interfaces__action__Gesture_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__Gesture_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_state'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Gesture in the package interfaces.
typedef struct interfaces__action__Gesture_Feedback
{
  rosidl_runtime_c__String current_state;
} interfaces__action__Gesture_Feedback;

// Struct for a sequence of interfaces__action__Gesture_Feedback.
typedef struct interfaces__action__Gesture_Feedback__Sequence
{
  interfaces__action__Gesture_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__Gesture_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "interfaces/action/detail/gesture__struct.h"

/// Struct defined in action/Gesture in the package interfaces.
typedef struct interfaces__action__Gesture_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  interfaces__action__Gesture_Goal goal;
} interfaces__action__Gesture_SendGoal_Request;

// Struct for a sequence of interfaces__action__Gesture_SendGoal_Request.
typedef struct interfaces__action__Gesture_SendGoal_Request__Sequence
{
  interfaces__action__Gesture_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__Gesture_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Gesture in the package interfaces.
typedef struct interfaces__action__Gesture_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} interfaces__action__Gesture_SendGoal_Response;

// Struct for a sequence of interfaces__action__Gesture_SendGoal_Response.
typedef struct interfaces__action__Gesture_SendGoal_Response__Sequence
{
  interfaces__action__Gesture_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__Gesture_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Gesture in the package interfaces.
typedef struct interfaces__action__Gesture_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} interfaces__action__Gesture_GetResult_Request;

// Struct for a sequence of interfaces__action__Gesture_GetResult_Request.
typedef struct interfaces__action__Gesture_GetResult_Request__Sequence
{
  interfaces__action__Gesture_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__Gesture_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "interfaces/action/detail/gesture__struct.h"

/// Struct defined in action/Gesture in the package interfaces.
typedef struct interfaces__action__Gesture_GetResult_Response
{
  int8_t status;
  interfaces__action__Gesture_Result result;
} interfaces__action__Gesture_GetResult_Response;

// Struct for a sequence of interfaces__action__Gesture_GetResult_Response.
typedef struct interfaces__action__Gesture_GetResult_Response__Sequence
{
  interfaces__action__Gesture_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__Gesture_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "interfaces/action/detail/gesture__struct.h"

/// Struct defined in action/Gesture in the package interfaces.
typedef struct interfaces__action__Gesture_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  interfaces__action__Gesture_Feedback feedback;
} interfaces__action__Gesture_FeedbackMessage;

// Struct for a sequence of interfaces__action__Gesture_FeedbackMessage.
typedef struct interfaces__action__Gesture_FeedbackMessage__Sequence
{
  interfaces__action__Gesture_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__Gesture_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__ACTION__DETAIL__GESTURE__STRUCT_H_
