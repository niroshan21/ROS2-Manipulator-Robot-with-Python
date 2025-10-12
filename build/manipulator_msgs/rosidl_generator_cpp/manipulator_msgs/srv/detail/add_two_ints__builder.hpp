// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from manipulator_msgs:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "manipulator_msgs/srv/add_two_ints.hpp"


#ifndef MANIPULATOR_MSGS__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_
#define MANIPULATOR_MSGS__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "manipulator_msgs/srv/detail/add_two_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace manipulator_msgs
{

namespace srv
{

namespace builder
{

class Init_AddTwoInts_Request_b
{
public:
  explicit Init_AddTwoInts_Request_b(::manipulator_msgs::srv::AddTwoInts_Request & msg)
  : msg_(msg)
  {}
  ::manipulator_msgs::srv::AddTwoInts_Request b(::manipulator_msgs::srv::AddTwoInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulator_msgs::srv::AddTwoInts_Request msg_;
};

class Init_AddTwoInts_Request_a
{
public:
  Init_AddTwoInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwoInts_Request_b a(::manipulator_msgs::srv::AddTwoInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddTwoInts_Request_b(msg_);
  }

private:
  ::manipulator_msgs::srv::AddTwoInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulator_msgs::srv::AddTwoInts_Request>()
{
  return manipulator_msgs::srv::builder::Init_AddTwoInts_Request_a();
}

}  // namespace manipulator_msgs


namespace manipulator_msgs
{

namespace srv
{

namespace builder
{

class Init_AddTwoInts_Response_sum
{
public:
  Init_AddTwoInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::manipulator_msgs::srv::AddTwoInts_Response sum(::manipulator_msgs::srv::AddTwoInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulator_msgs::srv::AddTwoInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulator_msgs::srv::AddTwoInts_Response>()
{
  return manipulator_msgs::srv::builder::Init_AddTwoInts_Response_sum();
}

}  // namespace manipulator_msgs


namespace manipulator_msgs
{

namespace srv
{

namespace builder
{

class Init_AddTwoInts_Event_response
{
public:
  explicit Init_AddTwoInts_Event_response(::manipulator_msgs::srv::AddTwoInts_Event & msg)
  : msg_(msg)
  {}
  ::manipulator_msgs::srv::AddTwoInts_Event response(::manipulator_msgs::srv::AddTwoInts_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulator_msgs::srv::AddTwoInts_Event msg_;
};

class Init_AddTwoInts_Event_request
{
public:
  explicit Init_AddTwoInts_Event_request(::manipulator_msgs::srv::AddTwoInts_Event & msg)
  : msg_(msg)
  {}
  Init_AddTwoInts_Event_response request(::manipulator_msgs::srv::AddTwoInts_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AddTwoInts_Event_response(msg_);
  }

private:
  ::manipulator_msgs::srv::AddTwoInts_Event msg_;
};

class Init_AddTwoInts_Event_info
{
public:
  Init_AddTwoInts_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwoInts_Event_request info(::manipulator_msgs::srv::AddTwoInts_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AddTwoInts_Event_request(msg_);
  }

private:
  ::manipulator_msgs::srv::AddTwoInts_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulator_msgs::srv::AddTwoInts_Event>()
{
  return manipulator_msgs::srv::builder::Init_AddTwoInts_Event_info();
}

}  // namespace manipulator_msgs

#endif  // MANIPULATOR_MSGS__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_
