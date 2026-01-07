#include<iostream>
using namespace std;

class Time             
{
private:           
    int hour;
    int minute;
    int sec;

public:
    void setTime()
    {
        cin >> hour >> minute >> sec;
    }

    void showTime()
    {
        cout << hour << ":" << minute << ":" << sec << endl;
    }
};

int main()
{
    Time t1;         

    cout << "请输入时间（时 分 秒）：";
    t1.setTime();      

    cout << "设置的时间为：";
    t1.showTime();    

    return 0;
}