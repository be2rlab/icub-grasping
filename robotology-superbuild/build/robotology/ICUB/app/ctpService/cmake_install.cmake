# Install script for directory: /icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/contexts/ctpService" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/dataHeadHello.log"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/dataLeftArmGrasp.log"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/dataLeftArmGraspSeat.log"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/dataLeftArmGreatSeat.log"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/dataLeftArmHello.log"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/dataLeftArmHelloSeat.log"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/dataLeftArmRobocomSeat.log"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/dataLeftArmSmart.log"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/dataLeftArmSmart1.log"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/dataRightArmGrasp.log"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/dataRightArmGraspSeat.log"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/dataRightArmGreatSeat.log"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/dataRightArmHello.log"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/dataRightArmHelloSeat.log"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/dataRightArmRobocomSeat.log"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/dataRightArmSmart.log"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/test.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/velocityControl.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/velocityControlArm.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/velocityControlHead.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/velocityControlLeg.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/conf/velocityControlTorso.ini"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/templates/applications" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/scripts/icubSim_legs.xml.template"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/ctpService/scripts/icub_legs.xml.template"
    )
endif()

