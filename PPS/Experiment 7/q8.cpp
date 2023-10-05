#include <iostream>
#include <string>
using namespace std;
int main()
{
    
    string str1, str2;
    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, str1);

    cout << "Enter another string: ";
    cin.ignore();
    getline(cin, str2);

    cout << "Length of " << str1 << " is: " << str1.length() << endl; // To find length of a string

    if (str1.compare(str2) == 0) // To compare two string for equality
    {
        cout << "Strings are equal." << endl;
    }
    else
    {
        cout << "Strings are not equal." << endl;
    }

    string strcpy = str1;
    cout << "Copied string is: " << strcpy << endl; // To Copy one string to other

    string strconcat = str1 + str2;
    cout << "Concatenated string is: " << strconcat << endl; // To concatenate two string

    string strrev = "";
    for (int i = str1.length() - 1; i >= 0; i--)
    {
        strrev += str1[i];
    }
    cout << "Reverse of " << str1 << " is: " << strrev << endl; // To find reverse of a String
    return 0;
}