#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tutorial_interfaces::tutorial_interfaces__rosidl_typesupport_introspection_c" for configuration "Debug"
set_property(TARGET tutorial_interfaces::tutorial_interfaces__rosidl_typesupport_introspection_c APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(tutorial_interfaces::tutorial_interfaces__rosidl_typesupport_introspection_c PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/tutorial_interfaces__rosidl_typesupport_introspection_c.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/tutorial_interfaces__rosidl_typesupport_introspection_c.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS tutorial_interfaces::tutorial_interfaces__rosidl_typesupport_introspection_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_tutorial_interfaces::tutorial_interfaces__rosidl_typesupport_introspection_c "${_IMPORT_PREFIX}/lib/tutorial_interfaces__rosidl_typesupport_introspection_c.lib" "${_IMPORT_PREFIX}/bin/tutorial_interfaces__rosidl_typesupport_introspection_c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
