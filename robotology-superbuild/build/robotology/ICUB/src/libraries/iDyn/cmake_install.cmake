# Install script for directory: /icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/iDyn

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/icub-grasping/robotology-superbuild/build/robotology/ICUB/lib/libiDyn.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/iCub/iDyn" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/iDyn/include/iCub/iDyn/iDyn.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/iDyn/include/iCub/iDyn/iDynInv.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/iDyn/include/iCub/iDyn/iDynBody.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/iDyn/include/iCub/iDyn/iDynTransform.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/iDyn/include/iCub/iDyn/iDynContact.h"
    )
endif()

