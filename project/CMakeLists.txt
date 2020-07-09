cmake_minimum_required(VERSION 3.5)
project(demo_day_july)

find_package(YARP 3.3.0 REQUIRED)
find_package(ICUBcontrib REQUIRED)

# extend the current search path used by cmake to load helpers
list(APPEND CMAKE_MODULE_PATH ${ICUBCONTRIB_MODULE_PATH})

include(ICUBcontribHelpers)
include(ICUBcontribOptions)
include_directories(
    include
    /usr/include/yarp
)

icubcontrib_set_default_prefix()

add_executable(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/src/main.cpp 
                                ${CMAKE_SOURCE_DIR}/src/LeftArmThread.cpp
                                ${CMAKE_SOURCE_DIR}/src/RightArmThread.cpp)
target_link_libraries(${PROJECT_NAME} ${YARP_LIBRARIES})
