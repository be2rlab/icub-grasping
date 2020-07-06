### Prerequisites

IF YOU USE NVIDIA YOU NEED INSTALL NVIDIA DRIVER

First step (may be need reboot after)

```
Activities -> Software and Updates -> Other Partners -> Check Canonical Partners
```

Second step

```
Activities -> Software and Updates -> Additional Drivers -> Check TESTED nvidia driver -> reboot
```

Third step -- check if nvidia driver works. Do in terminal 

```
lshw -C display
```

if you see in outpu somethin like it's ok!

```
...
configuration: driver=nvidia latency=0
...
```


### Installation

Clone the branch `dev`

```
mkdir ~/icub_ws && cd ~/icub_ws
git clone --recurse-submodules https://github.com/be2rlab/icub-grasping.git -b dev
```

Install docker (for nvidia graphics use `./install_docker.bash --nvidia`)

```
cd /icub_ws/icub-grasping/docker
./install_docker.bash
```

Build icub's soft inside docker container (for nvidia graphics use `./build_docker.bash --nvidia`)

```
cd ~/icub_ws/icub-grasping/docker/simulator/icub_custom/
./build_docker.bash
```


#### Compile superbuild

Inside docker container (here you should turn ON needed options in `CMakeLists.txt`)

```
cd /icub-grasping/robotology-superbuild/
mkdir build && cd build
cmake .. && make -j8
```

Next you should to do some steps


1. Change from `grabber` to `grabberDual` in files (https://github.com/robotology/gazebo-yarp-plugins/issues/498)

```icub-grasping/robotology-superbuild/robotology/icub-gazebo/icub/conf/left_camera.ini```

```icub-grasping/robotology-superbuild/robotology/icub-gazebo/icub/conf/right_camera.ini```

2. Remove a link for default python2 interpretator, because we need python3. Inside docker container do

```
rm /usr/bin/python
```

then, check folders name (should be some)

```
/icub-grasping/robotology-superbuild/build/install/lib/pythonX.X
```

and inside the file

```
/icub-grasping/robotology-superbuild/build/install/share/robotology-superbuild/setup.sh
```

3. Turn ON python in `/icub-grasping/robotology-superbuild/CMakeLists.txt`



#### Check installation

Run icub's container

```
cd ~/icub_ws/icub-grasping/docker/simulator/icub_custom/
```

(for nvidia graphics use flag `-n` or `--nvidia`)

```
./run_icub.bash
```

Check if all works happily (!!! do it inside run container)

```
yarpserver &
iCub_SIM
```

### Run project

Do 

```
cd ~/icub_ws/icub-grasping
bash add_comport.bash
```

Do in terminal 1-tab

```
irun --nvidia
yarpserver&
source /icub-grasping/env.bash
gazebo /icub-grasping/project/scenes/demo_day.world
```

Do in terminal 2-tab

```
iexec
yarpview --name /view01
```

Do in terminal 3-tab

```
iexec
cd /icub-grasping/project/scripts
python3 yarp_vision_connector.py
```

*To be continued...*


### Add matlab support

Turn ON matlab option in `/icub-grasping/robotology-superbuild/CMakeLists.txt`

Setup path for your linux matlab in `~/icub_ws/icub-grasping/docker/simulator/icub_custom/run_icub.bash`.


Change `/home/$USER/matlab/` to matlab location in your computer

```
-v /home/$USER/matlab/:/matlab \
```

Enter to container and do

```
source /icub-grasping/env.bash
```

