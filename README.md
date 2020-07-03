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
