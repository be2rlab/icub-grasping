# Install script for directory: /icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/ctrlLib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/icub-grasping/robotology-superbuild/build/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/icub-grasping/robotology-superbuild/build/robotology/ICUB/lib/libctrlLib.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/iCub/ctrl" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/ctrlLib/include/iCub/ctrl/math.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/ctrlLib/include/iCub/ctrl/filters.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/ctrlLib/include/iCub/ctrl/kalman.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/ctrlLib/include/iCub/ctrl/pids.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/ctrlLib/include/iCub/ctrl/tuning.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/ctrlLib/include/iCub/ctrl/adaptWinPolyEstimator.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/ctrlLib/include/iCub/ctrl/minJerkCtrl.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/ctrlLib/include/iCub/ctrl/optimalControl.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/ctrlLib/include/iCub/ctrl/neuralNetworks.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/ctrlLib/include/iCub/ctrl/outliersDetection.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/ctrlLib/include/iCub/ctrl/clustering.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/ctrlLib/include/iCub/ctrl/functionEncoder.h"
    )
endif()

