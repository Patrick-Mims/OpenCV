#include <opencv2/core/core.hpp>
#include <opencv2/core/utility.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(void)
{
    Mat image = imread("./redhead.jpeg", IMREAD_REDUCED_GRAYSCALE_2);

    namedWindow("RH", WINDOW_AUTOSIZE);

    imshow("RH", image);

    /* press any key to close image */
    waitKey(0);

    destroyWindow("RH");

    return 0;
}