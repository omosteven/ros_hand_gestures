// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:msg/FingerState.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/finger_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/msg/detail/finger_state__struct.h"
#include "interfaces/msg/detail/finger_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _FingerState__ros_msg_type = interfaces__msg__FingerState;

static bool _FingerState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FingerState__ros_msg_type * ros_message = static_cast<const _FingerState__ros_msg_type *>(untyped_ros_message);
  // Field name: thumb
  {
    cdr << (ros_message->thumb ? true : false);
  }

  // Field name: index
  {
    cdr << (ros_message->index ? true : false);
  }

  // Field name: middle
  {
    cdr << (ros_message->middle ? true : false);
  }

  // Field name: ring
  {
    cdr << (ros_message->ring ? true : false);
  }

  // Field name: little
  {
    cdr << (ros_message->little ? true : false);
  }

  return true;
}

static bool _FingerState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FingerState__ros_msg_type * ros_message = static_cast<_FingerState__ros_msg_type *>(untyped_ros_message);
  // Field name: thumb
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->thumb = tmp ? true : false;
  }

  // Field name: index
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->index = tmp ? true : false;
  }

  // Field name: middle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->middle = tmp ? true : false;
  }

  // Field name: ring
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ring = tmp ? true : false;
  }

  // Field name: little
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->little = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__msg__FingerState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FingerState__ros_msg_type * ros_message = static_cast<const _FingerState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name thumb
  {
    size_t item_size = sizeof(ros_message->thumb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name index
  {
    size_t item_size = sizeof(ros_message->index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name middle
  {
    size_t item_size = sizeof(ros_message->middle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ring
  {
    size_t item_size = sizeof(ros_message->ring);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name little
  {
    size_t item_size = sizeof(ros_message->little);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FingerState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__msg__FingerState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__msg__FingerState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: thumb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: middle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ring
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: little
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interfaces__msg__FingerState;
    is_plain =
      (
      offsetof(DataType, little) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FingerState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interfaces__msg__FingerState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FingerState = {
  "interfaces::msg",
  "FingerState",
  _FingerState__cdr_serialize,
  _FingerState__cdr_deserialize,
  _FingerState__get_serialized_size,
  _FingerState__max_serialized_size
};

static rosidl_message_type_support_t _FingerState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FingerState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, FingerState)() {
  return &_FingerState__type_support;
}

#if defined(__cplusplus)
}
#endif
