// main.cpp - 主函数
#include <iostream>
#include "student.h"

using namespace std;

int main() {
    const int NUM_STUDENTS = 5;

    // 方法1：创建对象数组并初始化
    Student students[NUM_STUDENTS] = {
        Student(1001, 85.5),
        Student(1002, 92.0),
        Student(1003, 78.5),
        Student(1004, 95.5),
        Student(1005, 88.0)
    };

    cout << "=== 5位学生信息 ===" << endl;
    cout << "学号\t成绩" << endl;
    cout << "------------------" << endl;

    // 显示所有学生信息
    for (int i = 0; i < NUM_STUDENTS; i++) {
        students[i].display();
    }

    // 调用max函数找出最高成绩者
    max(students, NUM_STUDENTS);

    return 0;
}