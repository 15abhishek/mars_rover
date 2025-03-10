// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rc_msgs:msg/RcMsg.idl
// generated code does not contain a copyright notice
#include "rc_msgs/msg/detail/rc_msg__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rc_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rc_msgs/msg/detail/rc_msg__struct.h"
#include "rc_msgs/msg/detail/rc_msg__functions.h"

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

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


typedef rc_msgs__msg__RcMsg _RcMsg__ros_msg_type;

static bool _RcMsg__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _RcMsg__ros_msg_type * ros_message = (_RcMsg__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: arm
  rv = ucdr_serialize_bool(cdr, (ros_message->arm) ? 0x01 : 0x00);
  // Member: reverse
  rv = ucdr_serialize_bool(cdr, (ros_message->reverse) ? 0x01 : 0x00);
  // Member: throttle
  rv = ucdr_serialize_int16_t(cdr, ros_message->throttle);
  // Member: steer
  rv = ucdr_serialize_int16_t(cdr, ros_message->steer);
  // Member: op_mode
  rv = ucdr_serialize_int16_t(cdr, ros_message->op_mode);

  return rv;
}

static bool _RcMsg__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _RcMsg__ros_msg_type * ros_message = (_RcMsg__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: arm
  rv = ucdr_deserialize_bool(cdr, &ros_message->arm);
  // Field name: reverse
  rv = ucdr_deserialize_bool(cdr, &ros_message->reverse);
  // Field name: throttle
  rv = ucdr_deserialize_int16_t(cdr, &ros_message->throttle);
  // Field name: steer
  rv = ucdr_deserialize_int16_t(cdr, &ros_message->steer);
  // Field name: op_mode
  rv = ucdr_deserialize_int16_t(cdr, &ros_message->op_mode);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rc_msgs
size_t get_serialized_size_rc_msgs__msg__RcMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _RcMsg__ros_msg_type * ros_message = (const _RcMsg__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: arm
  {
    const size_t item_size = sizeof(ros_message->arm);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: reverse
  {
    const size_t item_size = sizeof(ros_message->reverse);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: throttle
  {
    const size_t item_size = sizeof(ros_message->throttle);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: steer
  {
    const size_t item_size = sizeof(ros_message->steer);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: op_mode
  {
    const size_t item_size = sizeof(ros_message->op_mode);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RcMsg__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rc_msgs__msg__RcMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rc_msgs
size_t max_serialized_size_rc_msgs__msg__RcMsg(
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

static size_t _RcMsg__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rc_msgs__msg__RcMsg(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_RcMsg = {
  "rc_msgs::msg",
  "RcMsg",
  _RcMsg__cdr_serialize,
  _RcMsg__cdr_deserialize,
  _RcMsg__get_serialized_size,
  get_serialized_size_rc_msgs__msg__RcMsg,
  _RcMsg__max_serialized_size
};

static rosidl_message_type_support_t _RcMsg__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_RcMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rc_msgs, msg, RcMsg)() {
  return &_RcMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
