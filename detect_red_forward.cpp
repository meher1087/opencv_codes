#include<stdio.h>
#include<opencv2/opencv.hpp>

using namespace cv;
using namespace std;
int main(int argc, char** argv)
{

  if(argc !=2)
   {

     printf("usage: DisplayImage.out <Image_Path>\n");
return -1;
}
Mat image, HSV_image, LOWER_RED_HUE_RANGE, UPPER_RED_HUE_RANGE, RED_HUE_IMAGE;

int height, width, channels ;
image = imread( argv[1], 1 );
if ( !image.data )
{
printf("No image data \n");
return -1;
}

cvtColor(image,HSV_image,COLOR_BGR2HSV);

inRange(HSV_image, Scalar(0,100,100),Scalar(10,255,255),LOWER_RED_HUE_RANGE);
inRange(HSV_image, Scalar(160,100,100),Scalar(179,255,255),UPPER_RED_HUE_RANGE);

//combine above two images

addWeighted(LOWER_RED_HUE_RANGE,1.0,UPPER_RED_HUE_RANGE,1.0,0,RED_HUE_IMAGE);

Mat B_e;

B_e.create(RED_HUE_IMAGE.rows + 1, RED_HUE_IMAGE.cols + 1, RED_HUE_IMAGE.type());
B_e.setTo(cv::Scalar::all(0));


RED_HUE_IMAGE.copyTo(B_e(Rect(0, 0, RED_HUE_IMAGE.cols, RED_HUE_IMAGE.rows)));


namedWindow("Display Image", WINDOW_AUTOSIZE );
imshow("Display Image", RED_HUE_IMAGE);
namedWindow("Original",WINDOW_AUTOSIZE);
imshow("Original", B_e);

waitKey(0);

// CREATE PADDED IMAGE


/*
Mat A = (Mat_<float>(6, 6) << 0, 0, 0, 0, 0, 0,
							  0, 1, 1, 0, 0, 0,
							  0, 1, 1, 0, 0, 0,
							  0, 0, 0, 0, 0, 0,
							  1, 1, 0, 0, 0, 0,
							  1, 1, 0, 0, 0, 0);
Mat B_e;

B_e.create(A.rows + 1, A.cols + 1, A.type());
B_e.setTo(cv::Scalar::all(0));
A.copyTo(B_e(Rect(0, 0, A.cols, A.rows)));
//cout << B_e << endl;
*/
/*
B_e.create(RED_HUE_IMAGE.rows + 1, RED_HUE_IMAGE.cols + 1, RED_HUE_IMAGE.type());
B_e.setTo(cv::Scalar::all(0));
RED_HUE_IMAGE.copyTo(B_e(Rect(0, 0, RED_HUE_IMAGE.cols, RED_HUE_IMAGE.rows)));
*/

 //cout << B_e << endl;

//height, width, channels = image.size();
int W = RED_HUE_IMAGE.cols;
int H = RED_HUE_IMAGE.rows;

// object boundaries

int h = 2, w =2;  //window size 2x2 matrix

int p =0,q=0;
double S =1;
while(p <= H-h){

	while(q <= W-w){


		//Mat D1 = RED_HUE_IMAGE(Range(p,p+w),Range(q,q+h));
		Mat D1 (B_e, Rect(q, p, w, h) ); // convention for row and column is reverse for Rect
	//	cout << D1 << endl; //>D.convertTo(D, CV_32F);

	    S = sum(D1).val[0];

		if(S!= 0){
			//cout << p << " " << q << endl;
		  double Eh = 1, Ew = 1;
		   int p1 = p, q1 = q,w1=1,h1=1;

			while(Eh!=0 || Ew != 0){

				if(Eh !=0){
					h1=h1+1;
					p1= p1+1;
				}

				if(Ew !=0){
					w1= w1+1;
					q1= q1+1;
				}

				Mat H1 (B_e, Rect(q, p1, w1, 1) ); // rect(2,1,1,1) means 3rd col, 2nd row point to two values down.
				//cout << H1 << endl;
			    Eh = sum(H1).val[0];

			    Mat W1 (B_e, Rect(q1, p, 1, h1) ); // Image index is transpose of normal convention
			 //   cout << W1 << endl;
			    Ew = sum(W1).val[0];

			}

			//cout << p << " " << q << " " << w1-1 << " " << h1-1 << endl;


			B_e(Range(p,p+h1),Range(q,q+w1))=0;
			cout << sum(B_e).val[0] << endl;
		   // cout << B_e << endl;

			//w = w1;
			//h = h1;
			/*
			namedWindow("Display Image", WINDOW_AUTOSIZE );

			imshow("identified",B_e);
		    rectangle(B_e,Point(p,q),Point(p+h1,q+w1),Scalar(0,255,255),-1,8);
			 */


		}

		q = q+w;
	}

	p = p+h;
	//cout << p << " " << q << endl;
	q = 0;

}


return 0;
}



//cout << "value1 : " << value1 << endl;






/* -- PADDING MATRIX
Mat A = (Mat_<float>(2, 2) << 1, 2, 3, 4);

Mat padded;
//int padding = 1;
padded.create(A.rows + 1, A.cols + 1, A.type());
padded.setTo(cv::Scalar::all(0));

A.copyTo(padded(Rect(0, 0, A.cols, A.rows)));

cout << padded << endl;
*/

// Mat A = (Mat_<float>(2, 5) << 1, 2, 3, 4, 5, 7, 8, 9, 10, 11); declaration of matrix

//int value1 = (int)RED_HUE_IMAGE.at<uchar>(h,w); access pixel values.

//doube S = sum(A);  gives sum of values in matrix A. to get sum of values of A.
//int value2 = HSV_image(Range(1,2),Range(1,2)); get values from window


//cout << "value2 : " << value2 << endl;



