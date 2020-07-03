# Install script for directory: /icub-grasping/robotology-superbuild/robotology/YARP/extern/ycm

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.6.0" AND
     IS_DIRECTORY "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.6.0")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.6.0\"")
    file(REMOVE_RECURSE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.6.0")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.7.0" AND
     IS_DIRECTORY "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.7.0")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.7.0\"")
    file(REMOVE_RECURSE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.7.0")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.0" AND
     IS_DIRECTORY "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.0")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.0\"")
    file(REMOVE_RECURSE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.0")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.1" AND
     IS_DIRECTORY "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.1")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.1\"")
    file(REMOVE_RECURSE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.1")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.20180628.11" AND
     IS_DIRECTORY "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.20180628.11")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.20180628.11\"")
    file(REMOVE_RECURSE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.20180628.11")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.20180712.5" AND
     IS_DIRECTORY "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.20180712.5")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.20180712.5\"")
    file(REMOVE_RECURSE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.20180712.5")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.20180720.3" AND
     IS_DIRECTORY "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.20180720.3")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.20180720.3\"")
    file(REMOVE_RECURSE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.8.20180720.3")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.0" AND
     IS_DIRECTORY "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.0")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.0\"")
    file(REMOVE_RECURSE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.0")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.0.8" AND
     IS_DIRECTORY "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.0.8")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.0.8\"")
    file(REMOVE_RECURSE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.0.8")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20181128.10" AND
     IS_DIRECTORY "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20181128.10")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20181128.10\"")
    file(REMOVE_RECURSE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20181128.10")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20181204.8" AND
     IS_DIRECTORY "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20181204.8")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20181204.8\"")
    file(REMOVE_RECURSE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20181204.8")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20190213.9" AND
     IS_DIRECTORY "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20190213.9")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20190213.9\"")
    file(REMOVE_RECURSE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20190213.9")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20190315.16" AND
     IS_DIRECTORY "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20190315.16")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20190315.16\"")
    file(REMOVE_RECURSE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20190315.16")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20190329.27" AND
     IS_DIRECTORY "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20190329.27")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20190329.27\"")
    file(REMOVE_RECURSE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.9.20190329.27")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.10.0" AND
     IS_DIRECTORY "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.10.0")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.10.0\"")
    file(REMOVE_RECURSE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.10.0")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.10.1" AND
     IS_DIRECTORY "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.10.1")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.10.1\"")
    file(REMOVE_RECURSE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.10.1")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.10.2" AND
     IS_DIRECTORY "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.10.2")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.10.2\"")
    file(REMOVE_RECURSE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.10.2")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.10.3" AND
     IS_DIRECTORY "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.10.3")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.10.3\"")
    file(REMOVE_RECURSE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/ycm-0.10.3")
  endif()
endif()

