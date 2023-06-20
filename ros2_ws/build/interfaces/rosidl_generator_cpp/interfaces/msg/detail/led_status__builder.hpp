// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/LedStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LED_STATUS__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__LED_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/led_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_LedStatus_battery_level
{
public:
  explicit Init_LedStatus_battery_level(::interfaces::msg::LedStatus & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::LedStatus battery_level(::interfaces::msg::LedStatus::_battery_level_type arg)
  {
    msg_.battery_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::LedStatus msg_;
};

class Init_LedStatus_led_status
{
public:
  Init_LedStatus_led_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedStatus_battery_level led_status(::interfaces::msg::LedStatus::_led_status_type arg)
  {
    msg_.led_status = std::move(arg);
    return Init_LedStatus_battery_level(msg_);
  }

private:
  ::interfaces::msg::LedStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::LedStatus>()
{
  return interfaces::msg::builder::Init_LedStatus_led_status();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__LED_STATUS__BUILDER_HPP_
