#include<iostream>
#include <iomanip>
using namespace std;
int main()


{
   
    double i, j;
    
    cout ;
    cin >> i;
    if (i>0)
        if (i < 1)
            j = 3 - 2 * i;
        else if (i < 5)
            j = 2 / i + 1;
        else if(i<10)
            j = i * i;

    

    
    

    cout << fixed << setprecision(2);
    cout << j << endl;

    return 0;
}