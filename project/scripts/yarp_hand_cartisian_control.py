#!/usr/bin/env python3
import numpy
import yarp

import mobilenet_ssd_vision

yarp.Network.init()


if __name__ == "__main__":
    """
        input is /camera:o
        output ??
            - objects in image space
            - /view01
    """

    con = VisionConnector("/frame:in", "/frame:out")

    try:
        assert yarp.Network.connect("/frame:out", "/view01")
        #assert yarp.Network.connect("/camera:o", "/frame:in")
        assert yarp.Network.connect("/icubSim/cam/left", "/frame:in")

        con.run()
    finally:
        con.cleanup()
