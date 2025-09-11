#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

#define Angle_Value 45.0

using namespace Eigen;

float AngleToRadian(float angle_in_degree){
    return angle_in_degree / 180.0 * acos(-1);
}


int main(){

    Vector3f v(2, 1, 0);
    Matrix3f move;
    move << 1, 0, 1,
            0, 1, 2,
            0, 0, 1;
    Matrix3f rotate;
    rotate << std::cos(AngleToRadian(Angle_Value)), -std::sin(AngleToRadian(Angle_Value)), 0,
             std::sin(AngleToRadian(Angle_Value)), std::cos(AngleToRadian(Angle_Value)), 0,
             0, 0, 1;
    std::cout << rotate * move << std::endl;
    std::cout << move * rotate << std::endl;
    std::cout << "result: " << std::endl;
    std::cout << move * rotate * v << std::endl;
    return 0;
}