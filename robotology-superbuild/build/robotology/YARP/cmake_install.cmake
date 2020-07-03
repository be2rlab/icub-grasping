# Install script for directory: /icub-grasping/robotology-superbuild/robotology/YARP

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xconfigurationx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/yarp/plugins" TYPE FILE RENAME "yarp.ini" FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/CMakeFiles/yarp_for_install.ini")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xconfigurationx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP" TYPE FILE RENAME "YARPConfig.cmake" FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/YARPConfigForInstall.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xconfigurationx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/YARPConfigVersion.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/extern/ycm/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/cmake/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/extern/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/src/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/bindings/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/tests/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/data/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/doc/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/icub-grasping/robotology-superbuild/build/robotology/YARP/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
