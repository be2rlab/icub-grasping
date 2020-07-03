#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "YARP::yarpros" for configuration "Release"
set_property(TARGET YARP::yarpros APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(YARP::yarpros PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/yarpros"
  )

list(APPEND _IMPORT_CHECK_TARGETS YARP::yarpros )
list(APPEND _IMPORT_CHECK_FILES_FOR_YARP::yarpros "${_IMPORT_PREFIX}/bin/yarpros" )

# Import target "YARP::yarpcar" for configuration "Release"
set_property(TARGET YARP::yarpcar APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(YARP::yarpcar PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libyarpcar.so"
  IMPORTED_SONAME_RELEASE "libyarpcar.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS YARP::yarpcar )
list(APPEND _IMPORT_CHECK_FILES_FOR_YARP::yarpcar "${_IMPORT_PREFIX}/lib/libyarpcar.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
