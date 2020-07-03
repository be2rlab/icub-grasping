# Install script for directory: /icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubHongKong01" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/L_R_arm.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/general.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/icub_all-no_skin.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/icub_all.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/icub_all_no_skin.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/icub_head_IMU.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/legs_torso.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/network.iCubHongKong01.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/test.xml"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubHongKong01" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/cartesianSolver.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/firmwareupdater.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/iKinGazeCtrl.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/icubEyes.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/pf3dTracker.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/startaudio.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/wholeBodyDynamics.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/yarpmotorgui.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/yarprobotinterface.ini"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubHongKong01" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/calibrators")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubHongKong01" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/cartesian")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubHongKong01" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/wrappers")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubHongKong01" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/hardware")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubHongKong01" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/camera")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubHongKong01" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubHongKong01/estimators")
endif()

