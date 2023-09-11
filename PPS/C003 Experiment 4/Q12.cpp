#include <iostream>
using namespace std;
int main()
{
    // Write a program to print the entire uppercase and lowercase letters using a loop (use continue).

    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "\nUppercase letters: ";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            cout << str[i] << " ";
        }
        else
        {
            continue;
        }
    }

        cout << "\nLowercase letters: ";
    cout << sizeof(str) / sizeof(str[0]);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            cout << str[i] << " ";
        }
        else
        {
            continue;
        }
    }

    return 0;
}