// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from vive_interfaces:msg\Hmd.idl
// generated code does not contain a copyright notice

#ifndef VIVE_INTERFACES__MSG__DETAIL__HMD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define VIVE_INTERFACES__MSG__DETAIL__HMD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "vive_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "vive_interfaces/msg/detail/hmd__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace vive_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vive_interfaces
cdr_serialize(
  const vive_interfaces::msg::Hmd & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vive_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  vive_interfaces::msg::Hmd & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vive_interfaces
get_serialized_size(
  const vive_interfaces::msg::Hmd & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vive_interfaces
max_serialized_size_Hmd(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace vive_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vive_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vive_interfaces, msg, Hmd)();

#ifdef __cplusplus
}
#endif

#endif  // VIVE_INTERFACES__MSG__DETAIL__HMD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
