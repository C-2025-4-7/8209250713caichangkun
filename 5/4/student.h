// Student.h - 学生类定义
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    int id;              // 学号
    double score;        // 成绩

public:
    // 构造函数
    Student();                     // 默认构造函数
    Student(int sid, double sc);   // 带参数构造函数

    // 成员函数
    void setData(int sid, double sc);  // 设置数据
    void display() const;              // 显示学生信息
    int getId() const { return id; }   // 获取学号
    double getScore() const { return score; }  // 获取成绩
};

// 声明max函数，使用指向Student对象的指针
void max(Student* students, int n);  // 找出最高成绩者

#endif