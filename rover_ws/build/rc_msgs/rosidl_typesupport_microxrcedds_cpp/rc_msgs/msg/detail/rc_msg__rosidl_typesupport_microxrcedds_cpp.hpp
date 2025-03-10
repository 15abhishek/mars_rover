// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from rc_msgs:msg/RcMsg.idl
// generated code does not contain a copyright notice

#ifndef RC_MSGS__MSG__RC_MSG__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define RC_MSGS__MSG__RC_MSG__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rc_msgs/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "rc_msgs/msg/detail/rc_msg__struct.hpp"

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

#include "ucdr/microcdr.h"

namespace rc_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rc_msgs
cdr_serialize(
  const rc_msgs::msg::RcMsg & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rc_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  rc_msgs::msg::RcMsg & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rc_msgs
get_serialized_size(
  const rc_msgs::msg::RcMsg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rc_msgs
max_serialized_size_RcMsg(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace rc_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rc_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rc_msgs, msg, RcMsg)();

#ifdef __cplusplus
}
#endif

#endif  // RC_MSGS__MSG__RC_MSG__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
