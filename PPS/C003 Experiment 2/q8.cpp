#include <iostream>
using namespace std;
int main()
{
    // A four-digit number is inputted through the keyboard. Write a program to calculate sum of digits of a number.
    int number;
    cout << "Enter a four-digit number:";
    cin >> number;
    int sum = 0;
    if (number > 999 && number < 10000)
    {
        while (number > 0)
        {
            sum += number % 10;
            number /= 10;
        }
        cout << "Sum of digits:" << sum;
    }
    else
    {
        cout << "Invalid input!";
    }
 
    
    return 0;
}