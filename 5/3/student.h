// Cuboid.h - 长方柱类定义
#ifndef CUBOID_H
#define CUBOID_H

class Cuboid
{
private:
    double length;  // 长
    double width;   // 宽
    double height;  // 高

public:
    // 成员函数声明
    void setDimensions();           // 从键盘输入长宽高
    void setDimensions(double l, double w, double h);  // 参数设置
    double calculateVolume() const; // 计算体积
    void displayVolume() const;     // 显示体积
    void displayDimensions() const; // 显示尺寸（可选）
};

#endif