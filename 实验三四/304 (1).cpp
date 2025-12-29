#include <iostream>
#include <iomanip> // 用于控制输出精度
#include "mytriangle.h"

using namespace std;

int main()
{
    double s1, s2, s3;

    cout << "请输入三角形的三条边长: ";
    cin >> s1 >> s2 >> s3;

    if (is_valid(s1, s2, s3))
    {
        cout << "三角形的面积为: " << fixed << setprecision(2)
             << area(s1, s2, s3) << endl;
    }
    else
    {
        cout << "错误：输入的边长无法构成三角形！" << endl;
    }

    return 0;
}