
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "请输入两个正整数: ";
    cin >> a >> b;

  
    

   
 
    int smaller = (a < b) ? a : b;

   
  
    int gcd = 1;
    for (int i = 1; i <= smaller; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    
    int lcm = (a * b) / gcd;

    cout << "\n计算结果：" << endl;
    cout << "数字 " << a << " 和 " << b << " 的：" << endl;
    cout << "最大公约数: " << gcd << endl;
    cout << "最小公倍数: " << lcm << endl;

    return 0;
}