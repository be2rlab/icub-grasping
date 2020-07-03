# Install script for directory: /icub-grasping/robotology-superbuild/robotology/ICUB/src/tools

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
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/controlBoardDumper/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/simpleClient/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/testStereoMatch/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/fingersTuner/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/imageSplitter/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/trajectoryPlayer/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/imageBlender/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/imageCropper/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/embObjProtoTools/boardTransceiver/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/wholeBodyPlayer/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/canLoader/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/ethLoader/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/strainCalib/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/iCubSkinGui/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/frameGrabberGui2/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/skinManagerGui/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/FirmwareUpdater/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/joystickCtrl/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/joystickCheck/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/iCubGui/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/stereoCalib/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/tools/depth2kin/cmake_install.cmake")

endif()

