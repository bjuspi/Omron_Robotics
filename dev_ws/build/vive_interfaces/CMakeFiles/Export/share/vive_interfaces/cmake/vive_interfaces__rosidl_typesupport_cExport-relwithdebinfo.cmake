#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "vive_interfaces::vive_interfaces__rosidl_typesupport_c" for configuration "RelWithDebInfo"
set_property(TARGET vive_interfaces::vive_interfaces__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(vive_interfaces::vive_interfaces__rosidl_typesupport_c PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/vive_interfaces__rosidl_typesupport_c.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/vive_interfaces__rosidl_typesupport_c.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vive_interfaces::vive_interfaces__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_vive_interfaces::vive_interfaces__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/vive_interfaces__rosidl_typesupport_c.lib" "${_IMPORT_PREFIX}/bin/vive_interfaces__rosidl_typesupport_c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
