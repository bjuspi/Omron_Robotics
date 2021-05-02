// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vive_interfaces:msg\Controller.idl
// generated code does not contain a copyright notice

#ifndef VIVE_INTERFACES__MSG__DETAIL__CONTROLLER__BUILDER_HPP_
#define VIVE_INTERFACES__MSG__DETAIL__CONTROLLER__BUILDER_HPP_

#include "vive_interfaces/msg/detail/controller__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vive_interfaces
{

namespace msg
{

namespace builder
{

class Init_Controller_trackpad_y
{
public:
  explicit Init_Controller_trackpad_y(::vive_interfaces::msg::Controller & msg)
  : msg_(msg)
  {}
  ::vive_interfaces::msg::Controller trackpad_y(::vive_interfaces::msg::Controller::_trackpad_y_type arg)
  {
    msg_.trackpad_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vive_interfaces::msg::Controller msg_;
};

class Init_Controller_trackpad_x
{
public:
  explicit Init_Controller_trackpad_x(::vive_interfaces::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_trackpad_y trackpad_x(::vive_interfaces::msg::Controller::_trackpad_x_type arg)
  {
    msg_.trackpad_x = std::move(arg);
    return Init_Controller_trackpad_y(msg_);
  }

private:
  ::vive_interfaces::msg::Controller msg_;
};

class Init_Controller_trackpad_touched
{
public:
  explicit Init_Controller_trackpad_touched(::vive_interfaces::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_trackpad_x trackpad_touched(::vive_interfaces::msg::Controller::_trackpad_touched_type arg)
  {
    msg_.trackpad_touched = std::move(arg);
    return Init_Controller_trackpad_x(msg_);
  }

private:
  ::vive_interfaces::msg::Controller msg_;
};

class Init_Controller_trackpad_pressed
{
public:
  explicit Init_Controller_trackpad_pressed(::vive_interfaces::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_trackpad_touched trackpad_pressed(::vive_interfaces::msg::Controller::_trackpad_pressed_type arg)
  {
    msg_.trackpad_pressed = std::move(arg);
    return Init_Controller_trackpad_touched(msg_);
  }

private:
  ::vive_interfaces::msg::Controller msg_;
};

class Init_Controller_trigger
{
public:
  explicit Init_Controller_trigger(::vive_interfaces::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_trackpad_pressed trigger(::vive_interfaces::msg::Controller::_trigger_type arg)
  {
    msg_.trigger = std::move(arg);
    return Init_Controller_trackpad_pressed(msg_);
  }

private:
  ::vive_interfaces::msg::Controller msg_;
};

class Init_Controller_menu
{
public:
  explicit Init_Controller_menu(::vive_interfaces::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_trigger menu(::vive_interfaces::msg::Controller::_menu_type arg)
  {
    msg_.menu = std::move(arg);
    return Init_Controller_trigger(msg_);
  }

private:
  ::vive_interfaces::msg::Controller msg_;
};

class Init_Controller_grip
{
public:
  explicit Init_Controller_grip(::vive_interfaces::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_menu grip(::vive_interfaces::msg::Controller::_grip_type arg)
  {
    msg_.grip = std::move(arg);
    return Init_Controller_menu(msg_);
  }

private:
  ::vive_interfaces::msg::Controller msg_;
};

class Init_Controller_roll
{
public:
  explicit Init_Controller_roll(::vive_interfaces::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_grip roll(::vive_interfaces::msg::Controller::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Controller_grip(msg_);
  }

private:
  ::vive_interfaces::msg::Controller msg_;
};

class Init_Controller_pitch
{
public:
  explicit Init_Controller_pitch(::vive_interfaces::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_roll pitch(::vive_interfaces::msg::Controller::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Controller_roll(msg_);
  }

private:
  ::vive_interfaces::msg::Controller msg_;
};

class Init_Controller_yaw
{
public:
  explicit Init_Controller_yaw(::vive_interfaces::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_pitch yaw(::vive_interfaces::msg::Controller::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Controller_pitch(msg_);
  }

private:
  ::vive_interfaces::msg::Controller msg_;
};

class Init_Controller_z
{
public:
  explicit Init_Controller_z(::vive_interfaces::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_yaw z(::vive_interfaces::msg::Controller::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Controller_yaw(msg_);
  }

private:
  ::vive_interfaces::msg::Controller msg_;
};

class Init_Controller_y
{
public:
  explicit Init_Controller_y(::vive_interfaces::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_z y(::vive_interfaces::msg::Controller::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Controller_z(msg_);
  }

private:
  ::vive_interfaces::msg::Controller msg_;
};

class Init_Controller_x
{
public:
  Init_Controller_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Controller_y x(::vive_interfaces::msg::Controller::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Controller_y(msg_);
  }

private:
  ::vive_interfaces::msg::Controller msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vive_interfaces::msg::Controller>()
{
  return vive_interfaces::msg::builder::Init_Controller_x();
}

}  // namespace vive_interfaces

#endif  // VIVE_INTERFACES__MSG__DETAIL__CONTROLLER__BUILDER_HPP_
