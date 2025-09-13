cmake_minimum_required(VERSION 3.10)
project(Rasterizer)

set(OPENCV_DIR /opt/homebrew/Cellar/opencv/4.11.0_1/lib/cmake/opencv4)
set(EIGEN3_INCLUDE_DIR /opt/homebrew/Cellar/eigen/3.4.0_1/include/)
find_package(OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 17)

include_directories(/usr/local/include)
# include_directories("/opt/homebrew/Cellar/eigen/3.4.0_1/include/")
# include_directories("/opt/homebrew/Cellar/opencv/4.11.0_1/include/opencv4/")
include_directories(${EIGEN3_INCLUDE_DIR})
include_directories(${OPENCV_DIR})


add_executable(Rasterizer main.cpp rasterizer.hpp rasterizer.cpp Triangle.hpp Triangle.cpp)
target_link_libraries(Rasterizer ${OpenCV_LIBRARIES})
