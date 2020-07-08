#!/usr/bin/env python3
import numpy
import yarp

import mobilenet_ssd_vision

yarp.Network.init()


class VisionConnector:

    def __init__(self, left_input_port_name, left_output_port_name, right_input_port_name, right_output_port_name):
        print("[CLASSIFICATOR] Start init")
        self._classificator = mobilenet_ssd_vision.Vision()
        print("[CLASSIFICATOR] Stop init")

        self._position_est = mobilenet_ssd_vision.Trian()
        self._cartesian_goal_port = yarp.Port()
        self._cartesian_goal_port.open("/left_arm_goal")


        self.image_w = 640
        self.image_h = 480

        "LEFT EYE"
        # Prepare ports
        self._left_input_port = yarp.Port()
        self._left_input_port_name = left_input_port_name
        self._left_input_port.open(self._left_input_port_name)

        self._left_output_port = yarp.Port()
        self._left_output_port_name = left_output_port_name
        self._left_output_port.open(self._left_output_port_name)

        # Prepare image buffers
        # Input
        self._left_input_buf_image = yarp.ImageRgb()
        self._left_input_buf_image.resize(self.image_w, self.image_h)
        self._left_input_buf_array = numpy.zeros(
            (self.image_h, self.image_w, 3), dtype=numpy.uint8)
        self._left_input_buf_image.setExternal(
            self._left_input_buf_array.data, self._left_input_buf_array.shape[1], self._left_input_buf_array.shape[0])

        # Output
        self._left_output_buf_image = yarp.ImageRgb()
        self._left_output_buf_image.resize(self.image_w, self.image_h)
        self._left_output_buf_array = numpy.zeros(
            (self.image_h, self.image_w, 3), dtype=numpy.uint8)
        self._left_output_buf_image.setExternal(
            self._left_output_buf_array.data, self._left_output_buf_array.shape[1], self._left_output_buf_array.shape[0])

        "RIGHT EYE"
        # Prepare ports
        self._right_input_port = yarp.Port()
        self._right_input_port_name = right_input_port_name
        self._right_input_port.open(self._right_input_port_name)

        self._right_output_port = yarp.Port()
        self._right_output_port_name = right_output_port_name
        self._right_output_port.open(self._right_output_port_name)

        # Prepare image buffers
        # Input
        self._right_input_buf_image = yarp.ImageRgb()
        self._right_input_buf_image.resize(self.image_w, self.image_h)
        self._right_input_buf_array = numpy.zeros(
            (self.image_h, self.image_w, 3), dtype=numpy.uint8)
        self._right_input_buf_image.setExternal(
            self._right_input_buf_array.data, self._right_input_buf_array.shape[1], self._right_input_buf_array.shape[0])

        # Output
        self._right_output_buf_image = yarp.ImageRgb()
        self._right_output_buf_image.resize(self.image_w, self.image_h)
        self._right_output_buf_array = numpy.zeros(
            (self.image_h, self.image_w, 3), dtype=numpy.uint8)
        self._right_output_buf_image.setExternal(
            self._right_output_buf_array.data, self._right_output_buf_array.shape[1], self._right_output_buf_array.shape[0])

    def run(self):

        i = 0
        while True:
            # Read an image from the port
            self._left_input_port.read(self._left_input_buf_image)
            self._right_input_port.read(self._right_input_buf_image)

            # TODO: check it!  Make sure the image has not been re-allocated + DO THIS FOR RIGHT EYE
            # assert self._left_input_buf_array.data == self._input_buf_image.getRawImage()

            # # just colorfull test
            # self._left_input_buf_array[:,:,1] = numpy.round(numpy.sin(i))
            # i = i + 1

            # Finding objects
            # TODO returns list of objects and its positions in the images space
            label, info = self._classificator.process_frame(
                self._left_input_buf_array)
            print(label, info)

            # set goal for left arm cartesian controller
            x, y, z = self._position_est.coor(label, self._left_input_buf_array, self._right_input_buf_array)
            print('+++++++++')
            print(x,y,z)
            
            #pose_bottle = self._cartesian_goal_port.Prepare()
            pose_bottle = yarp.Bottle()
            pose_bottle.addDouble(x)
            pose_bottle.addDouble(y)
            pose_bottle.addDouble(z)
            pose_bottle.addDouble(0)
            pose_bottle.addDouble(0)
            pose_bottle.addDouble(1)
            pose_bottle.addDouble(3.14)
            print("Sending goal: {}".format(pose_bottle.toString()))
            self._cartesian_goal_port.write(pose_bottle)

            # Send the result to the output port
            self._left_output_buf_array[:, :] = self._left_input_buf_array
            self._left_output_port.write(self._left_output_buf_image)

            self._right_output_buf_array[:, :] = self._right_input_buf_array
            self._right_output_port.write(self._right_output_buf_image)

            yarp.delay(0.1) # TODO think about it

    def cleanup(self):
        self._left_input_port.close()
        self._left_output_port.close()

        self._right_input_port.close()
        self._right_output_port.close()



if __name__ == "__main__":
    """
        input is /icubSim/cam/{left or right}
        output ??
            - objects in image space
            - /view01
    """

    con = VisionConnector("/lframe:in", "/lframe:out", "/rframe:in", "/rframe:out")

    try:
        assert yarp.Network.connect("/lframe:out", "/lview01")
        assert yarp.Network.connect("/icubSim/cam/left", "/lframe:in")

        assert yarp.Network.connect("/rframe:out", "/rview01")
        assert yarp.Network.connect("/icubSim/cam/right", "/rframe:in")

        con.run()
    finally:
        con.cleanup()
