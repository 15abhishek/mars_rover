// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from rc_msgs:msg/RcMsg.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rc_msgs/msg/detail/rc_msg__struct.h"
#include "rc_msgs/msg/detail/rc_msg__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rc_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _RcMsg_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _RcMsg_type_support_ids_t;

static const _RcMsg_type_support_ids_t _RcMsg_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _RcMsg_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _RcMsg_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RcMsg_type_support_symbol_names_t _RcMsg_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rc_msgs, msg, RcMsg)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rc_msgs, msg, RcMsg)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rc_msgs, msg, RcMsg)),
  }
};

typedef struct _RcMsg_type_support_data_t
{
  void * data[3];
} _RcMsg_type_support_data_t;

static _RcMsg_type_support_data_t _RcMsg_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RcMsg_message_typesupport_map = {
  3,
  "rc_msgs",
  &_RcMsg_message_typesupport_ids.typesupport_identifier[0],
  &_RcMsg_message_typesupport_symbol_names.symbol_name[0],
  &_RcMsg_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RcMsg_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RcMsg_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace rc_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rc_msgs, msg, RcMsg)() {
  return &::rc_msgs::msg::rosidl_typesupport_c::RcMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
