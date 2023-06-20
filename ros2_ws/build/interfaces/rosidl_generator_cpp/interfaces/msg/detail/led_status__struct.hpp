// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/LedStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LED_STATUS__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__LED_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__LedStatus __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__LedStatus __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedStatus_
{
  using Type = LedStatus_<ContainerAllocator>;

  explicit LedStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_status = "";
      this->battery_level = 0.0;
    }
  }

  explicit LedStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : led_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_status = "";
      this->battery_level = 0.0;
    }
  }

  // field types and members
  using _led_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _led_status_type led_status;
  using _battery_level_type =
    double;
  _battery_level_type battery_level;

  // setters for named parameter idiom
  Type & set__led_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->led_status = _arg;
    return *this;
  }
  Type & set__battery_level(
    const double & _arg)
  {
    this->battery_level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::LedStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::LedStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::LedStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::LedStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::LedStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::LedStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::LedStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::LedStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::LedStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::LedStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__LedStatus
    std::shared_ptr<interfaces::msg::LedStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__LedStatus
    std::shared_ptr<interfaces::msg::LedStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedStatus_ & other) const
  {
    if (this->led_status != other.led_status) {
      return false;
    }
    if (this->battery_level != other.battery_level) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedStatus_

// alias to use template instance with default allocator
using LedStatus =
  interfaces::msg::LedStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__LED_STATUS__STRUCT_HPP_
