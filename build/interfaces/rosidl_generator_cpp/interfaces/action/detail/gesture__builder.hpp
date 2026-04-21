// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:action/Gesture.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__ACTION__DETAIL__GESTURE__BUILDER_HPP_
#define INTERFACES__ACTION__DETAIL__GESTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/action/detail/gesture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Gesture_Goal_gesture_name
{
public:
  Init_Gesture_Goal_gesture_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Gesture_Goal gesture_name(::interfaces::action::Gesture_Goal::_gesture_name_type arg)
  {
    msg_.gesture_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Gesture_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Gesture_Goal>()
{
  return interfaces::action::builder::Init_Gesture_Goal_gesture_name();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Gesture_Result_success
{
public:
  Init_Gesture_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Gesture_Result success(::interfaces::action::Gesture_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Gesture_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Gesture_Result>()
{
  return interfaces::action::builder::Init_Gesture_Result_success();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Gesture_Feedback_current_state
{
public:
  Init_Gesture_Feedback_current_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Gesture_Feedback current_state(::interfaces::action::Gesture_Feedback::_current_state_type arg)
  {
    msg_.current_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Gesture_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Gesture_Feedback>()
{
  return interfaces::action::builder::Init_Gesture_Feedback_current_state();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Gesture_SendGoal_Request_goal
{
public:
  explicit Init_Gesture_SendGoal_Request_goal(::interfaces::action::Gesture_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Gesture_SendGoal_Request goal(::interfaces::action::Gesture_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Gesture_SendGoal_Request msg_;
};

class Init_Gesture_SendGoal_Request_goal_id
{
public:
  Init_Gesture_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gesture_SendGoal_Request_goal goal_id(::interfaces::action::Gesture_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Gesture_SendGoal_Request_goal(msg_);
  }

private:
  ::interfaces::action::Gesture_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Gesture_SendGoal_Request>()
{
  return interfaces::action::builder::Init_Gesture_SendGoal_Request_goal_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Gesture_SendGoal_Response_stamp
{
public:
  explicit Init_Gesture_SendGoal_Response_stamp(::interfaces::action::Gesture_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Gesture_SendGoal_Response stamp(::interfaces::action::Gesture_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Gesture_SendGoal_Response msg_;
};

class Init_Gesture_SendGoal_Response_accepted
{
public:
  Init_Gesture_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gesture_SendGoal_Response_stamp accepted(::interfaces::action::Gesture_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Gesture_SendGoal_Response_stamp(msg_);
  }

private:
  ::interfaces::action::Gesture_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Gesture_SendGoal_Response>()
{
  return interfaces::action::builder::Init_Gesture_SendGoal_Response_accepted();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Gesture_GetResult_Request_goal_id
{
public:
  Init_Gesture_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Gesture_GetResult_Request goal_id(::interfaces::action::Gesture_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Gesture_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Gesture_GetResult_Request>()
{
  return interfaces::action::builder::Init_Gesture_GetResult_Request_goal_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Gesture_GetResult_Response_result
{
public:
  explicit Init_Gesture_GetResult_Response_result(::interfaces::action::Gesture_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Gesture_GetResult_Response result(::interfaces::action::Gesture_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Gesture_GetResult_Response msg_;
};

class Init_Gesture_GetResult_Response_status
{
public:
  Init_Gesture_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gesture_GetResult_Response_result status(::interfaces::action::Gesture_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Gesture_GetResult_Response_result(msg_);
  }

private:
  ::interfaces::action::Gesture_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Gesture_GetResult_Response>()
{
  return interfaces::action::builder::Init_Gesture_GetResult_Response_status();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Gesture_FeedbackMessage_feedback
{
public:
  explicit Init_Gesture_FeedbackMessage_feedback(::interfaces::action::Gesture_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Gesture_FeedbackMessage feedback(::interfaces::action::Gesture_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Gesture_FeedbackMessage msg_;
};

class Init_Gesture_FeedbackMessage_goal_id
{
public:
  Init_Gesture_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gesture_FeedbackMessage_feedback goal_id(::interfaces::action::Gesture_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Gesture_FeedbackMessage_feedback(msg_);
  }

private:
  ::interfaces::action::Gesture_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Gesture_FeedbackMessage>()
{
  return interfaces::action::builder::Init_Gesture_FeedbackMessage_goal_id();
}

}  // namespace interfaces

#endif  // INTERFACES__ACTION__DETAIL__GESTURE__BUILDER_HPP_
