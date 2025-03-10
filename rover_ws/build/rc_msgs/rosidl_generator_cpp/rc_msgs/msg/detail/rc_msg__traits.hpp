// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rc_msgs:msg/RcMsg.idl
// generated code does not contain a copyright notice

#ifndef RC_MSGS__MSG__DETAIL__RC_MSG__TRAITS_HPP_
#define RC_MSGS__MSG__DETAIL__RC_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rc_msgs/msg/detail/rc_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rc_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RcMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: arm
  {
    out << "arm: ";
    rosidl_generator_traits::value_to_yaml(msg.arm, out);
    out << ", ";
  }

  // member: reverse
  {
    out << "reverse: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse, out);
    out << ", ";
  }

  // member: throttle
  {
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << ", ";
  }

  // member: steer
  {
    out << "steer: ";
    rosidl_generator_traits::value_to_yaml(msg.steer, out);
    out << ", ";
  }

  // member: op_mode
  {
    out << "op_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.op_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RcMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm: ";
    rosidl_generator_traits::value_to_yaml(msg.arm, out);
    out << "\n";
  }

  // member: reverse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reverse: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse, out);
    out << "\n";
  }

  // member: throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << "\n";
  }

  // member: steer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer: ";
    rosidl_generator_traits::value_to_yaml(msg.steer, out);
    out << "\n";
  }

  // member: op_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "op_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.op_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RcMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rc_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rc_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rc_msgs::msg::RcMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  rc_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rc_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rc_msgs::msg::RcMsg & msg)
{
  return rc_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rc_msgs::msg::RcMsg>()
{
  return "rc_msgs::msg::RcMsg";
}

template<>
inline const char * name<rc_msgs::msg::RcMsg>()
{
  return "rc_msgs/msg/RcMsg";
}

template<>
struct has_fixed_size<rc_msgs::msg::RcMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rc_msgs::msg::RcMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rc_msgs::msg::RcMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RC_MSGS__MSG__DETAIL__RC_MSG__TRAITS_HPP_
