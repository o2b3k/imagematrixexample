#include <iostream>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main(){
    //make a 3 rows 4 cols matrix
    float data[]  ={10,50,150,255,10,50,150,255,10,50,150,255};
    float data2[] ={10,50,150,255,10,50,150,255,10,50,150,255};
    float data3[] ={10,50,150,255,10,50,150,255,10,50,150,255};
    float data4[] ={10,50,150,255,10,50,150,255,10,50,150,255};
    /*
     * second create the Matrix
     * Size(x,y) x= Number of cols(width), y = number of rows(height)
     */
    Mat image1(Size(4,3),CV_32FC1,data);
    Mat image2(Size(4,3),CV_32FC1,data2);
    Mat image3(Size(4,3),CV_32FC1,data3);
    Mat image4(Size(4,3),CV_32FC1,data4);
    cout<<"image1 matrix "<<image1<<endl;
    cout<<"image2 matrix "<<image2<<endl;
    cout<<"image3 matrix "<<image3<<endl;
    /*
     * to show it convert it first to Uchar
     */
    image1.convertTo(image1,CV_8UC1);
    image2.convertTo(image2,CV_8UC1);
    image3.convertTo(image3,CV_8UC1);
    image4=(image1+image2+image3)/3;
    image4.convertTo(image4,CV_8UC1);
    cout<<"result matrix "<<image4<<endl;
    namedWindow("image1",CV_WINDOW_FREERATIO);
    imshow("image1",image4);
    waitKey(0);
};