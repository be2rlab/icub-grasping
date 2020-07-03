# Install script for directory: /icub-grasping/robotology-superbuild/robotology/ICUB/app

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
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/default/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/actionsRenderingEngine/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/cameraCalibration/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/cartesianSolver/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/ctpService/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/controlBoardDumper/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/iCubGui/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/iKinGazeCtrl/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/faceExpressions/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/objectsPropertiesCollector/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/simCartesianControl/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/robotScripting/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/skinGui/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/wholeBodyDynamics/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/simConfig/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/yarpmanager/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/joystickCtrl/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/iCubStartup/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/simFaceExpressions/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/fingersTuner/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/depth2kin/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/fingertipsPortScope/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/oculus/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/app/wholeBodyPlayer/cmake_install.cmake")

endif()

