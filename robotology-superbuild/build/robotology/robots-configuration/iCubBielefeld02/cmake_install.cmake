# Install script for directory: /icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubBielefeld02" TYPE FILE FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/firmwareupdater.ini")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubBielefeld02/scripts" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/scripts/app.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/scripts/cameras.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/scripts/cluster-config.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/scripts/demoForceControl.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/scripts/hannover.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/scripts/skinGui.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/scripts/wholeBodyTorqueObserver.xml"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubBielefeld02" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/conf/cartesianLeftArm.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/conf/cartesianRightArm.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/conf/iCubInterface.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/conf/icub.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/conf/icubHead.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/conf/icubHeadRaw.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/conf/icub_head_torso.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/conf/icub_inertial.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/conf/icub_left_arm.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/conf/icub_left_hand.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/conf/icub_left_leg.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/conf/icub_right_arm.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/conf/icub_right_hand.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/conf/icub_right_leg.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/conf/skinlefthand.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/conf/skinrighthand.ini"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubBielefeld02" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld02/conf/camera")
endif()

