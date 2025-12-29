#include <iostream>
using namespace std;
int f(int num, int cnt)
{
    if (cnt == 1)
        return num;
    else
        return f((num + 1) * 2, --cnt);
}
int main()
{
    int ans;
    ans = f(1, 10);
    cout << ans;
    return 0;
}