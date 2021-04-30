// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vive_interfaces:msg\Hmd.idl
// generated code does not contain a copyright notice

#ifndef VIVE_INTERFACES__MSG__DETAIL__HMD__FUNCTIONS_H_
#define VIVE_INTERFACES__MSG__DETAIL__HMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vive_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "vive_interfaces/msg/detail/hmd__struct.h"

/// Initialize msg/Hmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vive_interfaces__msg__Hmd
 * )) before or use
 * vive_interfaces__msg__Hmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vive_interfaces
bool
vive_interfaces__msg__Hmd__init(vive_interfaces__msg__Hmd * msg);

/// Finalize msg/Hmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vive_interfaces
void
vive_interfaces__msg__Hmd__fini(vive_interfaces__msg__Hmd * msg);

/// Create msg/Hmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vive_interfaces__msg__Hmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vive_interfaces
vive_interfaces__msg__Hmd *
vive_interfaces__msg__Hmd__create();

/// Destroy msg/Hmd message.
/**
 * It calls
 * vive_interfaces__msg__Hmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vive_interfaces
void
vive_interfaces__msg__Hmd__destroy(vive_interfaces__msg__Hmd * msg);


/// Initialize array of msg/Hmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * vive_interfaces__msg__Hmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vive_interfaces
bool
vive_interfaces__msg__Hmd__Sequence__init(vive_interfaces__msg__Hmd__Sequence * array, size_t size);

/// Finalize array of msg/Hmd messages.
/**
 * It calls
 * vive_interfaces__msg__Hmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vive_interfaces
void
vive_interfaces__msg__Hmd__Sequence__fini(vive_interfaces__msg__Hmd__Sequence * array);

/// Create array of msg/Hmd messages.
/**
 * It allocates the memory for the array and calls
 * vive_interfaces__msg__Hmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vive_interfaces
vive_interfaces__msg__Hmd__Sequence *
vive_interfaces__msg__Hmd__Sequence__create(size_t size);

/// Destroy array of msg/Hmd messages.
/**
 * It calls
 * vive_interfaces__msg__Hmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vive_interfaces
void
vive_interfaces__msg__Hmd__Sequence__destroy(vive_interfaces__msg__Hmd__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // VIVE_INTERFACES__MSG__DETAIL__HMD__FUNCTIONS_H_
