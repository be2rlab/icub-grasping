# Install script for directory: /icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_sigx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_sig.so.3.3.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_sig.so.3"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "$ORIGIN/:$ORIGIN/../lib:$ORIGIN/../")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib/libYARP_sig.so.3.3.2"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib/libYARP_sig.so.3"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_sig.so.3.3.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_sig.so.3"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib:"
           NEW_RPATH "$ORIGIN/:$ORIGIN/../lib:$ORIGIN/../")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_sig-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_sig.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_sig.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_sig.so"
         RPATH "$ORIGIN/:$ORIGIN/../lib:$ORIGIN/../")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib/libYARP_sig.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_sig.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_sig.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_sig.so"
         OLD_RPATH "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib:"
         NEW_RPATH "$ORIGIN/:$ORIGIN/../lib:$ORIGIN/../")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_sig.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_sig-priv-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/sig/impl" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/impl/DeBayer.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/impl/IplImage.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_sig-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/sig" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/all.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/api.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/Image.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/ImageDraw.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/ImageFile.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/ImageNetworkHeader.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/ImageUtils.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/IntrinsicParams.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/Matrix.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/PointCloud.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/PointCloudBase.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/PointCloudNetworkHeader.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/PointCloudTypes.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/PointCloudUtils.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/PointCloudUtils-inl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/SoundFile.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/Sound.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/Vector.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_sig/src/yarp/sig/IplImage.h"
    )
endif()

