#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void count(const char s[], int counts[])
{
    for (int i = 0; i < 26; i++)
    {
        counts[i] = 0;
    }

    int i = 0;
    while (s[i] != '\0')
    {
        char c = tolower(s[i]);
        if (c >= 'a' && c <= 'z')
        {
            counts[c - 'a']++;
        }
        i++;
    }
}

int main()
{
    char s[100];
    int counts[26];

    cout << "Enter a string: ";
    cin.getline(s, 100);

    count(s, counts);

    for (int i = 0; i < 26; i++)
    {
        if (counts[i] != 0)
        {
            cout << (char)('a' + i) << ": " << counts[i] << " times" << endl;
        }
    }

    return 0;
}