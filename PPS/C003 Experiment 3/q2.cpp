#include <iostream>
using namespace std;
int main()
{
    // Write a program to test whether a given character is a capital or small letter and change small letters to capital letters and vice versa.

    char ch;
    cout << "Enter a character:";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Capital letter";
        ch += 32;
        cout << endl
             << "Converted character:" << ch;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Small letter";
        ch -= 32;
        cout << endl
             << "Converted character:" << ch;
    }
    else
    {
        cout << "Not a letter";
    }

    return 0;
}