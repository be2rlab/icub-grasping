# Install script for directory: /icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_osx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_os.so.3.3.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_os.so.3"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "$ORIGIN/:$ORIGIN/../lib:$ORIGIN/../")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib/libYARP_os.so.3.3.2"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib/libYARP_os.so.3"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_os.so.3.3.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_os.so.3"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH ":::::::::::::::::::::::::::::::::::"
           NEW_RPATH "$ORIGIN/:$ORIGIN/../lib:$ORIGIN/../")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_os-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_os.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_os.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_os.so"
         RPATH "$ORIGIN/:$ORIGIN/../lib:$ORIGIN/../")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib/libYARP_os.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_os.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_os.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_os.so"
         OLD_RPATH ":::::::::::::::::::::::::::::::::::"
         NEW_RPATH "$ORIGIN/:$ORIGIN/../lib:$ORIGIN/../")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_os.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_os-priv-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/os/impl" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/AuthHMAC.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/BottleImpl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/BufferedConnectionWriter.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/ConnectionRecorder.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/DgramTwoWayStream.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/Dispatcher.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/FakeFace.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/FakeTwoWayStream.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/FallbackNameClient.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/FallbackNameServer.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/HttpCarrier.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/LocalCarrier.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/Logger.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/LogImpl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/LogForwarder.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/McastCarrier.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/MemoryOutputStream.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/NameClient.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/NameConfig.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/NameserCarrier.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/NameServer.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PlatformDirent.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PlatformDlfcn.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PlatformIfaddrs.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PlatformLimits.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PlatformNetdb.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PlatformSignal.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PlatformStdio.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PlatformStdlib.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PlatformSysStat.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PlatformSysWait.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PlatformTime.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PlatformUnistd.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PortCommand.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PortCore.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PortCoreAdapter.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PortCoreInputUnit.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PortCoreOutputUnit.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PortCorePacket.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PortCorePackets.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/PortCoreUnit.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/Protocol.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/RFModuleFactory.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/SocketTwoWayStream.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/SplitString.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/Storable.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/StreamConnectionReader.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/TcpAcceptor.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/TcpCarrier.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/TcpConnector.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/TcpFace.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/TcpStream.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/Terminal.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/TextCarrier.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/ThreadImpl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/UdpCarrier.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_os-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/os" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/AbstractCarrier.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/AbstractContactable.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/all.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/api.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/BinPortable.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/BinPortable-inl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Bottle.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/BufferedPort.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/BufferedPort-inl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Bytes.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Carrier.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Carriers.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Clock.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Connection.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/ConnectionReader.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/ConnectionState.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/ConnectionWriter.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/ConstString.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Contactables.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Contactable.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Contact.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/ContactStyle.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/DummyConnector.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Election.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Event.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Face.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/IConfig.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/InputProtocol.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/InputStream.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/LocalReader.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Log.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/LogStream.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/ManagedBytes.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/MessageStack.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/ModifyingCarrier.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/MonitorObject.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/MultiNameSpace.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Name.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/NameSpace.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/NameStore.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/NestedContact.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/NetFloat32.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/NetFloat64.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/NetInt8.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/NetInt16.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/NetInt32.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/NetInt64.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/NetType.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/NetUint8.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/NetUint16.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/NetUint32.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/NetUint64.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Network.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/NetworkClock.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Nodes.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Node.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/NullConnection.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/NullConnectionReader.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/NullConnectionWriter.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Os.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/OutputProtocol.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/OutputStream.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/PeriodicThread.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Ping.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Portable.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/PortablePair.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Port.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/PortInfo.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/PortReaderBuffer.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/PortReaderBuffer-inl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/PortReaderBufferBase.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/PortReaderBufferBaseCreator.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/PortReaderCreator.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/PortReader.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/PortReport.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/PortWriterBuffer.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/PortWriterBufferBase.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/PortWriter.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Property.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Publisher.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Random.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/ResourceFinder.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/ResourceFinderOptions.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/RFModule.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/RFPlugin.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/RosNameSpace.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Route.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/RpcClient.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/RpcServer.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Searchable.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Semaphore.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/SharedLibraryClassApi.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/SharedLibraryClassFactory.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/SharedLibraryClass.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/SharedLibraryFactory.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/SharedLibrary.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/ShiftStream.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/SizedWriter.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Stamp.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/StringInputStream.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/StringOutputStream.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Subscriber.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/SystemClock.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Terminator.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Things.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Thread.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Time.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Timer.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/TwoWayStream.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Type.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/TypedReader.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/TypedReaderCallback.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/TypedReaderCallback-inl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/TypedReaderThread.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/TypedReaderThread-inl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/UnbufferedContactable.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Value.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Vocab.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Wire.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/WireLink.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/YarpNameSpace.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/YarpPlugin.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/YarpPluginSelector.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/YarpPluginSettings.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/SystemInfo.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/SystemInfoSerializer.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/QosStyle.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/ConstString.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/LockGuard.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Mutex.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/RateThread.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/RecursiveMutex.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/Runnable.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_os-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/os/idl" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/idl/BareStyle.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/idl/BottleStyle.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/idl/Unwrapped.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/idl/WirePortable.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/idl/WireReader.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/idl/WireState.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/idl/WireTypes.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/idl/WireVocab.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/idl/WireWriter.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_os-priv-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/os/impl/posix" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/posix/TcpAcceptor.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/posix/TcpConnector.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/posix/TcpStream.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_os-priv-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/os/impl/macos" TYPE FILE FILES "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_os/src/yarp/os/impl/macos/MacOSAPI.h")
endif()

