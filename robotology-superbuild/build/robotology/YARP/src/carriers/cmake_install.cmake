# Install script for directory: /icub-grasping/robotology-superbuild/robotology/YARP/src/carriers

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xyarpcarx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyarpcar.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyarpcar.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyarpcar.so"
         RPATH "$ORIGIN/:$ORIGIN/../lib:$ORIGIN/../")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib/libyarpcar.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyarpcar.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyarpcar.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyarpcar.so"
         OLD_RPATH ":::::::::::::::::::::::::::::::::::"
         NEW_RPATH "$ORIGIN/:$ORIGIN/../lib:$ORIGIN/../")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyarpcar.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xyarpcarx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_yarpcar-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_yarpcar" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/YARP_yarpcar/YARP_yarpcarConfigVersion.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_yarpcar-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_yarpcar" TYPE FILE RENAME "YARP_yarpcarConfig.cmake" FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/carriers/CMakeFiles/YARP_yarpcarConfig.cmake.install")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_yarpcar-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_yarpcar/YARP_yarpcarTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_yarpcar/YARP_yarpcarTargets.cmake"
         "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/carriers/CMakeFiles/Export/lib/cmake/YARP_yarpcar/YARP_yarpcarTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_yarpcar/YARP_yarpcarTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_yarpcar/YARP_yarpcarTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_yarpcar" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/carriers/CMakeFiles/Export/lib/cmake/YARP_yarpcar/YARP_yarpcarTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_yarpcar" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/carriers/CMakeFiles/Export/lib/cmake/YARP_yarpcar/YARP_yarpcarTargets-release.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/src/carriers/shmem_carrier/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/src/carriers/human_carrier/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/src/carriers/mpi_carrier/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/src/carriers/xmlrpc_carrier/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/src/carriers/tcpros_carrier/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/src/carriers/mjpeg_carrier/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/src/carriers/bayer_carrier/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/src/carriers/priority_carrier/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/src/carriers/portmonitor_carrier/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/src/carriers/depth_image_portmonitor/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/src/carriers/zfp_portmonitor/cmake_install.cmake")
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/src/carriers/h264_carrier/cmake_install.cmake")

endif()

