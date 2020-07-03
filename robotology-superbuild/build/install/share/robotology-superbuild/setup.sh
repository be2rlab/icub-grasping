# Automatically generated setup file for robotology-superbuild

export ROBOTOLOGY_SUPERBUILD_SOURCE_DIR=/icub-grasping/robotology-superbuild
export ROBOTOLOGY_SUPERBUILD_INSTALL_PREFIX=/icub-grasping/robotology-superbuild/build/install
# Extend PATH (see https://en.wikipedia.org/wiki/PATH_(variable) )
export PATH=$PATH:$ROBOTOLOGY_SUPERBUILD_INSTALL_PREFIX/bin
# YARP related env variables (see http://www.yarp.it/yarp_data_dirs.html )
# See also https://unix.stackexchange.com/questions/162891/append-to-path-like-variable-without-creating-leading-colon-if-unset
export YARP_DATA_DIRS=${YARP_DATA_DIRS:+${YARP_DATA_DIRS}:}$ROBOTOLOGY_SUPERBUILD_INSTALL_PREFIX/share/yarp:$ROBOTOLOGY_SUPERBUILD_INSTALL_PREFIX/share/iCub:$ROBOTOLOGY_SUPERBUILD_INSTALL_PREFIX/share/ICUBcontrib
# Extend CMAKE_PREFIX_PATH (see https://cmake.org/cmake/help/v3.8/variable/CMAKE_PREFIX_PATH.html )
export CMAKE_PREFIX_PATH=${CMAKE_PREFIX_PATH:+${CMAKE_PREFIX_PATH}:}${ROBOTOLOGY_SUPERBUILD_INSTALL_PREFIX}
# Extend path for shared libraries  (see http://tldp.org/HOWTO/Program-Library-HOWTO/shared-libraries.html)
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH:+${LD_LIBRARY_PATH}:}${ROBOTOLOGY_SUPERBUILD_INSTALL_PREFIX}/lib
# Setup the path of blockfactory plugins
export BLOCKFACTORY_PLUGIN_PATH=${BLOCKFACTORY_PLUGIN_PATH:+${BLOCKFACTORY_PLUGIN_PATH}:}$ROBOTOLOGY_SUPERBUILD_INSTALL_PREFIX/lib/blockfactory


# ROBOTOLOGY_USES_GAZEBO-specific lines
# Gazebo related env variables (see http://gazebosim.org/tutorials?tut=components#EnvironmentVariables )
[ -f /usr/share/gazebo/setup.sh ] && source /usr/share/gazebo/setup.sh
export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH:+${GAZEBO_PLUGIN_PATH}:}${ROBOTOLOGY_SUPERBUILD_INSTALL_PREFIX}/lib
export GAZEBO_MODEL_PATH=${GAZEBO_MODEL_PATH:+${GAZEBO_MODEL_PATH}:}${ROBOTOLOGY_SUPERBUILD_INSTALL_PREFIX}/share/gazebo/models:${ROBOTOLOGY_SUPERBUILD_INSTALL_PREFIX}/share/iCub/robots:${ROBOTOLOGY_SUPERBUILD_INSTALL_PREFIX}/share
export GAZEBO_RESOURCE_PATH=${GAZEBO_RESOURCE_PATH:+${GAZEBO_RESOURCE_PATH}:}${ROBOTOLOGY_SUPERBUILD_INSTALL_PREFIX}/share/gazebo/worlds









