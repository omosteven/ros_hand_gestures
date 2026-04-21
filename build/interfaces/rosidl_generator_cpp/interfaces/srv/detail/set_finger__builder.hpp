// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/SetFinger.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SET_FINGER__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__SET_FINGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/set_finger__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_SetFinger_Request_state
{
public:
  explicit Init_SetFinger_Request_state(::interfaces::srv::SetFinger_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::SetFinger_Request state(::interfaces::srv::SetFinger_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::SetFinger_Request msg_;
};

class Init_SetFinger_Request_finger_name
{
public:
  Init_SetFinger_Request_finger_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFinger_Request_state finger_name(::interfaces::srv::SetFinger_Request::_finger_name_type arg)
  {
    msg_.finger_name = std::move(arg);
    return Init_SetFinger_Request_state(msg_);
  }

private:
  ::interfaces::srv::SetFinger_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SetFinger_Request>()
{
  return interfaces::srv::builder::Init_SetFinger_Request_finger_name();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_SetFinger_Response_success
{
public:
  Init_SetFinger_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::SetFinger_Response success(::interfaces::srv::SetFinger_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::SetFinger_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SetFinger_Response>()
{
  return interfaces::srv::builder::Init_SetFinger_Response_success();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__SET_FINGER__BUILDER_HPP_
