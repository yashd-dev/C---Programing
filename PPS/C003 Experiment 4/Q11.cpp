#include <iostream>
using namespace std;
int main()
{
    // Write a program to check whether the entered number is prime or not. (make use of break) 
    int num, i, count = 0;
    cout << "Enter a number to check for Prime Number: ";
    cin >> num;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "\nNot a Prime Number";
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "\nPrime Number";
    }

    return 0;
}