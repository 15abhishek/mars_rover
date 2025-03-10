// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rc_msgs:msg/RcMsg.idl
// generated code does not contain a copyright notice

#ifndef RC_MSGS__MSG__DETAIL__RC_MSG__FUNCTIONS_H_
#define RC_MSGS__MSG__DETAIL__RC_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rc_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rc_msgs/msg/detail/rc_msg__struct.h"

/// Initialize msg/RcMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rc_msgs__msg__RcMsg
 * )) before or use
 * rc_msgs__msg__RcMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rc_msgs
bool
rc_msgs__msg__RcMsg__init(rc_msgs__msg__RcMsg * msg);

/// Finalize msg/RcMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rc_msgs
void
rc_msgs__msg__RcMsg__fini(rc_msgs__msg__RcMsg * msg);

/// Create msg/RcMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rc_msgs__msg__RcMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rc_msgs
rc_msgs__msg__RcMsg *
rc_msgs__msg__RcMsg__create();

/// Destroy msg/RcMsg message.
/**
 * It calls
 * rc_msgs__msg__RcMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rc_msgs
void
rc_msgs__msg__RcMsg__destroy(rc_msgs__msg__RcMsg * msg);

/// Check for msg/RcMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rc_msgs
bool
rc_msgs__msg__RcMsg__are_equal(const rc_msgs__msg__RcMsg * lhs, const rc_msgs__msg__RcMsg * rhs);

/// Copy a msg/RcMsg message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rc_msgs
bool
rc_msgs__msg__RcMsg__copy(
  const rc_msgs__msg__RcMsg * input,
  rc_msgs__msg__RcMsg * output);

/// Initialize array of msg/RcMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * rc_msgs__msg__RcMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rc_msgs
bool
rc_msgs__msg__RcMsg__Sequence__init(rc_msgs__msg__RcMsg__Sequence * array, size_t size);

/// Finalize array of msg/RcMsg messages.
/**
 * It calls
 * rc_msgs__msg__RcMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rc_msgs
void
rc_msgs__msg__RcMsg__Sequence__fini(rc_msgs__msg__RcMsg__Sequence * array);

/// Create array of msg/RcMsg messages.
/**
 * It allocates the memory for the array and calls
 * rc_msgs__msg__RcMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rc_msgs
rc_msgs__msg__RcMsg__Sequence *
rc_msgs__msg__RcMsg__Sequence__create(size_t size);

/// Destroy array of msg/RcMsg messages.
/**
 * It calls
 * rc_msgs__msg__RcMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rc_msgs
void
rc_msgs__msg__RcMsg__Sequence__destroy(rc_msgs__msg__RcMsg__Sequence * array);

/// Check for msg/RcMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rc_msgs
bool
rc_msgs__msg__RcMsg__Sequence__are_equal(const rc_msgs__msg__RcMsg__Sequence * lhs, const rc_msgs__msg__RcMsg__Sequence * rhs);

/// Copy an array of msg/RcMsg messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rc_msgs
bool
rc_msgs__msg__RcMsg__Sequence__copy(
  const rc_msgs__msg__RcMsg__Sequence * input,
  rc_msgs__msg__RcMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RC_MSGS__MSG__DETAIL__RC_MSG__FUNCTIONS_H_
