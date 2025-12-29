#include <iostream>
#include <vector>

using namespace std;

int main()
{
    bool bucket[1001] = {false};
    int distinctNumbers[10];
    int count = 0;
    int num;

    cout << "请输入10个数：" << endl;

    for (int i = 0; i < 10; ++i)
    {
        cin >> num;
        if (num >= 0 && num <= 1000 && !bucket[num])
        {
            bucket[num] = true;
            distinctNumbers[count] = num;
            count++;
        }
    }

    cout << "不同的数有：";
    for (int i = 0; i < count; ++i)
    {
        cout << distinctNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}