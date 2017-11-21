#include "opencv2/core/core.hpp"
#include "opencv2/contrib/contrib.hpp"
#include "opencv2/highgui/highgui.hpp"
//#include "opencv2/imgproc/imgproc.hpp"
//#include "opencv2/objdetect/objdetect.hpp"

#include <iostream>
#include <fstream>
//#include <sstream>
#include <Pedestrian_Detection_Adaboost_Detector.hpp>

using namespace std;

int main() {

    Pedestrian_Detection_Adaboost_Detector adaboost_detection(
            "/Users/wengguifan/CLionProjects/Adaboost_facial_recognition/model/haarcascade_frontalface_alt.xml");

//    cv::Mat img=cv::imread("/Users/wengguifan/pedestrian_data_test/pedestrian_image/INRIA/crop_000001.png");
    cv::Mat img=cv::imread("/Users/wengguifan/Documents/pedestrian_detection/timg.jpeg");

    std::vector<cv::Rect> results=adaboost_detection.detect(img);

    int i,results_len=results.size();

    for(i=0;i<results_len;i++){
        cv::rectangle(img,results[i].tl(),results[i].br(),cv::Scalar(0,255,0),2);
    }

    cv::imshow("face detect",img);

    cv::waitKey(0);

    return 0;
}
