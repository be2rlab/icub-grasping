set(YARP_os_VERSION 3.3.2+43-20200411.3+gita33cf54b1)


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was YARP_osConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

####################################################################################

#### Expanded from @PACKAGE_DEPENDENCIES@ by install_basic_package_files() ####

include(CMakeFindDependencyMacro)
find_dependency(YARP_conf HINTS "${CMAKE_CURRENT_LIST_DIR}/.." NO_DEFAULT_PATH)

###############################################################################


include("${CMAKE_CURRENT_LIST_DIR}/YARP_osTargets.cmake")



#### Expanded from INCLUDE_FILE/INCLUDE_CONTENT by install_basic_package_files() ####


if(NOT YARP_NO_DEPRECATED AND NOT TARGET YARP::YARP_OS)
  add_library(YARP::YARP_OS INTERFACE IMPORTED)
  set_target_properties(YARP::YARP_OS PROPERTIES
    INTERFACE_LINK_LIBRARIES "YARP::YARP_os"
    INTERFACE_COMPILE_DEFINITIONS USING_DEPRECATED_UPPERCASE_YARP_OS_TARGET
  )
endif()


#####################################################################################

