// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/FingerState.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FINGER_STATE__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__FINGER_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__FingerState __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__FingerState __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FingerState_
{
  using Type = FingerState_<ContainerAllocator>;

  explicit FingerState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->thumb = false;
      this->index = false;
      this->middle = false;
      this->ring = false;
      this->little = false;
    }
  }

  explicit FingerState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->thumb = false;
      this->index = false;
      this->middle = false;
      this->ring = false;
      this->little = false;
    }
  }

  // field types and members
  using _thumb_type =
    bool;
  _thumb_type thumb;
  using _index_type =
    bool;
  _index_type index;
  using _middle_type =
    bool;
  _middle_type middle;
  using _ring_type =
    bool;
  _ring_type ring;
  using _little_type =
    bool;
  _little_type little;

  // setters for named parameter idiom
  Type & set__thumb(
    const bool & _arg)
  {
    this->thumb = _arg;
    return *this;
  }
  Type & set__index(
    const bool & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__middle(
    const bool & _arg)
  {
    this->middle = _arg;
    return *this;
  }
  Type & set__ring(
    const bool & _arg)
  {
    this->ring = _arg;
    return *this;
  }
  Type & set__little(
    const bool & _arg)
  {
    this->little = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::FingerState_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::FingerState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::FingerState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::FingerState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::FingerState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::FingerState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::FingerState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::FingerState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::FingerState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::FingerState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__FingerState
    std::shared_ptr<interfaces::msg::FingerState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__FingerState
    std::shared_ptr<interfaces::msg::FingerState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FingerState_ & other) const
  {
    if (this->thumb != other.thumb) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    if (this->middle != other.middle) {
      return false;
    }
    if (this->ring != other.ring) {
      return false;
    }
    if (this->little != other.little) {
      return false;
    }
    return true;
  }
  bool operator!=(const FingerState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FingerState_

// alias to use template instance with default allocator
using FingerState =
  interfaces::msg::FingerState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__FINGER_STATE__STRUCT_HPP_
