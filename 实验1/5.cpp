#include<iostream>
#include <iomanip>
using namespace std;
int main()


{
   
    double i, j;
    
    cout << "»ªÊÏ¶È: ";
    cin >> i;

    

    j = (i - 32) * 5 / 9;
    

    cout << fixed << setprecision(2);
    cout << "ÉãÊÏ¶È: " << j << endl;

    return 0;
}