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
    Matrix3f trans;
    trans << std::cos(AngleToRadian(Angle_Value)), -std::sin(AngleToRadian(Angle_Value)), 1,
             std::sin(AngleToRadian(Angle_Value)), std::cos(AngleToRadian(Angle_Value)), 2,
             0, 0, 1;
    std::cout << trans * v << std::endl;
    return 0;
}