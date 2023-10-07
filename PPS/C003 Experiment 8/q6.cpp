#include <iostream>
using namespace std;
int main()
{
    // 5.	WAP to copy one string to another using pointer and display copied string-using pointer.
    string str;
    getline(cin, str);
    char *Pstr = &str[0];
    int i = 0;
    while (str[i] != '\0') // getting length of the string
    {
        i++;
    }
    cout << endl;
    string strcpy = ""; // appending previous string to new string
    for (int k = 0; k < i; k++)
    {
        strcpy += *(Pstr); // dereferencing the previous string pointer and appending it to new string
        Pstr++;
    }
    cout << strcpy << endl;
    return 0;
}