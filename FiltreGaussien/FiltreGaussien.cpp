#include <iostream>
#include <opencv2/opencv.hpp>


using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
    String gaussien = "gaussien";
    Mat imageRGB = imread("D:/photo.jpg");
    Mat image;

    cvtColor(imageRGB, image, COLOR_RGB2GRAY);
    GaussianBlur(image, image, Size(3, 3), 0, 0, BORDER_DEFAULT);
    namedWindow(gaussien, WINDOW_NORMAL);
    imshow(gaussien, image);
}