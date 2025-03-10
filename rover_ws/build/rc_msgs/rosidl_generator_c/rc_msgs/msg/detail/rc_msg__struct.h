// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rc_msgs:msg/RcMsg.idl
// generated code does not contain a copyright notice

#ifndef RC_MSGS__MSG__DETAIL__RC_MSG__STRUCT_H_
#define RC_MSGS__MSG__DETAIL__RC_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RcMsg in the package rc_msgs.
typedef struct rc_msgs__msg__RcMsg
{
  bool arm;
  bool reverse;
  int16_t throttle;
  int16_t steer;
  int16_t op_mode;
} rc_msgs__msg__RcMsg;

// Struct for a sequence of rc_msgs__msg__RcMsg.
typedef struct rc_msgs__msg__RcMsg__Sequence
{
  rc_msgs__msg__RcMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rc_msgs__msg__RcMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RC_MSGS__MSG__DETAIL__RC_MSG__STRUCT_H_
