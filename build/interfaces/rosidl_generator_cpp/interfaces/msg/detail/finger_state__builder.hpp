// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/FingerState.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FINGER_STATE__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__FINGER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/finger_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_FingerState_little
{
public:
  explicit Init_FingerState_little(::interfaces::msg::FingerState & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::FingerState little(::interfaces::msg::FingerState::_little_type arg)
  {
    msg_.little = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::FingerState msg_;
};

class Init_FingerState_ring
{
public:
  explicit Init_FingerState_ring(::interfaces::msg::FingerState & msg)
  : msg_(msg)
  {}
  Init_FingerState_little ring(::interfaces::msg::FingerState::_ring_type arg)
  {
    msg_.ring = std::move(arg);
    return Init_FingerState_little(msg_);
  }

private:
  ::interfaces::msg::FingerState msg_;
};

class Init_FingerState_middle
{
public:
  explicit Init_FingerState_middle(::interfaces::msg::FingerState & msg)
  : msg_(msg)
  {}
  Init_FingerState_ring middle(::interfaces::msg::FingerState::_middle_type arg)
  {
    msg_.middle = std::move(arg);
    return Init_FingerState_ring(msg_);
  }

private:
  ::interfaces::msg::FingerState msg_;
};

class Init_FingerState_index
{
public:
  explicit Init_FingerState_index(::interfaces::msg::FingerState & msg)
  : msg_(msg)
  {}
  Init_FingerState_middle index(::interfaces::msg::FingerState::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_FingerState_middle(msg_);
  }

private:
  ::interfaces::msg::FingerState msg_;
};

class Init_FingerState_thumb
{
public:
  Init_FingerState_thumb()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FingerState_index thumb(::interfaces::msg::FingerState::_thumb_type arg)
  {
    msg_.thumb = std::move(arg);
    return Init_FingerState_index(msg_);
  }

private:
  ::interfaces::msg::FingerState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::FingerState>()
{
  return interfaces::msg::builder::Init_FingerState_thumb();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__FINGER_STATE__BUILDER_HPP_
