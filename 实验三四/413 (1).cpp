#include <iostream>
#include <vector>

using namespace std;

int main()
{
    bool lockers[101];

    for (int i = 1; i <= 100; i++)
    {
        lockers[i] = false;
    }

    for (int s = 1; s <= 100; s++)
    {
        for (int l = s; l <= 100; l += s)
        {
            lockers[l] = !lockers[l];
        }
    }

    for (int i = 1; i <= 100; i++)
    {
        if (lockers[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}