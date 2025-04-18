// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rc_msgs:msg/RcMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rc_msgs/msg/detail/rc_msg__rosidl_typesupport_introspection_c.h"
#include "rc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rc_msgs/msg/detail/rc_msg__functions.h"
#include "rc_msgs/msg/detail/rc_msg__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rc_msgs__msg__RcMsg__rosidl_typesupport_introspection_c__RcMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rc_msgs__msg__RcMsg__init(message_memory);
}

void rc_msgs__msg__RcMsg__rosidl_typesupport_introspection_c__RcMsg_fini_function(void * message_memory)
{
  rc_msgs__msg__RcMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rc_msgs__msg__RcMsg__rosidl_typesupport_introspection_c__RcMsg_message_member_array[5] = {
  {
    "arm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rc_msgs__msg__RcMsg, arm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reverse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rc_msgs__msg__RcMsg, reverse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "throttle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rc_msgs__msg__RcMsg, throttle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rc_msgs__msg__RcMsg, steer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "op_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rc_msgs__msg__RcMsg, op_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rc_msgs__msg__RcMsg__rosidl_typesupport_introspection_c__RcMsg_message_members = {
  "rc_msgs__msg",  // message namespace
  "RcMsg",  // message name
  5,  // number of fields
  sizeof(rc_msgs__msg__RcMsg),
  rc_msgs__msg__RcMsg__rosidl_typesupport_introspection_c__RcMsg_message_member_array,  // message members
  rc_msgs__msg__RcMsg__rosidl_typesupport_introspection_c__RcMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  rc_msgs__msg__RcMsg__rosidl_typesupport_introspection_c__RcMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rc_msgs__msg__RcMsg__rosidl_typesupport_introspection_c__RcMsg_message_type_support_handle = {
  0,
  &rc_msgs__msg__RcMsg__rosidl_typesupport_introspection_c__RcMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rc_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rc_msgs, msg, RcMsg)() {
  if (!rc_msgs__msg__RcMsg__rosidl_typesupport_introspection_c__RcMsg_message_type_support_handle.typesupport_identifier) {
    rc_msgs__msg__RcMsg__rosidl_typesupport_introspection_c__RcMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rc_msgs__msg__RcMsg__rosidl_typesupport_introspection_c__RcMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
