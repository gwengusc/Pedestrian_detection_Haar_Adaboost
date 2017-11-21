//
// Created by 翁规范 on 11/18/17.
//

#ifndef PEDESTRIAN_DETECTION_ADABOOST_PEDESTRIAN_DETECTION_ADABOOST_DETECTOR_HPP
#define PEDESTRIAN_DETECTION_ADABOOST_PEDESTRIAN_DETECTION_ADABOOST_DETECTOR_HPP


#include <iostream>
#include <vector>
#include <opencv/cv.h>
//#include <fstream>

using std::string;
using std::vector;
using cv::CascadeClassifier;
using cv::Rect;
using cv::Mat;

class Pedestrian_Detection_Adaboost_Detector{

private:
    string model;
    CascadeClassifier cascadeClassifier;

public:

    Pedestrian_Detection_Adaboost_Detector(string _model){
        this->setModel(_model);
    }

    void setModel(string _model){
        model=_model;
    }

    std::vector<Rect> detect(Mat img){
        cascadeClassifier.load(model);
        std::vector<Rect> results;

        cascadeClassifier.detectMultiScale(img,results);

        return results;
    }
};

#endif //PEDESTRIAN_DETECTION_ADABOOST_PEDESTRIAN_DETECTION_ADABOOST_DETECTOR_HPP
