// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vive_interfaces:msg\Controller.idl
// generated code does not contain a copyright notice

#ifndef VIVE_INTERFACES__MSG__DETAIL__CONTROLLER__STRUCT_HPP_
#define VIVE_INTERFACES__MSG__DETAIL__CONTROLLER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__vive_interfaces__msg__Controller __attribute__((deprecated))
#else
# define DEPRECATED__vive_interfaces__msg__Controller __declspec(deprecated)
#endif

namespace vive_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Controller_
{
  using Type = Controller_<ContainerAllocator>;

  explicit Controller_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
      this->grip = false;
      this->menu = false;
      this->trigger = false;
      this->trackpad_pressed = false;
      this->trackpad_touched = false;
      this->trackpad_x = 0.0f;
      this->trackpad_y = 0.0f;
    }
  }

  explicit Controller_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
      this->grip = false;
      this->menu = false;
      this->trigger = false;
      this->trackpad_pressed = false;
      this->trackpad_touched = false;
      this->trackpad_x = 0.0f;
      this->trackpad_y = 0.0f;
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
  using _grip_type =
    bool;
  _grip_type grip;
  using _menu_type =
    bool;
  _menu_type menu;
  using _trigger_type =
    bool;
  _trigger_type trigger;
  using _trackpad_pressed_type =
    bool;
  _trackpad_pressed_type trackpad_pressed;
  using _trackpad_touched_type =
    bool;
  _trackpad_touched_type trackpad_touched;
  using _trackpad_x_type =
    float;
  _trackpad_x_type trackpad_x;
  using _trackpad_y_type =
    float;
  _trackpad_y_type trackpad_y;

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
  Type & set__grip(
    const bool & _arg)
  {
    this->grip = _arg;
    return *this;
  }
  Type & set__menu(
    const bool & _arg)
  {
    this->menu = _arg;
    return *this;
  }
  Type & set__trigger(
    const bool & _arg)
  {
    this->trigger = _arg;
    return *this;
  }
  Type & set__trackpad_pressed(
    const bool & _arg)
  {
    this->trackpad_pressed = _arg;
    return *this;
  }
  Type & set__trackpad_touched(
    const bool & _arg)
  {
    this->trackpad_touched = _arg;
    return *this;
  }
  Type & set__trackpad_x(
    const float & _arg)
  {
    this->trackpad_x = _arg;
    return *this;
  }
  Type & set__trackpad_y(
    const float & _arg)
  {
    this->trackpad_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vive_interfaces::msg::Controller_<ContainerAllocator> *;
  using ConstRawPtr =
    const vive_interfaces::msg::Controller_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vive_interfaces::msg::Controller_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vive_interfaces::msg::Controller_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vive_interfaces::msg::Controller_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vive_interfaces::msg::Controller_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vive_interfaces::msg::Controller_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vive_interfaces::msg::Controller_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vive_interfaces::msg::Controller_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vive_interfaces::msg::Controller_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vive_interfaces__msg__Controller
    std::shared_ptr<vive_interfaces::msg::Controller_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vive_interfaces__msg__Controller
    std::shared_ptr<vive_interfaces::msg::Controller_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Controller_ & other) const
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
    if (this->grip != other.grip) {
      return false;
    }
    if (this->menu != other.menu) {
      return false;
    }
    if (this->trigger != other.trigger) {
      return false;
    }
    if (this->trackpad_pressed != other.trackpad_pressed) {
      return false;
    }
    if (this->trackpad_touched != other.trackpad_touched) {
      return false;
    }
    if (this->trackpad_x != other.trackpad_x) {
      return false;
    }
    if (this->trackpad_y != other.trackpad_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Controller_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Controller_

// alias to use template instance with default allocator
using Controller =
  vive_interfaces::msg::Controller_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vive_interfaces

#endif  // VIVE_INTERFACES__MSG__DETAIL__CONTROLLER__STRUCT_HPP_
