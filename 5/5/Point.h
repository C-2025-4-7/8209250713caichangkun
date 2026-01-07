#pragma once
#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x, y;

public:
    Point(int xPos, int yPos);  // 构造函数
    void setPoint(int i, int j);  // 修改坐标
    void display() const;  // 显示坐标
};

#endif