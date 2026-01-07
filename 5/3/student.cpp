// Cuboid.cpp - 长方柱类实现
#include <iostream>
#include "student.h"

using namespace std;

// 1. 从键盘输入长宽高
void Cuboid::setDimensions()
{
    cout << "请输入长方柱的尺寸：" << endl;

    cout << "长: ";
    while (!(cin >> length) || length <= 0) {
        cout << "输入错误，请重新输入正数: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cout << "宽: ";
    while (!(cin >> width) || width <= 0) {
        cout << "输入错误，请重新输入正数: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cout << "高: ";
    while (!(cin >> height) || height <= 0) {
        cout << "输入错误，请重新输入正数: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cin.ignore();  // 清除输入缓冲区
}

// 2. 通过参数设置长宽高
void Cuboid::setDimensions(double l, double w, double h)
{
    if (l > 0 && w > 0 && h > 0) {
        length = l;
        width = w;
        height = h;
    }
    else {
        // 如果参数不合法，设为默认值
        length = width = height = 1.0;
        cout << "警告：尺寸必须为正数，已设为默认值1.0" << endl;
    }
}

// 3. 计算体积
double Cuboid::calculateVolume() const
{
    return length * width * height;
}

// 4. 显示体积
void Cuboid::displayVolume() const
{
    double volume = calculateVolume();
    cout << "长方柱的体积为: " << volume << endl;
}

// 5. 显示所有尺寸（可选）
void Cuboid::displayDimensions() const
{
    cout << "尺寸 - 长: " << length
        << ", 宽: " << width
        << ", 高: " << height << endl;
}