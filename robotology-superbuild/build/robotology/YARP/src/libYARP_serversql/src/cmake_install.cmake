# Install script for directory: /icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_serversql/src

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_serversqlx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_serversql.so.3.3.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_serversql.so.3"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "$ORIGIN/:$ORIGIN/../lib:$ORIGIN/../")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib/libYARP_serversql.so.3.3.2"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib/libYARP_serversql.so.3"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_serversql.so.3.3.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_serversql.so.3"
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_serversql-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_serversql.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_serversql.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_serversql.so"
         RPATH "$ORIGIN/:$ORIGIN/../lib:$ORIGIN/../")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib/libYARP_serversql.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_serversql.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_serversql.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_serversql.so"
         OLD_RPATH "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib:"
         NEW_RPATH "$ORIGIN/:$ORIGIN/../lib:$ORIGIN/../")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_serversql.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_serversql-priv-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/serversql/impl" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_serversql/src/yarp/serversql/impl/TripleSourceCreator.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_serversql/src/yarp/serversql/impl/Triple.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_serversql/src/yarp/serversql/impl/TripleSource.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_serversql/src/yarp/serversql/impl/SqliteTripleSource.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_serversql/src/yarp/serversql/impl/NameServiceOnTriples.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_serversql/src/yarp/serversql/impl/NameServerContainer.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_serversql/src/yarp/serversql/impl/Allocator.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_serversql/src/yarp/serversql/impl/AllocatorOnTriples.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_serversql/src/yarp/serversql/impl/Subscriber.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_serversql/src/yarp/serversql/impl/SubscriberOnSql.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_serversql/src/yarp/serversql/impl/ComposedNameService.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_serversql/src/yarp/serversql/impl/ConnectThread.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_serversql/src/yarp/serversql/impl/ParseName.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_serversql/src/yarp/serversql/impl/StyleNameService.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_serversql-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/serversql" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_serversql/src/yarp/serversql/api.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_serversql/src/yarp/serversql/yarpserversql.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_serversql/src/yarp/serversql/Server.h"
    )
endif()

