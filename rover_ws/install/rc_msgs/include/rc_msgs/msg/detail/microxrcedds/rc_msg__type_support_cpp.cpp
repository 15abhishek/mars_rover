// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rc_msgs:msg/RcMsg.idl
// generated code does not contain a copyright notice
#include "rc_msgs/msg/detail/rc_msg__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rc_msgs/msg/detail/rc_msg__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions

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
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: arm
  rv = ucdr_serialize_bool(cdr, ros_message.arm);
  // Member: reverse
  rv = ucdr_serialize_bool(cdr, ros_message.reverse);
  // Member: throttle
  rv = ucdr_serialize_int16_t(cdr, ros_message.throttle);
  // Member: steer
  rv = ucdr_serialize_int16_t(cdr, ros_message.steer);
  // Member: op_mode
  rv = ucdr_serialize_int16_t(cdr, ros_message.op_mode);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rc_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  rc_msgs::msg::RcMsg & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: arm
  rv = ucdr_deserialize_bool(cdr, &ros_message.arm);
  // Member: reverse
  rv = ucdr_deserialize_bool(cdr, &ros_message.reverse);
  // Member: throttle
  rv = ucdr_deserialize_int16_t(cdr, &ros_message.throttle);
  // Member: steer
  rv = ucdr_deserialize_int16_t(cdr, &ros_message.steer);
  // Member: op_mode
  rv = ucdr_deserialize_int16_t(cdr, &ros_message.op_mode);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rc_msgs
get_serialized_size(
  const rc_msgs::msg::RcMsg & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: arm
  {
    const size_t item_size = sizeof(ros_message.arm);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: reverse
  {
    const size_t item_size = sizeof(ros_message.reverse);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: throttle
  {
    const size_t item_size = sizeof(ros_message.throttle);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: steer
  {
    const size_t item_size = sizeof(ros_message.steer);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: op_mode
  {
    const size_t item_size = sizeof(ros_message.op_mode);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rc_msgs
max_serialized_size_RcMsg(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: arm
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: reverse
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: throttle
  current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + sizeof(int16_t);
  // Member: steer
  current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + sizeof(int16_t);
  // Member: op_mode
  current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + sizeof(int16_t);

  return current_alignment - initial_alignment;
}

static bool _RcMsg__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rc_msgs::msg::RcMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RcMsg__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rc_msgs::msg::RcMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RcMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rc_msgs::msg::RcMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RcMsg__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rc_msgs::msg::RcMsg *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _RcMsg__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_RcMsg(&full_bounded, 0);
}

static message_type_support_callbacks_t _RcMsg__callbacks = {
  "rc_msgs::msg",
  "RcMsg",
  _RcMsg__cdr_serialize,
  _RcMsg__cdr_deserialize,
  _RcMsg__get_serialized_size,
  _RcMsg__get_serialized_size_with_initial_alignment,
  _RcMsg__max_serialized_size
};

static rosidl_message_type_support_t _RcMsg__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_RcMsg__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace rc_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_rc_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rc_msgs::msg::RcMsg>()
{
  return &rc_msgs::msg::typesupport_microxrcedds_cpp::_RcMsg__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rc_msgs, msg, RcMsg)() {
  return &rc_msgs::msg::typesupport_microxrcedds_cpp::_RcMsg__handle;
}

#ifdef __cplusplus
}
#endif
