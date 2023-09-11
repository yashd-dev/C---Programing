#include <iostream>
using namespace std;
int main()
{
    // Implement a program to accept a year as input and print whether it is a leap. A year is a leap if divisible by 4, and centennial years (years divisible by 100) are leap years only when divisible by 400.
    int year;
    cout << "Enter year:";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        cout << "Leap year";
    }
    else
    {
        cout << "Not a leap year";
    }
    
    return 0;
}