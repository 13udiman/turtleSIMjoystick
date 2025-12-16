// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from global_messages:msg/SwerveModuleState.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATE__STRUCT_HPP_
#define GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__global_messages__msg__SwerveModuleState __attribute__((deprecated))
#else
# define DEPRECATED__global_messages__msg__SwerveModuleState __declspec(deprecated)
#endif

namespace global_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SwerveModuleState_
{
  using Type = SwerveModuleState_<ContainerAllocator>;

  explicit SwerveModuleState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->angle = 0.0f;
    }
  }

  explicit SwerveModuleState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->angle = 0.0f;
    }
  }

  // field types and members
  using _speed_type =
    float;
  _speed_type speed;
  using _angle_type =
    float;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    global_messages::msg::SwerveModuleState_<ContainerAllocator> *;
  using ConstRawPtr =
    const global_messages::msg::SwerveModuleState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<global_messages::msg::SwerveModuleState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<global_messages::msg::SwerveModuleState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      global_messages::msg::SwerveModuleState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<global_messages::msg::SwerveModuleState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      global_messages::msg::SwerveModuleState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<global_messages::msg::SwerveModuleState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<global_messages::msg::SwerveModuleState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<global_messages::msg::SwerveModuleState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__global_messages__msg__SwerveModuleState
    std::shared_ptr<global_messages::msg::SwerveModuleState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__global_messages__msg__SwerveModuleState
    std::shared_ptr<global_messages::msg::SwerveModuleState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SwerveModuleState_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const SwerveModuleState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SwerveModuleState_

// alias to use template instance with default allocator
using SwerveModuleState =
  global_messages::msg::SwerveModuleState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace global_messages

#endif  // GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATE__STRUCT_HPP_
