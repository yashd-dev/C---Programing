#include <iostream>
using namespace std;
void leap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        cout << year << " is a leap year.";
    }
    else
    {
        cout << year << " is not a leap year.";
    }
}
int main()
{
    // Write a function that takes one integer parameter as a year, and displays its leap year or not.
    int year;
    cout << "Enter a year to check for leap year: ";
    cin >> year;
    leap(year);
    return 0;
}