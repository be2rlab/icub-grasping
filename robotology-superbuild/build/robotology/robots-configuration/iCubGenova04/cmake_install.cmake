# Install script for directory: /icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubGenova04" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/general.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/iRonCub-noLegs_wbd.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/iRonCub_wbd.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/icub_all.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/icub_all_inertials.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/icub_right_leg.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/icub_rl_FTsens.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/icub_rl_imu.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/icub_standup.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/icub_wbd.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/icub_wbd_inertials.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/icub_wbd_noskin.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/icub_wbd_noskin_noxsens.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/icub_wbd_noskin_noxsens_wfeetimu_strain2.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/icub_wbd_noskin_wfeetimu.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/network.iCubGenova04.xml"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubGenova04" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/cartesianSolver.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/firmwareupdater.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/iKinGazeCtrl.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/icubEyes.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/icubEyes_640x480.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/pf3dTracker.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/yarprobotinterface.ini"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubGenova04" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/calibrators")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubGenova04" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/cartesian")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubGenova04" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/wrappers")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubGenova04" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/hardware")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubGenova04" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/camera")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubGenova04" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubGenova04/estimators")
endif()

