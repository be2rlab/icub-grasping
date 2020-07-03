# Install script for directory: /icub-grasping/robotology-superbuild/robotology/YARP/extern/xmlrpcpp

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_priv_xmlrpcppx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib/libYARP_priv_xmlrpcpp.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_priv_xmlrpcpp-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_priv_xmlrpcpp" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/YARP_priv_xmlrpcpp/YARP_priv_xmlrpcppConfigVersion.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_priv_xmlrpcpp-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_priv_xmlrpcpp" TYPE FILE RENAME "YARP_priv_xmlrpcppConfig.cmake" FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/extern/xmlrpcpp/CMakeFiles/YARP_priv_xmlrpcppConfig.cmake.install")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_priv_xmlrpcpp-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_priv_xmlrpcpp/YARP_priv_xmlrpcppTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_priv_xmlrpcpp/YARP_priv_xmlrpcppTargets.cmake"
         "/icub-grasping/robotology-superbuild/build/robotology/YARP/extern/xmlrpcpp/CMakeFiles/Export/lib/cmake/YARP_priv_xmlrpcpp/YARP_priv_xmlrpcppTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_priv_xmlrpcpp/YARP_priv_xmlrpcppTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_priv_xmlrpcpp/YARP_priv_xmlrpcppTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_priv_xmlrpcpp" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/extern/xmlrpcpp/CMakeFiles/Export/lib/cmake/YARP_priv_xmlrpcpp/YARP_priv_xmlrpcppTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_priv_xmlrpcpp" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/extern/xmlrpcpp/CMakeFiles/Export/lib/cmake/YARP_priv_xmlrpcpp/YARP_priv_xmlrpcppTargets-release.cmake")
  endif()
endif()

