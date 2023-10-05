#include <iostream>
#include <string>
using namespace std;
int main()
{
    // WAP to copy one string to another string without using string handling function and display copied string.
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int i = 0;
    string strcpy = "";
    while (str[i] != '\0')
    {
        strcpy += str[i];
        i++;
    }
    cout << strcpy;

    return 0;
}