// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rc_msgs:msg/RcMsg.idl
// generated code does not contain a copyright notice
#include "rc_msgs/msg/detail/rc_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rc_msgs__msg__RcMsg__init(rc_msgs__msg__RcMsg * msg)
{
  if (!msg) {
    return false;
  }
  // arm
  // reverse
  // throttle
  // steer
  // op_mode
  return true;
}

void
rc_msgs__msg__RcMsg__fini(rc_msgs__msg__RcMsg * msg)
{
  if (!msg) {
    return;
  }
  // arm
  // reverse
  // throttle
  // steer
  // op_mode
}

bool
rc_msgs__msg__RcMsg__are_equal(const rc_msgs__msg__RcMsg * lhs, const rc_msgs__msg__RcMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // arm
  if (lhs->arm != rhs->arm) {
    return false;
  }
  // reverse
  if (lhs->reverse != rhs->reverse) {
    return false;
  }
  // throttle
  if (lhs->throttle != rhs->throttle) {
    return false;
  }
  // steer
  if (lhs->steer != rhs->steer) {
    return false;
  }
  // op_mode
  if (lhs->op_mode != rhs->op_mode) {
    return false;
  }
  return true;
}

bool
rc_msgs__msg__RcMsg__copy(
  const rc_msgs__msg__RcMsg * input,
  rc_msgs__msg__RcMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // arm
  output->arm = input->arm;
  // reverse
  output->reverse = input->reverse;
  // throttle
  output->throttle = input->throttle;
  // steer
  output->steer = input->steer;
  // op_mode
  output->op_mode = input->op_mode;
  return true;
}

rc_msgs__msg__RcMsg *
rc_msgs__msg__RcMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rc_msgs__msg__RcMsg * msg = (rc_msgs__msg__RcMsg *)allocator.allocate(sizeof(rc_msgs__msg__RcMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rc_msgs__msg__RcMsg));
  bool success = rc_msgs__msg__RcMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rc_msgs__msg__RcMsg__destroy(rc_msgs__msg__RcMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rc_msgs__msg__RcMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rc_msgs__msg__RcMsg__Sequence__init(rc_msgs__msg__RcMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rc_msgs__msg__RcMsg * data = NULL;

  if (size) {
    data = (rc_msgs__msg__RcMsg *)allocator.zero_allocate(size, sizeof(rc_msgs__msg__RcMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rc_msgs__msg__RcMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rc_msgs__msg__RcMsg__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rc_msgs__msg__RcMsg__Sequence__fini(rc_msgs__msg__RcMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rc_msgs__msg__RcMsg__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rc_msgs__msg__RcMsg__Sequence *
rc_msgs__msg__RcMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rc_msgs__msg__RcMsg__Sequence * array = (rc_msgs__msg__RcMsg__Sequence *)allocator.allocate(sizeof(rc_msgs__msg__RcMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rc_msgs__msg__RcMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rc_msgs__msg__RcMsg__Sequence__destroy(rc_msgs__msg__RcMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rc_msgs__msg__RcMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rc_msgs__msg__RcMsg__Sequence__are_equal(const rc_msgs__msg__RcMsg__Sequence * lhs, const rc_msgs__msg__RcMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rc_msgs__msg__RcMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rc_msgs__msg__RcMsg__Sequence__copy(
  const rc_msgs__msg__RcMsg__Sequence * input,
  rc_msgs__msg__RcMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rc_msgs__msg__RcMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rc_msgs__msg__RcMsg * data =
      (rc_msgs__msg__RcMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rc_msgs__msg__RcMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rc_msgs__msg__RcMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rc_msgs__msg__RcMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
