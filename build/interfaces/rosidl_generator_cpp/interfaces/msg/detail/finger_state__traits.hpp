// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/FingerState.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FINGER_STATE__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__FINGER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/finger_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const FingerState & msg,
  std::ostream & out)
{
  out << "{";
  // member: thumb
  {
    out << "thumb: ";
    rosidl_generator_traits::value_to_yaml(msg.thumb, out);
    out << ", ";
  }

  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << ", ";
  }

  // member: middle
  {
    out << "middle: ";
    rosidl_generator_traits::value_to_yaml(msg.middle, out);
    out << ", ";
  }

  // member: ring
  {
    out << "ring: ";
    rosidl_generator_traits::value_to_yaml(msg.ring, out);
    out << ", ";
  }

  // member: little
  {
    out << "little: ";
    rosidl_generator_traits::value_to_yaml(msg.little, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FingerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: thumb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thumb: ";
    rosidl_generator_traits::value_to_yaml(msg.thumb, out);
    out << "\n";
  }

  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }

  // member: middle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "middle: ";
    rosidl_generator_traits::value_to_yaml(msg.middle, out);
    out << "\n";
  }

  // member: ring
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ring: ";
    rosidl_generator_traits::value_to_yaml(msg.ring, out);
    out << "\n";
  }

  // member: little
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "little: ";
    rosidl_generator_traits::value_to_yaml(msg.little, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FingerState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::msg::FingerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::FingerState & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::FingerState>()
{
  return "interfaces::msg::FingerState";
}

template<>
inline const char * name<interfaces::msg::FingerState>()
{
  return "interfaces/msg/FingerState";
}

template<>
struct has_fixed_size<interfaces::msg::FingerState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::msg::FingerState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::msg::FingerState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__FINGER_STATE__TRAITS_HPP_
