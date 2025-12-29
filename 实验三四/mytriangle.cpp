#include <cmath>
#include "mytriangle.h"

// 三角形判断逻辑：任意两边之和大于第三边
bool is_valid(double side1, double side2, double side3)
{
    return (side1 + side2 > side3) &&
           (side1 + side3 > side2) &&
           (side2 + side3 > side1);
}

// 使用海伦公式计算面积
double area(double side1, double side2, double side3)
{
    double s = (side1 + side2 + side3) / 2.0;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}