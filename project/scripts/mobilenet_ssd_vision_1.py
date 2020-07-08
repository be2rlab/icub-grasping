#Import the neccesary libraries
import numpy as np
import argparse
import cv2 

# construct the argument parse 
parser = argparse.ArgumentParser(
    description='Script to run MobileNet-SSD object detection network ')
parser.add_argument("--video", help="path to video file. If empty, camera's stream will be used")
parser.add_argument("--prototxt", default="MobileNetSSD_deploy.prototxt",
                                  help='Path to text network file: '
                                       'MobileNetSSD_deploy.prototxt for Caffe model or '
                                       )
parser.add_argument("--weights", default="MobileNetSSD_deploy.caffemodel",
                                 help='Path to weights: '
                                      'MobileNetSSD_deploy.caffemodel for Caffe model or '
                                      )
parser.add_argument("--thr", default=0.2, type=float, help="confidence threshold to filter out weak detections")
args = parser.parse_args()

# Labels of Network.
classNames = { 0: 'background',
    1: 'aeroplane', 2: 'bicycle', 3: 'bird', 4: 'boat',
    5: 'bottle', 6: 'bus', 7: 'car', 8: 'cat', 9: 'chair',
    10: 'cow', 11: 'diningtable', 12: 'dog', 13: 'horse',
    14: 'motorbike', 15: 'person', 16: 'pottedplant',
    17: 'sheep', 18: 'sofa', 19: 'train', 20: 'tvmonitor' }



#Load the Caffe model 
net = cv2.dnn.readNetFromCaffe(args.prototxt, args.weights)


class Vision:
    
    module_name = '[Vision]: '
    
    
    
    def process_frame(self, frame):    
    

        frame_resized = cv2.resize(frame,(300,300)) # resize frame for prediction
        # MobileNet requires fixed dimensions for input image(s)
        # so we have to ensure that it is resized to 300x300 pixels.
        # set a scale factor to image because network the objects has differents size. 
        # We perform a mean subtraction (127.5, 127.5, 127.5) to normalize the input;
        # after executing this command our "blob" now has the shape:
        # (1, 3, 300, 300)
        blob = cv2.dnn.blobFromImage(frame_resized, 0.007843, (300, 300), (127.5, 127.5, 127.5), False)
        #Set to network the input blob 
        net.setInput(blob)
        #Prediction of network
        detections = net.forward()

        #Size of frame resize (300x300)
        cols = frame_resized.shape[1] 
        rows = frame_resized.shape[0]

        #For get the class and location of object detected, 
        # There is a fix index for class, location and confidence
        # value in @detections array .
        for i in range(detections.shape[2]):
            confidence = detections[0, 0, i, 2] #Confidence of prediction 
            if confidence > args.thr: # Filter prediction 
                class_id = int(detections[0, 0, i, 1]) # Class label

                # Object location 
                xLeftBottom = int(detections[0, 0, i, 3] * cols) 
                yLeftBottom = int(detections[0, 0, i, 4] * rows)
                xRightTop   = int(detections[0, 0, i, 5] * cols)
                yRightTop   = int(detections[0, 0, i, 6] * rows)
                
                # Factor for scale to original size of frame
                heightFactor = frame.shape[0]/300.0  
                widthFactor = frame.shape[1]/300.0 
                # Scale object detection to frame
                xLeftBottom = int(widthFactor * xLeftBottom) 
                yLeftBottom = int(heightFactor * yLeftBottom)
                xRightTop   = int(widthFactor * xRightTop)
                yRightTop   = int(heightFactor * yRightTop)
                # Draw location of object  
                cv2.rectangle(frame, (xLeftBottom, yLeftBottom), (xRightTop, yRightTop),
                              (0, 255, 0))

                # Draw label and confidence of prediction in frame resized
                if class_id in classNames:
                    label = classNames[class_id]
                    conf = str(confidence)
                    labelSize, baseLine = cv2.getTextSize(label+': '+ conf, cv2.FONT_HERSHEY_SIMPLEX, 0.5, 1)

                    yLeftBottom = max(yLeftBottom, labelSize[1])
                    cv2.rectangle(frame, (xLeftBottom, yLeftBottom - labelSize[1]),
                                         (xLeftBottom + labelSize[0], yLeftBottom + baseLine),
                                         (255, 255, 255), cv2.FILLED)
                    cv2.putText(frame, label + ': ' + conf, (xLeftBottom, yLeftBottom),
                                cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 0))

                         
                
        return label, conf, (xLeftBottom, yLeftBottom, xRightTop, yRightTop)

        cv2.namedWindow("frame", cv2.WINDOW_NORMAL)
        cv2.imshow("frame", frame)
        

class Trian:
     
    module_name = '[Trian]: ' 
    
    #на вход класс, изображения с камер, положение камер по х,у, 
    #ориентация одной камеры вдоль х(угол эйлера)
    
    def coor(label, imgL, imgR, ori, x_pos_L, y_pos_L, x_pos_R, y_pos_R):      
        classificator = Vision()    
        
        label_1, cL = classificator.proccess_frame(imgL)
        label_1, cR = classificator.proccess_frame(imgR)
        
        if label_1 == label:


	        x_pos = x_pos_R - x_pos_L
        	y_pos = y_pos_R - y_pos_L
            
        
        	# distance between cameras
        	C = 0.049
        	# camera height above ground, hand lengh
        	H, L = 0.92, 0.427
            
        	
        	cXL = (cL[2] - cL[0])/2
        	cYL = (cL[3] - cL[1])/2
    	
        	cXR = (cR[2] - cR[0])/2
        	
        	 
        	#get angles
        	alpha = np.pi/2 + np.pi/12 - (np.pi/6)*cXL/640
        	beta = np.pi/2 + np.pi/12 - np.pi/6 + (np.pi/4)*cXR/640
        	gamma = np.pi - (alpha + beta)
        
        	#find perimeter via theorem of sines
        	A = C * np.sin(alpha)/np.sin(gamma)
        	B = C * np.sin(beta)/np.sin(gamma)
        	P = 1/2*(A + B + C)
        	# get distance to object
        	h_c = 2/C * np.sqrt(P*(P-A)*(P-B)*(P-C))
        	l = 1/2 * np.sqrt(A**2+B**2+2*A*B*np.cos(gamma))
        
        
        	# get angles 
        	al = np.pi/12 - (np.pi/6)*cYL/480
        	be = np.pi/2 - al
        	d = h_c*np.sin(al)/np.sin(be)
        
        	#get coordinates
        	x = x_pos + np.cos(ori)*l
        	y = y_pos + np.sin(ori)*l
        	z = H - d
            
            
            # get new coordinates
        	a = L/np.sqrt(l**2+d**2)
            
        	x1 = a*(x-x_pos)+x_pos
        	y1 = a*(y-y_pos)+y_pos
        	z1 = a*(z-H)+H
        
        	return x1,y1,z1
    

if __name__ == "__main__":
    
    # Initialisation
        classificator = Vision()

   
        # Open video file or capture device. 
        if args.video:
            cap = cv2.VideoCapture(args.video)
        else:
            cap = cv2.VideoCapture(0)
    
    # Capture frame-by-frame
        ret, frame = cap.read()
        
        cap.release()
    
    # Find any objects in the frame
        catid, conf, info = classificator.process_frame(frame)

        print(catid, conf, info[1])
