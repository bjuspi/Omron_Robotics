#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "vive_interfaces::vive_interfaces__rosidl_generator_c" for configuration "Debug"
set_property(TARGET vive_interfaces::vive_interfaces__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(vive_interfaces::vive_interfaces__rosidl_generator_c PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/vive_interfaces__rosidl_generator_c.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/vive_interfaces__rosidl_generator_c.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vive_interfaces::vive_interfaces__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_vive_interfaces::vive_interfaces__rosidl_generator_c "${_IMPORT_PREFIX}/lib/vive_interfaces__rosidl_generator_c.lib" "${_IMPORT_PREFIX}/bin/vive_interfaces__rosidl_generator_c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
