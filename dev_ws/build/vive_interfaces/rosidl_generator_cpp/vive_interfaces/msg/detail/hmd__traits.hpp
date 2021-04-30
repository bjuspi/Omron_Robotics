// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vive_interfaces:msg\Hmd.idl
// generated code does not contain a copyright notice

#ifndef VIVE_INTERFACES__MSG__DETAIL__HMD__TRAITS_HPP_
#define VIVE_INTERFACES__MSG__DETAIL__HMD__TRAITS_HPP_

#include "vive_interfaces/msg/detail/hmd__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vive_interfaces::msg::Hmd>()
{
  return "vive_interfaces::msg::Hmd";
}

template<>
inline const char * name<vive_interfaces::msg::Hmd>()
{
  return "vive_interfaces/msg/Hmd";
}

template<>
struct has_fixed_size<vive_interfaces::msg::Hmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<vive_interfaces::msg::Hmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<vive_interfaces::msg::Hmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VIVE_INTERFACES__MSG__DETAIL__HMD__TRAITS_HPP_
