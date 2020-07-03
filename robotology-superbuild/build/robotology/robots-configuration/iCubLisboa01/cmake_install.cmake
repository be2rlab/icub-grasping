# Install script for directory: /icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubLisboa01" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/affordancesExploration.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/cameras_320x240_setForTracking.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/cameras_calib_bayer_640x480.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/demoRedBall.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/dynamicBabbling.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/dynamicControl.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/general.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/handTeleoperation.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/iCubGui.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/iCubGui_skinContacts.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/iCubStartup.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/icub_all.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/icub_noLegs.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/icub_noSkin.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/skinGuiAll.xml"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/vislab-cluster.xml"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubLisboa01" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/firmwareupdater.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/iKinGazeCtrl.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/icubEyes320x240.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/icubEyes640x480.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/pf3dTracker.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/yarprobotinterface.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/yarprobotinterface_noLegs.ini"
    "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/yarprobotinterface_noSkin.ini"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubLisboa01" TYPE FILE FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/firmwareUpdate.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubLisboa01" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/calibrators")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubLisboa01" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/cartesian")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubLisboa01" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/wrappers")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubLisboa01" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/hardware")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ICUBcontrib/robots/iCubLisboa01" TYPE DIRECTORY FILES "/icub-grasping/robotology-superbuild/robotology/robots-configuration/iCubLisboa01/camera")
endif()

