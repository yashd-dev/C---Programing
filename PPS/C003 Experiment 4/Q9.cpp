#include <iostream>
using namespace std;
int main()
{
    // Write a program to check whether the entered number is a palindrome.
    int num, sum = 0, remainder, temp;
    cout << "Enter a number to check for Palindrome Number: ";
    cin >> num;
    temp = num;

    while (num)
    {
        remainder = num % 10;
        sum = sum * 10 + remainder;
        num /= 10;
    }
    if (sum == temp)
    {
        cout << "\nPalindrome Number";
    }
    else
    {
        cout << "\nNot a Palindrome Number";
    }

    return 0;
}