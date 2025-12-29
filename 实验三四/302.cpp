#include <iostream>
using namespace std;
bool is_prime(int num)
{
    bool j = 1;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            j = 0;
            return j;
        }
    }
    return j;
}
int main()
{
    int cnt = 0;
    for (int i = 2; cnt <= 20; i++)
    {
        if (is_prime(i))
            cout << i << " ", cnt++;
    }
    return 0;
}