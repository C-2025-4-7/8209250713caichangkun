// Student.cpp - 学生类实现
#include <iostream>
#include "student.h"

using namespace std;

// 1. 默认构造函数
Student::Student() : id(0), score(0.0) {
}

// 2. 带参数构造函数
Student::Student(int sid, double sc) {
    setData(sid, sc);
}

// 3. 设置学生数据
void Student::setData(int sid, double sc) {
    id = sid;
    if (sc >= 0 && sc <= 100) {
        score = sc;
    }
    else {
        score = 0.0;
        cout << "警告：成绩应在0-100之间，已设为0" << endl;
    }
}

// 4. 显示学生信息
void Student::display() const {
    cout << "学号: " << id << "\t成绩: " << score << endl;
}