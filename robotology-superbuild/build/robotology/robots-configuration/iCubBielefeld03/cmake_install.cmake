# Install script for directory: /icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubBielefeld03" TYPE FILE FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/firmwareupdater.ini")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubBielefeld03/scripts" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/scripts/cameras.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/scripts/cameras_calib.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/scripts/cluster-config.xml"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubBielefeld03/scripts" TYPE FILE FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/scripts/firmwareUpdate.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubBielefeld03" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/cartesianLeftArm.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/cartesianRightArm.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/cartesianSolver.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/iCubInterface.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icubHeadTorso.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icubLeftLeg.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icubRawHeadTorso.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icubRawLeftArm.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icubRawLeftHand.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icubRawLeftLeg.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icubRawRightArm.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icubRawRightHand.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icubRawRightLeg.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icubRightLeg.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_head_torso.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_head_torso_raw.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_head_torso_safe.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_inertial.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_left_arm.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_left_arm_raw.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_left_arm_safe.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_left_hand.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_left_hand_raw.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_left_hand_safe.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_left_leg.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_left_leg_raw.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_left_leg_safe.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_right_arm.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_right_arm_raw.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_right_arm_safe.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_right_hand.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_right_hand_raw.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_right_hand_safe.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_right_leg.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_right_leg_raw.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/icub_right_leg_safe.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/skin_left_arm.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/skin_right_arm.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/skin_torso.ini"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubBielefeld03" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld03/conf/camera")
endif()

