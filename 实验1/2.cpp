#include <iostream>
using namespace std;


const double PI = 3;

int main()
{
    double i, j;

   
    cout << "°ë¾¶: ";
    cin >>i;

    cout << "¸ß: ";
    cin >> j;
    double volume = (1.0 / 3.0) * PI * i * i * j;
    cout << "Ô²×¶Ìå»ý=: " << volume << endl;

    return 0;
}