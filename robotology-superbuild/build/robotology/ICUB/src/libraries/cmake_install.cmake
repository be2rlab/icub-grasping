# Install script for directory: /icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries

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
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/iCubDev/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/ctrlLib/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/skinDynLib/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/iKin/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/iDyn/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/learningMachine/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/perceptiveModels/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/actionPrimitives/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/icubmod/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/ICUB/src/libraries/optimization/cmake_install.cmake")

endif()

