// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vive_interfaces:msg\Hmd.idl
// generated code does not contain a copyright notice

#ifndef VIVE_INTERFACES__MSG__DETAIL__HMD__STRUCT_HPP_
#define VIVE_INTERFACES__MSG__DETAIL__HMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__vive_interfaces__msg__Hmd __attribute__((deprecated))
#else
# define DEPRECATED__vive_interfaces__msg__Hmd __declspec(deprecated)
#endif

namespace vive_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Hmd_
{
  using Type = Hmd_<ContainerAllocator>;

  explicit Hmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
    }
  }

  explicit Hmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _roll_type =
    float;
  _roll_type roll;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vive_interfaces::msg::Hmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const vive_interfaces::msg::Hmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vive_interfaces::msg::Hmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vive_interfaces::msg::Hmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vive_interfaces::msg::Hmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vive_interfaces::msg::Hmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vive_interfaces::msg::Hmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vive_interfaces::msg::Hmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vive_interfaces::msg::Hmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vive_interfaces::msg::Hmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vive_interfaces__msg__Hmd
    std::shared_ptr<vive_interfaces::msg::Hmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vive_interfaces__msg__Hmd
    std::shared_ptr<vive_interfaces::msg::Hmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Hmd_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    return true;
  }
  bool operator!=(const Hmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Hmd_

// alias to use template instance with default allocator
using Hmd =
  vive_interfaces::msg::Hmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vive_interfaces

#endif  // VIVE_INTERFACES__MSG__DETAIL__HMD__STRUCT_HPP_
