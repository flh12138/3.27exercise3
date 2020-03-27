#include<opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main()
{
	VideoCapture cap;

	cap.open(0);

	double fps = cap.get(CAP_PROP_FPS);
	std::cout << "fps" << fps << std::endl;


	while (1)
	{

		cv::Mat frame;
		cv::Mat GaussianBlurMat;
		cap.read(frame);
		GaussianBlur(frame, GaussianBlurMat, cv::Size(5, 5), 51,5);
		imshow("GaussianBlurMat", GaussianBlurMat);
		imshow("frame", frame);
		waitKey(30);

	}






}