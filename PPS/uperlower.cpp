// Write a program to print the entire uppercase and lowercase letters using a loop(use continue).

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    getline(cin, name);

    for (int i = 0; i < (sizeof(name) / sizeof(name[0])); i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            cout << "\nUpper Case" << name[i];
            continue;
        }
        else if (name[i] >= 'A' && name[i] <= 'Z')
        {
            cout << "\nLower Case" << name[i];
            continue;
        }
    }

    return 0;
}