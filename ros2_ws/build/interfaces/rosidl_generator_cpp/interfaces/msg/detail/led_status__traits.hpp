// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/LedStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LED_STATUS__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__LED_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/led_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: led_status
  {
    out << "led_status: ";
    rosidl_generator_traits::value_to_yaml(msg.led_status, out);
    out << ", ";
  }

  // member: battery_level
  {
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_status: ";
    rosidl_generator_traits::value_to_yaml(msg.led_status, out);
    out << "\n";
  }

  // member: battery_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedStatus & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::msg::LedStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::LedStatus & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::LedStatus>()
{
  return "interfaces::msg::LedStatus";
}

template<>
inline const char * name<interfaces::msg::LedStatus>()
{
  return "interfaces/msg/LedStatus";
}

template<>
struct has_fixed_size<interfaces::msg::LedStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::LedStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::LedStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__LED_STATUS__TRAITS_HPP_
