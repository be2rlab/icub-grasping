# Install script for directory: /icub-grasping/robotology-superbuild/robotology/YARP/cmake

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_conf-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/yarp/cmake" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/YARP/cmake/YarpPlugin.cmake"
    "/icub-grasping/robotology-superbuild/robotology/YARP/cmake/YarpIDL.cmake"
    "/icub-grasping/robotology-superbuild/robotology/YARP/cmake/YarpInstallationHelpers.cmake"
    "/icub-grasping/robotology-superbuild/robotology/YARP/cmake/YarpPrintFeature.cmake"
    "/icub-grasping/robotology-superbuild/robotology/YARP/cmake/YarpDeprecatedOption.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_conf-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/yarp/cmake/template" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/YARP/cmake/template/yarp_plugin_carrier.cpp.in"
    "/icub-grasping/robotology-superbuild/robotology/YARP/cmake/template/yarp_plugin_RFModule.cpp.in"
    "/icub-grasping/robotology-superbuild/robotology/YARP/cmake/template/yarp_plugin_device.cpp.in"
    "/icub-grasping/robotology-superbuild/robotology/YARP/cmake/template/yarp_plugin_portmonitor.cpp.in"
    "/icub-grasping/robotology-superbuild/robotology/YARP/cmake/template/yarp_plugin_library.cpp.in"
    "/icub-grasping/robotology-superbuild/robotology/YARP/cmake/template/yarp_plugin_yarpdev_main.cpp.in"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/YarpDeprecatedWarning.cmake")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/YarpDeprecatedWarning.cmake\"")
    file(REMOVE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/YarpDeprecatedWarning.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/deprecated/YarpRenamedOption.cmake")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/deprecated/YarpRenamedOption.cmake\"")
    file(REMOVE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/deprecated/YarpRenamedOption.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/deprecated/YarpBackupVariable.cmake")
    message(STATUS "Deleted: \"$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/deprecated/YarpBackupVariable.cmake\"")
    file(REMOVE "$ENV{DESTDIR}/icub-grasping/robotology-superbuild/build/install/share/yarp/cmake/deprecated/YarpBackupVariable.cmake")
  endif()
endif()

