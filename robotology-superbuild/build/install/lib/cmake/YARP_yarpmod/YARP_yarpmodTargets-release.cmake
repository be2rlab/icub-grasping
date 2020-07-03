#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "YARP::yarpmod" for configuration "Release"
set_property(TARGET YARP::yarpmod APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(YARP::yarpmod PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libyarpmod.so"
  IMPORTED_SONAME_RELEASE "libyarpmod.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS YARP::yarpmod )
list(APPEND _IMPORT_CHECK_FILES_FOR_YARP::yarpmod "${_IMPORT_PREFIX}/lib/libyarpmod.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
