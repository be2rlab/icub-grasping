# Install script for directory: /icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_rosmsg

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_native-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_native" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/YARP_rosmsg_native/YARP_rosmsg_nativeConfigVersion.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_native-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_native" TYPE FILE RENAME "YARP_rosmsg_nativeConfig.cmake" FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/YARP_rosmsg_nativeConfig.cmake.install")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_native-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_native/YARP_rosmsg_nativeTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_native/YARP_rosmsg_nativeTargets.cmake"
         "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_native/YARP_rosmsg_nativeTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_native/YARP_rosmsg_nativeTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_native/YARP_rosmsg_nativeTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_native" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_native/YARP_rosmsg_nativeTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_std_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_std_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/YARP_rosmsg_std_msgs/YARP_rosmsg_std_msgsConfigVersion.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_std_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_std_msgs" TYPE FILE RENAME "YARP_rosmsg_std_msgsConfig.cmake" FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/YARP_rosmsg_std_msgsConfig.cmake.install")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_std_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_std_msgs/YARP_rosmsg_std_msgsTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_std_msgs/YARP_rosmsg_std_msgsTargets.cmake"
         "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_std_msgs/YARP_rosmsg_std_msgsTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_std_msgs/YARP_rosmsg_std_msgsTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_std_msgs/YARP_rosmsg_std_msgsTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_std_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_std_msgs/YARP_rosmsg_std_msgsTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_actionlib_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_actionlib_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/YARP_rosmsg_actionlib_msgs/YARP_rosmsg_actionlib_msgsConfigVersion.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_actionlib_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_actionlib_msgs" TYPE FILE RENAME "YARP_rosmsg_actionlib_msgsConfig.cmake" FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/YARP_rosmsg_actionlib_msgsConfig.cmake.install")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_actionlib_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_actionlib_msgs/YARP_rosmsg_actionlib_msgsTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_actionlib_msgs/YARP_rosmsg_actionlib_msgsTargets.cmake"
         "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_actionlib_msgs/YARP_rosmsg_actionlib_msgsTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_actionlib_msgs/YARP_rosmsg_actionlib_msgsTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_actionlib_msgs/YARP_rosmsg_actionlib_msgsTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_actionlib_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_actionlib_msgs/YARP_rosmsg_actionlib_msgsTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_diagnostic_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_diagnostic_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/YARP_rosmsg_diagnostic_msgs/YARP_rosmsg_diagnostic_msgsConfigVersion.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_diagnostic_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_diagnostic_msgs" TYPE FILE RENAME "YARP_rosmsg_diagnostic_msgsConfig.cmake" FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/YARP_rosmsg_diagnostic_msgsConfig.cmake.install")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_diagnostic_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_diagnostic_msgs/YARP_rosmsg_diagnostic_msgsTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_diagnostic_msgs/YARP_rosmsg_diagnostic_msgsTargets.cmake"
         "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_diagnostic_msgs/YARP_rosmsg_diagnostic_msgsTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_diagnostic_msgs/YARP_rosmsg_diagnostic_msgsTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_diagnostic_msgs/YARP_rosmsg_diagnostic_msgsTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_diagnostic_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_diagnostic_msgs/YARP_rosmsg_diagnostic_msgsTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_geometry_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_geometry_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/YARP_rosmsg_geometry_msgs/YARP_rosmsg_geometry_msgsConfigVersion.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_geometry_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_geometry_msgs" TYPE FILE RENAME "YARP_rosmsg_geometry_msgsConfig.cmake" FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/YARP_rosmsg_geometry_msgsConfig.cmake.install")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_geometry_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_geometry_msgs/YARP_rosmsg_geometry_msgsTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_geometry_msgs/YARP_rosmsg_geometry_msgsTargets.cmake"
         "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_geometry_msgs/YARP_rosmsg_geometry_msgsTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_geometry_msgs/YARP_rosmsg_geometry_msgsTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_geometry_msgs/YARP_rosmsg_geometry_msgsTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_geometry_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_geometry_msgs/YARP_rosmsg_geometry_msgsTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_nav_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_nav_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/YARP_rosmsg_nav_msgs/YARP_rosmsg_nav_msgsConfigVersion.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_nav_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_nav_msgs" TYPE FILE RENAME "YARP_rosmsg_nav_msgsConfig.cmake" FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/YARP_rosmsg_nav_msgsConfig.cmake.install")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_nav_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_nav_msgs/YARP_rosmsg_nav_msgsTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_nav_msgs/YARP_rosmsg_nav_msgsTargets.cmake"
         "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_nav_msgs/YARP_rosmsg_nav_msgsTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_nav_msgs/YARP_rosmsg_nav_msgsTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_nav_msgs/YARP_rosmsg_nav_msgsTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_nav_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_nav_msgs/YARP_rosmsg_nav_msgsTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_sensor_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_sensor_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/YARP_rosmsg_sensor_msgs/YARP_rosmsg_sensor_msgsConfigVersion.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_sensor_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_sensor_msgs" TYPE FILE RENAME "YARP_rosmsg_sensor_msgsConfig.cmake" FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/YARP_rosmsg_sensor_msgsConfig.cmake.install")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_sensor_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_sensor_msgs/YARP_rosmsg_sensor_msgsTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_sensor_msgs/YARP_rosmsg_sensor_msgsTargets.cmake"
         "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_sensor_msgs/YARP_rosmsg_sensor_msgsTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_sensor_msgs/YARP_rosmsg_sensor_msgsTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_sensor_msgs/YARP_rosmsg_sensor_msgsTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_sensor_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_sensor_msgs/YARP_rosmsg_sensor_msgsTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_shape_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_shape_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/YARP_rosmsg_shape_msgs/YARP_rosmsg_shape_msgsConfigVersion.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_shape_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_shape_msgs" TYPE FILE RENAME "YARP_rosmsg_shape_msgsConfig.cmake" FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/YARP_rosmsg_shape_msgsConfig.cmake.install")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_shape_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_shape_msgs/YARP_rosmsg_shape_msgsTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_shape_msgs/YARP_rosmsg_shape_msgsTargets.cmake"
         "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_shape_msgs/YARP_rosmsg_shape_msgsTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_shape_msgs/YARP_rosmsg_shape_msgsTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_shape_msgs/YARP_rosmsg_shape_msgsTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_shape_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_shape_msgs/YARP_rosmsg_shape_msgsTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_stereo_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_stereo_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/YARP_rosmsg_stereo_msgs/YARP_rosmsg_stereo_msgsConfigVersion.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_stereo_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_stereo_msgs" TYPE FILE RENAME "YARP_rosmsg_stereo_msgsConfig.cmake" FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/YARP_rosmsg_stereo_msgsConfig.cmake.install")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_stereo_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_stereo_msgs/YARP_rosmsg_stereo_msgsTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_stereo_msgs/YARP_rosmsg_stereo_msgsTargets.cmake"
         "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_stereo_msgs/YARP_rosmsg_stereo_msgsTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_stereo_msgs/YARP_rosmsg_stereo_msgsTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_stereo_msgs/YARP_rosmsg_stereo_msgsTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_stereo_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_stereo_msgs/YARP_rosmsg_stereo_msgsTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_trajectory_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_trajectory_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/YARP_rosmsg_trajectory_msgs/YARP_rosmsg_trajectory_msgsConfigVersion.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_trajectory_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_trajectory_msgs" TYPE FILE RENAME "YARP_rosmsg_trajectory_msgsConfig.cmake" FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/YARP_rosmsg_trajectory_msgsConfig.cmake.install")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_trajectory_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_trajectory_msgs/YARP_rosmsg_trajectory_msgsTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_trajectory_msgs/YARP_rosmsg_trajectory_msgsTargets.cmake"
         "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_trajectory_msgs/YARP_rosmsg_trajectory_msgsTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_trajectory_msgs/YARP_rosmsg_trajectory_msgsTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_trajectory_msgs/YARP_rosmsg_trajectory_msgsTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_trajectory_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_trajectory_msgs/YARP_rosmsg_trajectory_msgsTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_visualization_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_visualization_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/YARP_rosmsg_visualization_msgs/YARP_rosmsg_visualization_msgsConfigVersion.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_visualization_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_visualization_msgs" TYPE FILE RENAME "YARP_rosmsg_visualization_msgsConfig.cmake" FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/YARP_rosmsg_visualization_msgsConfig.cmake.install")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_visualization_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_visualization_msgs/YARP_rosmsg_visualization_msgsTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_visualization_msgs/YARP_rosmsg_visualization_msgsTargets.cmake"
         "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_visualization_msgs/YARP_rosmsg_visualization_msgsTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_visualization_msgs/YARP_rosmsg_visualization_msgsTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_visualization_msgs/YARP_rosmsg_visualization_msgsTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_visualization_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_visualization_msgs/YARP_rosmsg_visualization_msgsTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_tf-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_tf" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/YARP_rosmsg_tf/YARP_rosmsg_tfConfigVersion.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_tf-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_tf" TYPE FILE RENAME "YARP_rosmsg_tfConfig.cmake" FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/YARP_rosmsg_tfConfig.cmake.install")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_tf-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_tf/YARP_rosmsg_tfTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_tf/YARP_rosmsg_tfTargets.cmake"
         "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_tf/YARP_rosmsg_tfTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_tf/YARP_rosmsg_tfTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_tf/YARP_rosmsg_tfTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_tf" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_tf/YARP_rosmsg_tfTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_tf2_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_tf2_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/YARP_rosmsg_tf2_msgs/YARP_rosmsg_tf2_msgsConfigVersion.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_tf2_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_tf2_msgs" TYPE FILE RENAME "YARP_rosmsg_tf2_msgsConfig.cmake" FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/YARP_rosmsg_tf2_msgsConfig.cmake.install")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_tf2_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_tf2_msgs/YARP_rosmsg_tf2_msgsTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_tf2_msgs/YARP_rosmsg_tf2_msgsTargets.cmake"
         "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_tf2_msgs/YARP_rosmsg_tf2_msgsTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_tf2_msgs/YARP_rosmsg_tf2_msgsTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_tf2_msgs/YARP_rosmsg_tf2_msgsTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg_tf2_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg_tf2_msgs/YARP_rosmsg_tf2_msgsTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/YARP_rosmsg/YARP_rosmsgConfigVersion.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg" TYPE FILE RENAME "YARP_rosmsgConfig.cmake" FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/YARP_rosmsgConfig.cmake.install")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg/YARP_rosmsgTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg/YARP_rosmsgTargets.cmake"
         "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg/YARP_rosmsgTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg/YARP_rosmsgTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg/YARP_rosmsgTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/YARP_rosmsg" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/CMakeFiles/Export/lib/cmake/YARP_rosmsg/YARP_rosmsgTargets.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/cmake_install.cmake")

endif()

