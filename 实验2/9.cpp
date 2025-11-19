#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double price = 0.8;  
    int day = 1;              
    int todayApples = 2;       
    int totalApples = 0;      
    int totalDays = 0;        

    cout << "苹果购买记录：" << endl;
    cout << "天数\t苹果数\t当天花费" << endl;
    cout << "----------------------" << endl;

    while (todayApples <= 100) {
        double todayCost = todayApples * price;
        totalApples += todayApples;
        totalDays = day; 

        cout << day << "\t" << todayApples << "\t" << todayCost << "元" << endl;

        day++;
        todayApples *= 2; 
    }

  
    double totalCost = totalApples * price;
    double averageCost = totalCost / totalDays;

    cout << "\n统计结果：" << endl;
    cout << "总天数: " << totalDays << " 天" << endl;
    cout << "总苹果数: " << totalApples << " 个" << endl;
    cout << "总花费: " << totalCost << " 元" << endl;
    cout << fixed << setprecision(2);
    cout << "平均每天花费: " << averageCost << " 元" << endl;

    return 0;
}