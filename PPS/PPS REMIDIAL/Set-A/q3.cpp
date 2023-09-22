#include <iostream>
using namespace std;
int main()
{
    // Write a program to accept a character and find if it is numeric digit or not.
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= '0' && ch <= '9')
    {
        cout << "It is a numeric digit";
    }
    else
    {
        cout << "It is not a numeric digit";
    }
    return 0;
}