#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;

    cout << "简易计算器" << endl;
   
    cout << "请输入表达式 : ";
    cin >> num1 >> op >> num2;

    if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%') {
        cout << "错误：非法的运算符 '" << op << "'" << endl;
        cout << "请使用 + - * / % 中的运算符" << endl;
        return 1;
    }

    switch (op) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;

    case '/':
        if (num2 == 0) {
            cout << "错误：除数不能为0！" << endl;
            return 1;
        }
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;

    case '%':
        if (static_cast<int>(num2) == 0) {
            cout << "错误：取模运算的除数不能为0！" << endl;
            return 1;
        }
        cout << static_cast<int>(num1) << " % " << static_cast<int>(num2)
            << " = " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
        break;
    }

    return 0;
}