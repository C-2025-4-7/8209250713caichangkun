#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int parseHex(const char *const hexString)
{
    int decimalValue = 0;
    int len = strlen(hexString);

    for (int i = 0; i < len; i++)
    {
        char ch = hexString[i];
        int digit;

        if (isdigit(ch))
        {
            digit = ch - '0';
        }
        else if (tolower(ch) >= 'a' && tolower(ch) <= 'f')
        {
            digit = tolower(ch) - 'a' + 10;
        }
        else
        {
            return -1;
        }

        decimalValue = decimalValue * 16 + digit;
    }

    return decimalValue;
}

int main()
{
    char hex[80];
    cout << "Enter a hex string: ";
    cin >> hex;

    int result = parseHex(hex);

    if (result == -1)
    {
        cout << "Invalid hex string" << endl;
    }
    else
    {
        cout << "The decimal value is " << result << endl;
    }

    return 0;
}