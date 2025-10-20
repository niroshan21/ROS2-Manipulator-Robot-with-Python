// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from manipulator_msgs:action/Fibonacci.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "manipulator_msgs/action/fibonacci.hpp"


#ifndef MANIPULATOR_MSGS__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_
#define MANIPULATOR_MSGS__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "manipulator_msgs/action/detail/fibonacci__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace manipulator_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Goal_order
{
public:
  Init_Fibonacci_Goal_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::manipulator_msgs::action::Fibonacci_Goal order(::manipulator_msgs::action::Fibonacci_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulator_msgs::action::Fibonacci_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulator_msgs::action::Fibonacci_Goal>()
{
  return manipulator_msgs::action::builder::Init_Fibonacci_Goal_order();
}

}  // namespace manipulator_msgs


namespace manipulator_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Result_sequence
{
public:
  Init_Fibonacci_Result_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::manipulator_msgs::action::Fibonacci_Result sequence(::manipulator_msgs::action::Fibonacci_Result::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulator_msgs::action::Fibonacci_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulator_msgs::action::Fibonacci_Result>()
{
  return manipulator_msgs::action::builder::Init_Fibonacci_Result_sequence();
}

}  // namespace manipulator_msgs


namespace manipulator_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Feedback_partial_sequence
{
public:
  Init_Fibonacci_Feedback_partial_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::manipulator_msgs::action::Fibonacci_Feedback partial_sequence(::manipulator_msgs::action::Fibonacci_Feedback::_partial_sequence_type arg)
  {
    msg_.partial_sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulator_msgs::action::Fibonacci_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulator_msgs::action::Fibonacci_Feedback>()
{
  return manipulator_msgs::action::builder::Init_Fibonacci_Feedback_partial_sequence();
}

}  // namespace manipulator_msgs


namespace manipulator_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_SendGoal_Request_goal
{
public:
  explicit Init_Fibonacci_SendGoal_Request_goal(::manipulator_msgs::action::Fibonacci_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::manipulator_msgs::action::Fibonacci_SendGoal_Request goal(::manipulator_msgs::action::Fibonacci_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulator_msgs::action::Fibonacci_SendGoal_Request msg_;
};

class Init_Fibonacci_SendGoal_Request_goal_id
{
public:
  Init_Fibonacci_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_SendGoal_Request_goal goal_id(::manipulator_msgs::action::Fibonacci_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Fibonacci_SendGoal_Request_goal(msg_);
  }

private:
  ::manipulator_msgs::action::Fibonacci_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulator_msgs::action::Fibonacci_SendGoal_Request>()
{
  return manipulator_msgs::action::builder::Init_Fibonacci_SendGoal_Request_goal_id();
}

}  // namespace manipulator_msgs


namespace manipulator_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_SendGoal_Response_stamp
{
public:
  explicit Init_Fibonacci_SendGoal_Response_stamp(::manipulator_msgs::action::Fibonacci_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::manipulator_msgs::action::Fibonacci_SendGoal_Response stamp(::manipulator_msgs::action::Fibonacci_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulator_msgs::action::Fibonacci_SendGoal_Response msg_;
};

class Init_Fibonacci_SendGoal_Response_accepted
{
public:
  Init_Fibonacci_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_SendGoal_Response_stamp accepted(::manipulator_msgs::action::Fibonacci_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Fibonacci_SendGoal_Response_stamp(msg_);
  }

private:
  ::manipulator_msgs::action::Fibonacci_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulator_msgs::action::Fibonacci_SendGoal_Response>()
{
  return manipulator_msgs::action::builder::Init_Fibonacci_SendGoal_Response_accepted();
}

}  // namespace manipulator_msgs


namespace manipulator_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_SendGoal_Event_response
{
public:
  explicit Init_Fibonacci_SendGoal_Event_response(::manipulator_msgs::action::Fibonacci_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::manipulator_msgs::action::Fibonacci_SendGoal_Event response(::manipulator_msgs::action::Fibonacci_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulator_msgs::action::Fibonacci_SendGoal_Event msg_;
};

class Init_Fibonacci_SendGoal_Event_request
{
public:
  explicit Init_Fibonacci_SendGoal_Event_request(::manipulator_msgs::action::Fibonacci_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Fibonacci_SendGoal_Event_response request(::manipulator_msgs::action::Fibonacci_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Fibonacci_SendGoal_Event_response(msg_);
  }

private:
  ::manipulator_msgs::action::Fibonacci_SendGoal_Event msg_;
};

class Init_Fibonacci_SendGoal_Event_info
{
public:
  Init_Fibonacci_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_SendGoal_Event_request info(::manipulator_msgs::action::Fibonacci_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Fibonacci_SendGoal_Event_request(msg_);
  }

private:
  ::manipulator_msgs::action::Fibonacci_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulator_msgs::action::Fibonacci_SendGoal_Event>()
{
  return manipulator_msgs::action::builder::Init_Fibonacci_SendGoal_Event_info();
}

}  // namespace manipulator_msgs


namespace manipulator_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_GetResult_Request_goal_id
{
public:
  Init_Fibonacci_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::manipulator_msgs::action::Fibonacci_GetResult_Request goal_id(::manipulator_msgs::action::Fibonacci_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulator_msgs::action::Fibonacci_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulator_msgs::action::Fibonacci_GetResult_Request>()
{
  return manipulator_msgs::action::builder::Init_Fibonacci_GetResult_Request_goal_id();
}

}  // namespace manipulator_msgs


namespace manipulator_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_GetResult_Response_result
{
public:
  explicit Init_Fibonacci_GetResult_Response_result(::manipulator_msgs::action::Fibonacci_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::manipulator_msgs::action::Fibonacci_GetResult_Response result(::manipulator_msgs::action::Fibonacci_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulator_msgs::action::Fibonacci_GetResult_Response msg_;
};

class Init_Fibonacci_GetResult_Response_status
{
public:
  Init_Fibonacci_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_GetResult_Response_result status(::manipulator_msgs::action::Fibonacci_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Fibonacci_GetResult_Response_result(msg_);
  }

private:
  ::manipulator_msgs::action::Fibonacci_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulator_msgs::action::Fibonacci_GetResult_Response>()
{
  return manipulator_msgs::action::builder::Init_Fibonacci_GetResult_Response_status();
}

}  // namespace manipulator_msgs


namespace manipulator_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_GetResult_Event_response
{
public:
  explicit Init_Fibonacci_GetResult_Event_response(::manipulator_msgs::action::Fibonacci_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::manipulator_msgs::action::Fibonacci_GetResult_Event response(::manipulator_msgs::action::Fibonacci_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulator_msgs::action::Fibonacci_GetResult_Event msg_;
};

class Init_Fibonacci_GetResult_Event_request
{
public:
  explicit Init_Fibonacci_GetResult_Event_request(::manipulator_msgs::action::Fibonacci_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Fibonacci_GetResult_Event_response request(::manipulator_msgs::action::Fibonacci_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Fibonacci_GetResult_Event_response(msg_);
  }

private:
  ::manipulator_msgs::action::Fibonacci_GetResult_Event msg_;
};

class Init_Fibonacci_GetResult_Event_info
{
public:
  Init_Fibonacci_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_GetResult_Event_request info(::manipulator_msgs::action::Fibonacci_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Fibonacci_GetResult_Event_request(msg_);
  }

private:
  ::manipulator_msgs::action::Fibonacci_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulator_msgs::action::Fibonacci_GetResult_Event>()
{
  return manipulator_msgs::action::builder::Init_Fibonacci_GetResult_Event_info();
}

}  // namespace manipulator_msgs


namespace manipulator_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_FeedbackMessage_feedback
{
public:
  explicit Init_Fibonacci_FeedbackMessage_feedback(::manipulator_msgs::action::Fibonacci_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::manipulator_msgs::action::Fibonacci_FeedbackMessage feedback(::manipulator_msgs::action::Fibonacci_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulator_msgs::action::Fibonacci_FeedbackMessage msg_;
};

class Init_Fibonacci_FeedbackMessage_goal_id
{
public:
  Init_Fibonacci_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_FeedbackMessage_feedback goal_id(::manipulator_msgs::action::Fibonacci_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Fibonacci_FeedbackMessage_feedback(msg_);
  }

private:
  ::manipulator_msgs::action::Fibonacci_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulator_msgs::action::Fibonacci_FeedbackMessage>()
{
  return manipulator_msgs::action::builder::Init_Fibonacci_FeedbackMessage_goal_id();
}

}  // namespace manipulator_msgs

#endif  // MANIPULATOR_MSGS__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_
