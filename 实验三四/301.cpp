#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}
int main()
{
    int a, b;
    int MAX, MIN;
    cin >> a >> b;
    if (a > b)
        MAX = gcd(a, b);
    else
        MAX = gcd(b, a);
    MIN = a * b / MAX;
    cout << MAX << " " << MIN;
    return 0;
}