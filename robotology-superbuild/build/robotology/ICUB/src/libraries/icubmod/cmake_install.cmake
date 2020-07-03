# Install script for directory: /icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/icubmod

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/canBusMotionControl/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/cartesianController/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/cfw2Can/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/dragonfly2/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/esdCan/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/sharedCan/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/socketCan/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/esdSniffer/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/fakeCan/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/bcbBattery/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/bmsBattery/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/gazeController/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/parametricCalibrator/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/parametricCalibratorEth/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/motionControlLib/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/plxCan/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/staticgrabber/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/xsensmtx/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/skinWrapper/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/canBusAnalogSensor/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/canBusDoubleFTSensor/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/canBusVirtualAnalogSensor/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/canBusInertialMTB/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/canBusSkin/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/embObjMotionControl/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/embObjSkin/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/embObjAnalog/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/embObjStrain/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/embObjFTsensor/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/embObjMais/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/embObjMultiEnc/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/embObjInertials/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/embObjIMU/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/embObjVirtualAnalogSensor/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/imuST_M1/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/imuFilter/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/embObjPSC/cmake_install.cmake")

endif()

