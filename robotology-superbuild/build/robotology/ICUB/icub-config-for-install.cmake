# Copyright: (C) 2010 RobotCub Consortium
# Author: Lorenzo Natale
# CopyPolicy: Released under the terms of the GNU GPL v2.0.

if (NOT ICUB_FOUND)
  message(STATUS "Using iCub from install")

  set(ICUB_VERSION 1.16.0)
  # If YARP_LIBRARIES has been valorized by a previous call of find_package(YARP)
  # in user CMakelists.txt save it in temporary variable to restore it later.
  if(DEFINED YARP_LIBRARIES)
    set(_temp_yarp_libs ${YARP_LIBRARIES})
  endif()

  include(CMakeFindDependencyMacro)
  find_dependency(YCM 0.11.0 REQUIRED)
  find_dependency(YARP 3.3.2 REQUIRED COMPONENTS os conf sig dev math gsl)

  #set(ICUB_INCLUDE_DIRS "/icub-grasping/robotology-superbuild/build/install/include" CACHE INTERNAL "Include directories needed for iCub")
  set(ICUB_MODULE_PATH "/icub-grasping/robotology-superbuild/build/install/share/iCub/cmake" CACHE INTERNAL "iCub cmake scripts directory")
  set(ICUB_LIBRARIES "iCubDev;ctrlLib;skinDynLib;iKin;iDyn;learningMachine;perceptiveModels;actionPrimitives;optimization" CACHE INTERNAL "List of iCub libraries")
  set(ICUB_LINK_FLAGS "" CACHE INTERNAL "List of iCub linker options")
  set(ICUB_LINK_DIRECTORIES "")
  set(ICUB_INSTALL_PREFIX "/icub-grasping/robotology-superbuild/build/install")

  set(ICUB_PLUGIN_MANIFESTS_INSTALL_DIR "share/iCub/plugins")
  set(ICUB_MODULES_INSTALL_DIR "share/iCub/modules")
  set(ICUB_APPLICATIONS_INSTALL_DIR "share/iCub/applications")
  set(ICUB_TEMPLATES_INSTALL_DIR "share/iCub/templates")
  set(ICUB_APPLICATIONS_TEMPLATES_INSTALL_DIR "share/iCub/templates/applications")
  set(ICUB_MODULES_TEMPLATES_INSTALL_DIR "share/iCub/templates/modules")
  set(ICUB_CONTEXTS_INSTALL_DIR "share/iCub/contexts")

  # Remove the old file if it exists. This is a temporary fix
  if(EXISTS "/icub-grasping/robotology-superbuild/build/install/lib/ICUB/icub-export-install-includes.cmake")
    file(REMOVE "/icub-grasping/robotology-superbuild/build/install/lib/ICUB/icub-export-install-includes.cmake")
  endif()

  include("/icub-grasping/robotology-superbuild/build/install/lib/ICUB/icub-export-install.cmake")
  include("/icub-grasping/robotology-superbuild/build/install/lib/ICUB/icub-export-inst-includes.cmake")

  # This is not ideal and should be removed. At the moment
  # only needed by OpenCV
  link_directories(${ICUB_LINK_DIRECTORIES})

  set (ICUB_FOUND TRUE)
  if(DEFINED _temp_yarp_libs)
    list(APPEND YARP_LIBRARIES ${_temp_yarp_libs})
    list(REMOVE_DUPLICATES YARP_LIBRARIES)
  endif()
endif (NOT ICUB_FOUND)
