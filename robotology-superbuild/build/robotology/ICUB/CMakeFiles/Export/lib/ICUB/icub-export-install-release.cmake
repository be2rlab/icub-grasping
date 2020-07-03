#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "iCubDev" for configuration "Release"
set_property(TARGET iCubDev APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(iCubDev PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libiCubDev.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS iCubDev )
list(APPEND _IMPORT_CHECK_FILES_FOR_iCubDev "${_IMPORT_PREFIX}/lib/libiCubDev.a" )

# Import target "ctrlLib" for configuration "Release"
set_property(TARGET ctrlLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ctrlLib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libctrlLib.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS ctrlLib )
list(APPEND _IMPORT_CHECK_FILES_FOR_ctrlLib "${_IMPORT_PREFIX}/lib/libctrlLib.a" )

# Import target "skinDynLib" for configuration "Release"
set_property(TARGET skinDynLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(skinDynLib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libskinDynLib.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS skinDynLib )
list(APPEND _IMPORT_CHECK_FILES_FOR_skinDynLib "${_IMPORT_PREFIX}/lib/libskinDynLib.a" )

# Import target "iKin" for configuration "Release"
set_property(TARGET iKin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(iKin PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libiKin.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS iKin )
list(APPEND _IMPORT_CHECK_FILES_FOR_iKin "${_IMPORT_PREFIX}/lib/libiKin.a" )

# Import target "iDyn" for configuration "Release"
set_property(TARGET iDyn APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(iDyn PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libiDyn.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS iDyn )
list(APPEND _IMPORT_CHECK_FILES_FOR_iDyn "${_IMPORT_PREFIX}/lib/libiDyn.a" )

# Import target "learningMachine" for configuration "Release"
set_property(TARGET learningMachine APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(learningMachine PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/liblearningMachine.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS learningMachine )
list(APPEND _IMPORT_CHECK_FILES_FOR_learningMachine "${_IMPORT_PREFIX}/lib/liblearningMachine.a" )

# Import target "perceptiveModels" for configuration "Release"
set_property(TARGET perceptiveModels APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(perceptiveModels PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libperceptiveModels.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS perceptiveModels )
list(APPEND _IMPORT_CHECK_FILES_FOR_perceptiveModels "${_IMPORT_PREFIX}/lib/libperceptiveModels.a" )

# Import target "actionPrimitives" for configuration "Release"
set_property(TARGET actionPrimitives APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(actionPrimitives PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libactionPrimitives.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS actionPrimitives )
list(APPEND _IMPORT_CHECK_FILES_FOR_actionPrimitives "${_IMPORT_PREFIX}/lib/libactionPrimitives.a" )

# Import target "optimization" for configuration "Release"
set_property(TARGET optimization APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(optimization PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/liboptimization.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS optimization )
list(APPEND _IMPORT_CHECK_FILES_FOR_optimization "${_IMPORT_PREFIX}/lib/liboptimization.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
