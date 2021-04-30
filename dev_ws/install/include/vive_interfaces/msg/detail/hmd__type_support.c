// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vive_interfaces:msg\Hmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vive_interfaces/msg/detail/hmd__rosidl_typesupport_introspection_c.h"
#include "vive_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vive_interfaces/msg/detail/hmd__functions.h"
#include "vive_interfaces/msg/detail/hmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Hmd__rosidl_typesupport_introspection_c__Hmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vive_interfaces__msg__Hmd__init(message_memory);
}

void Hmd__rosidl_typesupport_introspection_c__Hmd_fini_function(void * message_memory)
{
  vive_interfaces__msg__Hmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Hmd__rosidl_typesupport_introspection_c__Hmd_message_member_array[6] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vive_interfaces__msg__Hmd, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vive_interfaces__msg__Hmd, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vive_interfaces__msg__Hmd, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vive_interfaces__msg__Hmd, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vive_interfaces__msg__Hmd, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vive_interfaces__msg__Hmd, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Hmd__rosidl_typesupport_introspection_c__Hmd_message_members = {
  "vive_interfaces__msg",  // message namespace
  "Hmd",  // message name
  6,  // number of fields
  sizeof(vive_interfaces__msg__Hmd),
  Hmd__rosidl_typesupport_introspection_c__Hmd_message_member_array,  // message members
  Hmd__rosidl_typesupport_introspection_c__Hmd_init_function,  // function to initialize message memory (memory has to be allocated)
  Hmd__rosidl_typesupport_introspection_c__Hmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Hmd__rosidl_typesupport_introspection_c__Hmd_message_type_support_handle = {
  0,
  &Hmd__rosidl_typesupport_introspection_c__Hmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vive_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vive_interfaces, msg, Hmd)() {
  if (!Hmd__rosidl_typesupport_introspection_c__Hmd_message_type_support_handle.typesupport_identifier) {
    Hmd__rosidl_typesupport_introspection_c__Hmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Hmd__rosidl_typesupport_introspection_c__Hmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
