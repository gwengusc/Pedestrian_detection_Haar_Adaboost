cmake_minimum_required(VERSION 3.8)
project(Pedestrian_Detection_Adaboost)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(OpenCV_DIR /Users/wengguifan/opencv-2.4.13/release)
include_directories("/usr/local/Cellar/opencv@2/2.4.13.2_2/include" "include" )
FIND_PACKAGE(OpenCV REQUIRED)

set(SOURCE_FILES main.cpp include/Pedestrian_Detection_Adaboost_Detector.hpp)
add_executable(Pedestrian_Detection_Adaboost ${SOURCE_FILES})

target_link_libraries(Pedestrian_Detection_Adaboost ${OpenCV_LIBS})