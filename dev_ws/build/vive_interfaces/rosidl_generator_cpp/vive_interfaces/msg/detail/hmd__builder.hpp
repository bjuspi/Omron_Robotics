// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vive_interfaces:msg\Hmd.idl
// generated code does not contain a copyright notice

#ifndef VIVE_INTERFACES__MSG__DETAIL__HMD__BUILDER_HPP_
#define VIVE_INTERFACES__MSG__DETAIL__HMD__BUILDER_HPP_

#include "vive_interfaces/msg/detail/hmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vive_interfaces
{

namespace msg
{

namespace builder
{

class Init_Hmd_roll
{
public:
  explicit Init_Hmd_roll(::vive_interfaces::msg::Hmd & msg)
  : msg_(msg)
  {}
  ::vive_interfaces::msg::Hmd roll(::vive_interfaces::msg::Hmd::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vive_interfaces::msg::Hmd msg_;
};

class Init_Hmd_pitch
{
public:
  explicit Init_Hmd_pitch(::vive_interfaces::msg::Hmd & msg)
  : msg_(msg)
  {}
  Init_Hmd_roll pitch(::vive_interfaces::msg::Hmd::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Hmd_roll(msg_);
  }

private:
  ::vive_interfaces::msg::Hmd msg_;
};

class Init_Hmd_yaw
{
public:
  explicit Init_Hmd_yaw(::vive_interfaces::msg::Hmd & msg)
  : msg_(msg)
  {}
  Init_Hmd_pitch yaw(::vive_interfaces::msg::Hmd::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Hmd_pitch(msg_);
  }

private:
  ::vive_interfaces::msg::Hmd msg_;
};

class Init_Hmd_z
{
public:
  explicit Init_Hmd_z(::vive_interfaces::msg::Hmd & msg)
  : msg_(msg)
  {}
  Init_Hmd_yaw z(::vive_interfaces::msg::Hmd::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Hmd_yaw(msg_);
  }

private:
  ::vive_interfaces::msg::Hmd msg_;
};

class Init_Hmd_y
{
public:
  explicit Init_Hmd_y(::vive_interfaces::msg::Hmd & msg)
  : msg_(msg)
  {}
  Init_Hmd_z y(::vive_interfaces::msg::Hmd::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Hmd_z(msg_);
  }

private:
  ::vive_interfaces::msg::Hmd msg_;
};

class Init_Hmd_x
{
public:
  Init_Hmd_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Hmd_y x(::vive_interfaces::msg::Hmd::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Hmd_y(msg_);
  }

private:
  ::vive_interfaces::msg::Hmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vive_interfaces::msg::Hmd>()
{
  return vive_interfaces::msg::builder::Init_Hmd_x();
}

}  // namespace vive_interfaces

#endif  // VIVE_INTERFACES__MSG__DETAIL__HMD__BUILDER_HPP_
