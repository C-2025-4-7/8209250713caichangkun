#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        char upperCase = ch - 32; 
        cout << upperCase << endl;
    }
    else {
        char nextChar = ch + 1;
        cout  << nextChar << static_cast<int>(nextChar) << endl;
    }

    return 0;
}