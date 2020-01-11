#ifndef _Factory
#define _Factory

#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>

// 产品类
namespace ORB_SLAM2 {
	class Produce {
	public:
		cv::Mat R1;
		cv::Mat t1;
		cv::Mat K1;
		cv::Mat mImRGB;
		int w_images;
		int h_images;
	};

	extern std::vector<Produce> ProducePool;
	extern int ProduceCnt;
}
#endif // !_Factory