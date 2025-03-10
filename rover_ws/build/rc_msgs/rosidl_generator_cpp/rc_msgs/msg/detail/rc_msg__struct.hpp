// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rc_msgs:msg/RcMsg.idl
// generated code does not contain a copyright notice

#ifndef RC_MSGS__MSG__DETAIL__RC_MSG__STRUCT_HPP_
#define RC_MSGS__MSG__DETAIL__RC_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rc_msgs__msg__RcMsg __attribute__((deprecated))
#else
# define DEPRECATED__rc_msgs__msg__RcMsg __declspec(deprecated)
#endif

namespace rc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RcMsg_
{
  using Type = RcMsg_<ContainerAllocator>;

  explicit RcMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm = false;
      this->reverse = false;
      this->throttle = 0;
      this->steer = 0;
      this->op_mode = 0;
    }
  }

  explicit RcMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm = false;
      this->reverse = false;
      this->throttle = 0;
      this->steer = 0;
      this->op_mode = 0;
    }
  }

  // field types and members
  using _arm_type =
    bool;
  _arm_type arm;
  using _reverse_type =
    bool;
  _reverse_type reverse;
  using _throttle_type =
    int16_t;
  _throttle_type throttle;
  using _steer_type =
    int16_t;
  _steer_type steer;
  using _op_mode_type =
    int16_t;
  _op_mode_type op_mode;

  // setters for named parameter idiom
  Type & set__arm(
    const bool & _arg)
  {
    this->arm = _arg;
    return *this;
  }
  Type & set__reverse(
    const bool & _arg)
  {
    this->reverse = _arg;
    return *this;
  }
  Type & set__throttle(
    const int16_t & _arg)
  {
    this->throttle = _arg;
    return *this;
  }
  Type & set__steer(
    const int16_t & _arg)
  {
    this->steer = _arg;
    return *this;
  }
  Type & set__op_mode(
    const int16_t & _arg)
  {
    this->op_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rc_msgs::msg::RcMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const rc_msgs::msg::RcMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rc_msgs::msg::RcMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rc_msgs::msg::RcMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rc_msgs::msg::RcMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rc_msgs::msg::RcMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rc_msgs::msg::RcMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rc_msgs::msg::RcMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rc_msgs::msg::RcMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rc_msgs::msg::RcMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rc_msgs__msg__RcMsg
    std::shared_ptr<rc_msgs::msg::RcMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rc_msgs__msg__RcMsg
    std::shared_ptr<rc_msgs::msg::RcMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RcMsg_ & other) const
  {
    if (this->arm != other.arm) {
      return false;
    }
    if (this->reverse != other.reverse) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    if (this->steer != other.steer) {
      return false;
    }
    if (this->op_mode != other.op_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const RcMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RcMsg_

// alias to use template instance with default allocator
using RcMsg =
  rc_msgs::msg::RcMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rc_msgs

#endif  // RC_MSGS__MSG__DETAIL__RC_MSG__STRUCT_HPP_
