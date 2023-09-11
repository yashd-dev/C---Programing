#include <iostream>
using namespace std;
int main()
{
    // A four-digit number is inputted through the keyboard. Write a program to reverse the number.
    int number, reverse = 0;
    cout << "Enter a four-digit number:";
    cin >> number;
    if (number > 999 && number < 10000)
    {
        cout << "Reversed number:";
        while (number > 0)
        {
            reverse = (reverse * 10) + (number % 10);
            number /= 10;
        }
        cout << "Number after reversing is :" << reverse;
    }
    else
    {
        cout << "Invalid input!";
    }
    return 0;
}