// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from global_messages:msg/SwerveModuleStates.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATES__STRUCT_HPP_
#define GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'modules'
#include "global_messages/msg/detail/swerve_module_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__global_messages__msg__SwerveModuleStates __attribute__((deprecated))
#else
# define DEPRECATED__global_messages__msg__SwerveModuleStates __declspec(deprecated)
#endif

namespace global_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SwerveModuleStates_
{
  using Type = SwerveModuleStates_<ContainerAllocator>;

  explicit SwerveModuleStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->modules.fill(global_messages::msg::SwerveModuleState_<ContainerAllocator>{_init});
    }
  }

  explicit SwerveModuleStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : modules(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->modules.fill(global_messages::msg::SwerveModuleState_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _modules_type =
    std::array<global_messages::msg::SwerveModuleState_<ContainerAllocator>, 4>;
  _modules_type modules;

  // setters for named parameter idiom
  Type & set__modules(
    const std::array<global_messages::msg::SwerveModuleState_<ContainerAllocator>, 4> & _arg)
  {
    this->modules = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    global_messages::msg::SwerveModuleStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const global_messages::msg::SwerveModuleStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<global_messages::msg::SwerveModuleStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<global_messages::msg::SwerveModuleStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      global_messages::msg::SwerveModuleStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<global_messages::msg::SwerveModuleStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      global_messages::msg::SwerveModuleStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<global_messages::msg::SwerveModuleStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<global_messages::msg::SwerveModuleStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<global_messages::msg::SwerveModuleStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__global_messages__msg__SwerveModuleStates
    std::shared_ptr<global_messages::msg::SwerveModuleStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__global_messages__msg__SwerveModuleStates
    std::shared_ptr<global_messages::msg::SwerveModuleStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SwerveModuleStates_ & other) const
  {
    if (this->modules != other.modules) {
      return false;
    }
    return true;
  }
  bool operator!=(const SwerveModuleStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SwerveModuleStates_

// alias to use template instance with default allocator
using SwerveModuleStates =
  global_messages::msg::SwerveModuleStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace global_messages

#endif  // GLOBAL_MESSAGES__MSG__DETAIL__SWERVE_MODULE_STATES__STRUCT_HPP_
