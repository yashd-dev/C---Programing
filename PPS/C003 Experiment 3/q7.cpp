#include <iostream>
using namespace std;
int main()
{
    // Using a switch case, write a program to check whether the entered character is a vowel or consonant.
    char ch;
    cout << "Enter a character:";
    cin >> ch;
    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'o':
    case 'u':
    case 'I':
    case 'O':
    case 'U':
        cout << "Vowel";
        break;
    default:
        cout << "Consonant";
        break;
    }
    return 0;
}