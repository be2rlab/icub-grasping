# Install script for directory: /icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/contexts/iCubGui/covers" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/covers/foot_left.obj"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/covers/foot_right.obj"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/covers/forearm_left.obj"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/covers/forearm_right.obj"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/covers/head.obj"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/covers/hip.obj"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/covers/lowerleg_left.obj"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/covers/lowerleg_right.obj"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/covers/torso.obj"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/covers/upperarm_left.obj"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/covers/upperarm_right.obj"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/covers/upperleg_left.obj"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/covers/upperleg_right.obj"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/contexts/iCubGui/icons" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/add.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/box.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/cone.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/delete.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/editcopy.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/editcut.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/editpaste.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/fileadd.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/filenew.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/fileopen.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/filesave.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/filesaveas.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/key.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/loop.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/play.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/redo.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/resetcamera.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/sphere.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/stop.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/torus.png"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/icons/undo.png"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/contexts/iCubGui" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/iCubGui.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/skeleton.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/skeletonV2.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/skeletonV3.ini"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/templates/applications" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/scripts/iCubGui_skinContacts.xml.template"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/iCubGui/scripts/iCubGui_wbdContacts.xml.template"
    )
endif()

