# Install script for directory: /icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubBielefeld01" TYPE FILE FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/firmwareupdater.ini")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubBielefeld01/scripts" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/scripts/app.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/scripts/demoForceControl.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/scripts/hannover.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/scripts/icubInterface.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/scripts/robotMotorGui.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/scripts/skinGui.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/scripts/wholeBodyTorqueObserver.xml"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubBielefeld01/scripts" TYPE FILE FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/scripts/firmwareUpdate.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubBielefeld01" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/cartesianLeftArm.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/cartesianRightArm.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/iCubInterface.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/iCubInterfaceUnsafe.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icub.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icubSafe.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icubSafeHeadTorso.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icubSafeLeftArm.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icubSafeLeftHand.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icubSafeLegs.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icubSafeRightArm.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icubSafeRightHand.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icub_head_torso.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icub_head_torso_safe.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icub_inertial.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icub_left_arm.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icub_left_arm_safe.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icub_left_hand.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icub_left_hand_safe.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icub_left_leg.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icub_left_leg_safe.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icub_right_arm.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icub_right_arm_safe.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icub_right_hand.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icub_right_hand_safe.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icub_right_leg.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/icub_right_leg_safe.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/skinlefthand.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/skinrighthand.ini"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubBielefeld01" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubBielefeld01/conf/camera")
endif()

