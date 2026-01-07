// main.cpp - 主函数
#include <iostream>
#include "student.h"

using namespace std;

int main()
{
    // 创建3个长方柱对象
    Cuboid cuboid1, cuboid2, cuboid3;

    cout << "=== 计算3个长方柱的体积 ===" << endl << endl;

    // 第一个长方柱：从键盘输入
    cout << "【第一个长方柱】" << endl;
    cuboid1.setDimensions();
    cuboid1.displayDimensions();
    cuboid1.displayVolume();
    cout << endl;

    // 第二个长方柱：从键盘输入
    cout << "【第二个长方柱】" << endl;
    cuboid2.setDimensions();
    cuboid2.displayDimensions();
    cuboid2.displayVolume();
    cout << endl;

    // 第三个长方柱：从键盘输入
    cout << "【第三个长方柱】" << endl;
    cuboid3.setDimensions();
    cuboid3.displayDimensions();
    cuboid3.displayVolume();
    cout << endl;

    // 显示汇总信息
    cout << "=== 汇总 ===" << endl;
    cout << "长方柱1体积: " << cuboid1.calculateVolume() << endl;
    cout << "长方柱2体积: " << cuboid2.calculateVolume() << endl;
    cout << "长方柱3体积: " << cuboid3.calculateVolume() << endl;

    double total = cuboid1.calculateVolume() +
        cuboid2.calculateVolume() +
        cuboid3.calculateVolume();
    cout << "总体积: " << total << endl;

    return 0;
}