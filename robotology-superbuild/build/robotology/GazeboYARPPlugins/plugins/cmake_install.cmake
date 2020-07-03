# Install script for directory: /icub-grasping/robotology-superbuild/robotology/GazeboYARPPlugins/plugins

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
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/camera/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/clock/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/controlboard/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/externalwrench/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/fakecontrolboard/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/forcetorque/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/imu/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/inertialmtb/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/inertialmtbPart/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/showmodelcom/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/multicamera/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/maissensor/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/worldinterface/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/linkattacher/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/lasersensor/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/doublelaser/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/depthCamera/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/contactloadcellarray/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/modelposepublisher/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/basestate/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/GazeboYARPPlugins/plugins/configurationoverride/cmake_install.cmake")

endif()

