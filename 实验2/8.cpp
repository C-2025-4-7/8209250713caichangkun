#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    cout << "请输入一个正数: ";
    cin >> a;
    
    if (a < 0) {
        cout << "错误：不能对负数开平方！" << endl;
        return 1;
    }
    
    double x = a / 2.0; 
    
 
    for (int i = 0; i < 1000000; i++) {
        x = 0.5 * (x + a / x);
    }
    
    cout << "√" << a << " ≈ " << x << endl;
    cout << "验证: " << x << " × " << x << " = " << x * x << endl;
    
    return 0;
}
  