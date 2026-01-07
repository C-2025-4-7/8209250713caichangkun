// 如果单独文件：MaxFunction.cpp
// 或者直接放在Student.cpp中
#include <iostream>
#include "student.h"

using namespace std;

// 5. max函数 - 找出最高成绩者
void max(Student* students, int n) {
    if (n <= 0) {
        cout << "错误：数组为空！" << endl;
        return;
    }

    // 初始化最高成绩和对应学生的指针
    double highestScore = students[0].getScore();
    Student* topStudent = &students[0];

    // 遍历数组寻找最高成绩
    for (int i = 1; i < n; i++) {
        if (students[i].getScore() > highestScore) {
            highestScore = students[i].getScore();
            topStudent = &students[i];
        }
    }

    // 输出结果
    cout << "\n最高成绩者信息：" << endl;
    cout << "==========================" << endl;
    topStudent->display();
    cout << "最高成绩: " << highestScore << endl;
    cout << "对应学号: " << topStudent->getId() << endl;
}