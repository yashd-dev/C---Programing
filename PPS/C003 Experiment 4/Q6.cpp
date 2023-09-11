#include <iostream>
using namespace std;
int main()
{
    // Write a program to accept a number from the user. Find and print the sum of digits of the number.
    int num, sum = 0, remainder;
    cout << "Enter a number: ";
    cin >> num;

    while (num)
    {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }
    cout << "\nSum of digits: " << sum;

    return 0;
}