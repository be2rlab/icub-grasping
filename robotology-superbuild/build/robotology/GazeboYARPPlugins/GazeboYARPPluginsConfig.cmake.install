set(GazeboYARPPlugins_VERSION 3.4.0)


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was GazeboYARPPluginsConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

set(GazeboYARPPlugins_INCLUDEDIR "")

if(NOT TARGET GazeboYARPPlugins::gazebo_yarp_rpc_clock)
  include("${CMAKE_CURRENT_LIST_DIR}/GazeboYARPPluginsTargets.cmake")
endif()

# Compatibility
set(GazeboYARPPlugins_LIBRARIES GazeboYARPPlugins::gazebo_yarp_rpc_clock;GazeboYARPPlugins::gazebo_yarp_rpc_worldinterface;GazeboYARPPlugins::gazebo_yarp_rpc_linkattacher)
set(GazeboYARPPlugins_INCLUDE_DIRS ${GazeboYARPPlugins_INCLUDEDIR})
