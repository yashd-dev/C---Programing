#include <iostream>
using namespace std;
int main()
{
    // Write a program to print the sum of the last and the first digit of a number the user gives.
    int num, sum = 0, remainder, temp;
    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (num >= 10)
    {
        num /= 10;
    }

    sum = num + (temp % 10);
    cout << "\nSum of first and last digit: " << sum;
    return 0;
}