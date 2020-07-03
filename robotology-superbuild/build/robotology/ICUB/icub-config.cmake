# Copyright: (C) 2010 RobotCub Consortium
# Author: Lorenzo Natale
# CopyPolicy: Released under the terms of the GNU GPL v2.0.

if (NOT ICUB_FOUND)
  message(STATUS "Using iCub from build tree")

  set(ICUB_VERSION 1.16.0)
  # If YARP_LIBRARIES has been valorized by a previous call of find_package(YARP)
  # in user CMakelists.txt save it in temporary variable to restore it later.
  if(DEFINED YARP_LIBRARIES)
    set(_temp_yarp_libs ${YARP_LIBRARIES})
  endif()

  include(CMakeFindDependencyMacro)
  find_dependency(YCM 0.11.0 REQUIRED)
  find_dependency(YARP 3.3.2 REQUIRED COMPONENTS os conf sig dev math gsl)

  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/icub-export-build-includes.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/icub-export-build.cmake")

  set(ICUB_LIBRARIES "iCubDev;ctrlLib;skinDynLib;iKin;iDyn;learningMachine;perceptiveModels;actionPrimitives;optimization" CACHE INTERNAL "List of iCub libraries")
  set(ICUB_MODULE_PATH "/icub-grasping/robotology-superbuild/build/robotology/ICUB/conf" CACHE INTERNAL "iCub cmake scripts directory")
  set(ICUB_LINK_FLAGS "" CACHE INTERNAL "List of iCub linker options")
  set(ICUB_LINK_DIRECTORIES "")

  # This is not ideal and should be removed. At the moment
  # only needed by OpenCV
  link_directories(${ICUB_LINK_DIRECTORIES})
  set (ICUB_FOUND TRUE)
  if(DEFINED _temp_yarp_libs)
    list(APPEND YARP_LIBRARIES ${_temp_yarp_libs})
    list(REMOVE_DUPLICATES YARP_LIBRARIES)
  endif()
endif (NOT ICUB_FOUND)
