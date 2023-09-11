#include <iostream>
using namespace std;
int main()
{
    // Write a program to check whether a number is a strong number or not.
    int num, sum = 0, dig = 0, fact;
    cout << "Enter a number to check for strong number: ";
    cin >> num;
    int temp = num;
    while (num != 0)
    {
        dig = num % 10;
        num /= 10;
        fact = 1;
        for (int i = 1; i <= dig; i++)
        {
            fact *= i;
        }
        sum += fact;
    }
    if (sum == temp)
    {
        cout << "\nStrong Number";
    }
    else
    {
        cout << "\nNot a Strong Number";
    }
    return 0;
}