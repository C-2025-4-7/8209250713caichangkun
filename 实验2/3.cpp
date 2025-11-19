#include<iostream>

using namespace std;
int main()


{
   
    double a,b,c,d;
    cin >> a >> b >> c;
    cout ;
    if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0)
         d = a + b + c;
           cout <<d << endl;
           if (a == b || a == c || b == c)
               cout << "是等腰三角形" << endl;
           else
               cout << "不是等腰三角形" << endl;
    
    

    
    

    return 0;
}