#include <iostream>
using namespace std;
int main()
{
    // Write a program to input month number and print number of days in that month using the concept of switch case.
    int month;
    cout << "Enter month number: ";
    cin >> month;
    switch (month)
    {
    case 1: // using breakthrough
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 days";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 days";
        break;
    case 2:
        cout << "28/29 days";
    default:
        cout << "Invalid month number";
    }
    return 0;
}