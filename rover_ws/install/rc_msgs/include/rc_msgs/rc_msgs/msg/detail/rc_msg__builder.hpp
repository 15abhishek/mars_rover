// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rc_msgs:msg/RcMsg.idl
// generated code does not contain a copyright notice

#ifndef RC_MSGS__MSG__DETAIL__RC_MSG__BUILDER_HPP_
#define RC_MSGS__MSG__DETAIL__RC_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rc_msgs/msg/detail/rc_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rc_msgs
{

namespace msg
{

namespace builder
{

class Init_RcMsg_op_mode
{
public:
  explicit Init_RcMsg_op_mode(::rc_msgs::msg::RcMsg & msg)
  : msg_(msg)
  {}
  ::rc_msgs::msg::RcMsg op_mode(::rc_msgs::msg::RcMsg::_op_mode_type arg)
  {
    msg_.op_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rc_msgs::msg::RcMsg msg_;
};

class Init_RcMsg_steer
{
public:
  explicit Init_RcMsg_steer(::rc_msgs::msg::RcMsg & msg)
  : msg_(msg)
  {}
  Init_RcMsg_op_mode steer(::rc_msgs::msg::RcMsg::_steer_type arg)
  {
    msg_.steer = std::move(arg);
    return Init_RcMsg_op_mode(msg_);
  }

private:
  ::rc_msgs::msg::RcMsg msg_;
};

class Init_RcMsg_throttle
{
public:
  explicit Init_RcMsg_throttle(::rc_msgs::msg::RcMsg & msg)
  : msg_(msg)
  {}
  Init_RcMsg_steer throttle(::rc_msgs::msg::RcMsg::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_RcMsg_steer(msg_);
  }

private:
  ::rc_msgs::msg::RcMsg msg_;
};

class Init_RcMsg_reverse
{
public:
  explicit Init_RcMsg_reverse(::rc_msgs::msg::RcMsg & msg)
  : msg_(msg)
  {}
  Init_RcMsg_throttle reverse(::rc_msgs::msg::RcMsg::_reverse_type arg)
  {
    msg_.reverse = std::move(arg);
    return Init_RcMsg_throttle(msg_);
  }

private:
  ::rc_msgs::msg::RcMsg msg_;
};

class Init_RcMsg_arm
{
public:
  Init_RcMsg_arm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RcMsg_reverse arm(::rc_msgs::msg::RcMsg::_arm_type arg)
  {
    msg_.arm = std::move(arg);
    return Init_RcMsg_reverse(msg_);
  }

private:
  ::rc_msgs::msg::RcMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rc_msgs::msg::RcMsg>()
{
  return rc_msgs::msg::builder::Init_RcMsg_arm();
}

}  // namespace rc_msgs

#endif  // RC_MSGS__MSG__DETAIL__RC_MSG__BUILDER_HPP_
