#include <iostream>
#include "Point.h"
using namespace std;

int main() {
    // 1. 定义对象并初始化为(60, 80)
    Point point(60, 80);
    cout << "初始坐标: ";
    point.display();

    // 2. 使用setPoint修改坐标
    point.setPoint(10, 20);
    cout << "第一次修改后: ";
    point.display();

    point.setPoint(-30, 40);
    cout << "第二次修改后: ";
    point.display();

    point.setPoint(0, 0);
    cout << "第三次修改后: ";
    point.display();

    return 0;
}