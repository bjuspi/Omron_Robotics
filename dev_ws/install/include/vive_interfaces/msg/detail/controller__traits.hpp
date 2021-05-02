// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vive_interfaces:msg\Controller.idl
// generated code does not contain a copyright notice

#ifndef VIVE_INTERFACES__MSG__DETAIL__CONTROLLER__TRAITS_HPP_
#define VIVE_INTERFACES__MSG__DETAIL__CONTROLLER__TRAITS_HPP_

#include "vive_interfaces/msg/detail/controller__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vive_interfaces::msg::Controller>()
{
  return "vive_interfaces::msg::Controller";
}

template<>
inline const char * name<vive_interfaces::msg::Controller>()
{
  return "vive_interfaces/msg/Controller";
}

template<>
struct has_fixed_size<vive_interfaces::msg::Controller>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<vive_interfaces::msg::Controller>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<vive_interfaces::msg::Controller>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VIVE_INTERFACES__MSG__DETAIL__CONTROLLER__TRAITS_HPP_
