#!/usr/bin/env python3
import numpy
import yarp

import vision

yarp.Network.init()


class VisionConnector:
    
    def __init__(self, input_port_name, output_port_name):
        print("[CLASSIFICATOR] Start init")
        self._classificator = vision.Vision()
        print("[CLASSIFICATOR] Stop init")

        self.image_w = 640
        self.image_h = 480
        
        # Prepare ports
        self._input_port = yarp.Port()
        self._input_port_name = input_port_name
        self._input_port.open(self._input_port_name)

        self._output_port = yarp.Port()
        self._output_port_name = output_port_name
        self._output_port.open(self._output_port_name)
                
        # Prepare image buffers
        # Input
        self._input_buf_image = yarp.ImageRgb()
        self._input_buf_image.resize(self.image_w, self.image_h)
        self._input_buf_array = numpy.zeros((self.image_h, self.image_w, 3), dtype = numpy.uint8)
        self._input_buf_image.setExternal(self._input_buf_array.data, self._input_buf_array.shape[1], self._input_buf_array.shape[0])

        # Output
        self._output_buf_image = yarp.ImageRgb()
        self._output_buf_image.resize(self.image_w, self.image_h)
        self._output_buf_array = numpy.zeros((self.image_h, self.image_w, 3), dtype = numpy.uint8)
        self._output_buf_image.setExternal(self._output_buf_array.data, self._output_buf_array.shape[1], self._output_buf_array.shape[0])
        
    def run(self):

        i = 0
        while True:
            # Read an image from the port
            self._input_port.read(self._input_buf_image)
            
            # TODO: check it!  Make sure the image has not been re-allocated
            # assert self._input_buf_array.data == self._input_buf_image.getRawImage()

            # # just colorfull test
            # self._input_buf_array[:,:,1] = numpy.round(numpy.sin(i))
            # i = i + 1

            # Finding objects
            # TODO returns list of objects and its positions in the images space
            self._classificator.process_frame(self._input_buf_array)

            # Send the result to the output port
            self._output_buf_array[:,:] = self._input_buf_array
            self._output_port.write(self._output_buf_image)
            
    def cleanup(self):
        self._input_port.close()
        self._output_port.close()


if __name__=="__main__":
    """
        input is /camera:o
        output ??
            - objects in image space
            - /view01
    """

    con = VisionConnector("/frame:in", "/frame:out")
    
    try:
        assert yarp.Network.connect("/frame:out", "/view01")
        assert yarp.Network.connect("/camera:o", "/frame:in")
        
        con.run()
    finally:
        con.cleanup()

