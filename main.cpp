//图像显示
#include <opencv2/opencv.hpp>
using namespace cv;//包含cv命名空间

int main()
{
	Mat srcImage = imread("库里.jpg");
	imshow("【原始图】", srcImage);
	waitKey(0);
}