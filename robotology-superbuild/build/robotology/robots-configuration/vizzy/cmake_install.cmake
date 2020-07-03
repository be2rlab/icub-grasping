# Install script for directory: /icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/vizzy" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/general.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/vizzy-cluster-at-vislab-PORTEGE-R930.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/vizzy-cluster-at-vizzy-desktop.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/vizzy-cluster-at-vizzy-laptop.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/vizzy.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/vizzyStartup.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/vizzyStartupWithROS.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/vizzyStartupWithROS_simulator.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/vizzy_flt_fingers.xml"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/vizzy" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/firmwareupdater.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/kinematics_left_arm_root_base_link.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/kinematics_left_arm_root_waist.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/kinematics_right_arm_root_base_link.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/kinematics_right_arm_root_waist.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/pf3dTracker_for_Vizzy.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/vizzyEyes3088x2076.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/yarprobotinterface.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/yarprobotinterfacecalibfingers.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/ymanager.ini"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/vizzy" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/calibrators")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/vizzy" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/wrappers")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/vizzy" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/vizzy/hardware")
endif()

