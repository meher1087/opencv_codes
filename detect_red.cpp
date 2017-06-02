#include "opencv2/opencv.hpp"
#include "highgui.h"
#include <stdio.h>
using namespace cv;
#define video
//#define still_pic



int main(int, char**)
{
    
    #ifdef video
    VideoCapture cap(0); // open the default camera
    if(!cap.isOpened())  // check if we succeeded
        return -1;

    Mat edges;
    namedWindow("edges",1);
    for(;;)
    {
        Mat frame;
        cap >> frame; // get a new frame from camera
        cvtColor(frame, edges, COLOR_BGR2GRAY);
        GaussianBlur(edges, edges, Size(7,7), 1.5, 1.5);
        Canny(edges, edges, 0, 30, 3);
        imshow("edges", edges);
        if(waitKey(30) == 27) break;
    }
    
    #endif

   
    
    #ifdef still_pic
   char pathr[255];
   char pathl[255];
 
   // For Linux, path to save the captured image
   strcpy(pathr,"/home/mady/Documents/opencv_codes/detect_red/right.jpg");
   strcpy(pathl,"/home/mady/Documents/opencv_codes/detect_red/left.jpg");
    
        CvCapture* capture1 = cvCaptureFromCAM(1);
        CvCapture* capture2 = cvCaptureFromCAM(2);
    
    if ( !capture1 ) {
        fprintf( stderr, "ERROR: capture is NULL from right cam \n" );
        getchar();
        return -1;
                     }
                     
                     
     if ( !capture2) {
        fprintf( stderr, "ERROR: capture is NULL from left cam \n" );
        getchar();
        return -1;
                     }
                     
     IplImage *frame_r;
     IplImage *frame_l; 
    // Create a window in which the captured images will be presented
    cvNamedWindow( "mywindow_R", CV_WINDOW_AUTOSIZE );
       frame_r = cvQueryFrame( capture1);
       cvShowImage( "mywindow_R", frame_r);
         cvSaveImage(pathr, frame_r);
       waitKey(0);
       
    
    cvNamedWindow( "mywindow_L", CV_WINDOW_AUTOSIZE );
      frame_l = cvQueryFrame( capture2 );
       cvShowImage( "mywindow_L", frame_l );
       cvSaveImage(pathl, frame_l);
       waitKey(0);
      
      
            
         
             
    // Show the image captured from the camera in the window and repeat
 
    
    
    // Release the capture device housekeeping
    cvReleaseCapture( &capture1 );
    cvReleaseCapture( &capture2 );
    cvDestroyWindow( "mywindow_R" );
    cvDestroyWindow( "mywindow_L" );
    
    #endif
    // the camera will be deinitialized automatically in VideoCapture destructor
    return 0;
}

