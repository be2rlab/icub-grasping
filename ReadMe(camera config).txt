Организовать сохранение картинок можно добавлением следующих строк либо в файл sdf для icub и/или icub(fixed):
            <save enabled="true">
              <path>/tmp/left_camera_save_tutorial</path>
            </save>

Это перед построением сцены. Если сцена уже построена, то редактировать нужно соответсвующий world.
Добавлять строки нужно в структуру <sensor> для <right_eye> и <left_eye>. Ниже полная структура для link name='right_eye_link':

<link name='right_eye_link'>
      <pose> -62.81e-03 34e-03 340.8e-03 -3.14159 0 0</pose>
      <inertial>
        <pose>0 0 0 0 0 0</pose>
        <mass>0.01</mass>
        <inertia>
          <ixx>0.001</ixx>
          <ixy>0</ixy>
          <ixz>0</ixz>
          <iyy>0.001</iyy>
          <iyz>0</iyz>
          <izz>0.001</izz>
        </inertia>
      </inertial>
      <visual name='right_eye_visual'>
        <pose>0.055 0.033 -0.14 0 0 0</pose>
        <geometry>
 <!-- <cylinder><radius>0.01</radius><length>0.05</length></cylinder>-->
            <mesh>
            <scale>1 1 1</scale>
            <uri>model://icub/meshes/visual/icub_eye.dae</uri>
          </mesh>
        </geometry>
      </visual>
      <sensor name="right_camera" type="camera">
        <pose>0 0 0 0 -3.14159 0</pose>
        <camera>
            <save enabled="true">
              <path>/tmp/right_camera_save_tutorial</path>
            </save>
          <horizontal_fov>1.5708</horizontal_fov>
          <image>
            <width>640</width>
            <height>480</height>
          </image>
          <clip>
            <near>0.1</near>
            <far>100</far>
          </clip>
        </camera>
        <always_on>1</always_on>
        <update_rate>30</update_rate>
        <visualize>true</visualize>
        <plugin filename="libgazebo_yarp_camera.so" name="right_camera_plugin">
          <yarpConfigurationFile>model://icub/conf/right_camera.ini</yarpConfigurationFile>
        </plugin>
      </sensor>
    </link>


После этого в процессе симуляции изображения из камер должны сохраняться в /tmp/right_camera_save_tutorial в виде картинок.

Чтобы сделать видео нужно после окончания симуляции воспользоваться командой:
ffmpeg -r 30 -pattern_type glob -i '/tmp/camera_save_tutorial/default_camera_link_my_camera*.jpg' -c:v libx264 my_camera.mp4
или
avconv -framerate 30 -i /tmp/camera_save_tutorial/default_camera_link_my_camera\(1\)-%04d.jpg -c:v libx264 my_camera.mp4

число 30 - количество кадров в секунду, параметр <update_rate> в описании модели/мира

Первоисточник этого метода:
http://gazebosim.org/tutorials?tut=camera_save&cat=sensors

Примечание:
1) В sdf модели icub настройка камер как сенсоров не прописана, она прописана только в модели icub_with_hands
2) Я пробовал этот метод, но не разобрался пока где он создаёт директорию с файлами. Утром ещё буду смотреть



Есть ещё один вариант с камерой в real-time. Необходима установка дополнительного ПО. 
http://playerstage.sourceforge.net/

Настройка этой истории вот здесь:
http://gazebosim.org/tutorials?tut=player_camera&cat=connect_player
