### Installation

Clone the branch `dev`

```
mkdir ~/icub_ws && cd ~/icub_ws
git clone https://github.com/be2rlab/icub-grasping.git -b dev
```

Build icub's soft in docker container

```
cd ~/icub_ws/icub-grasping/docker/simulator/icub_custom/
./build_docker.bash
```
or for nvidia (!!! check if nvidia drivers had been installed for user computer)

```
./build_docker.bash --nvidia
```

### Check installation

Run icub's container

```
cd ~/icub_ws/icub-grasping/docker/simulator/icub_custom/
./run_icub.bash
```

Check if all works happily (!!! do it inside run container)

```
yarpserver &
iCub_SIM

```

### Compile superbuild

```
cd ~/icub_ws/icub-grasping/robotology-superbuild/
mkdir build && cd build
cmake .. && make -j8
```

Next you should to do some steps



1. Change from `grabber` to `grabberDual` in files (https://github.com/robotology/gazebo-yarp-plugins/issues/498)

`icub-grasping/robotology-superbuild/robotology/icub-gazebo/icub/conf/left_camera.ini`
`icub-grasping/robotology-superbuild/robotology/icub-gazebo/icub/conf/right_camera.ini`

2. Turn ON python in CMakeLists.txt



### Add matlab support


Setup path for your linux matlab in `~/icub_ws/icub-grasping/docker/simulator/icub_custom/run_icub.bash`.


Change `/home/$USER/matlab/` to matlab location in your computer

```
-v /home/$USER/matlab/:/matlab \
```


Enter to container and do

```
source /icub-grasping/env.bash
```

