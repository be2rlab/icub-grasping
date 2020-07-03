# Install script for directory: /icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_manager-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib/libYARP_manager.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_manager-priv-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/manager/impl" TYPE FILE FILES "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/impl/textparser.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_manager-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/manager" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/application.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/arbitrator.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/binexparser.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/broker.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/data.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/execstate.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/executable.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/fsm.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/graph.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/kbase.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/localbroker.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/logicresource.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/manager.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/manifestloader.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/module.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/node.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/physicresource.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/primresource.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/resource.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/scriptbroker.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/singleapploader.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/utility.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/xmlapploader.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/xmlclusterloader.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/xmlappsaver.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/xmlmodloader.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/xmlresloader.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/xmltemploader.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/yarpbroker.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/yarpdevbroker.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_manager/src/yarp/manager/ymm-types.h"
    )
endif()

