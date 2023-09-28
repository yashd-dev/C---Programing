#include <iostream>
using namespace std;
int main()
{
    // Write a program to determine day of a given date.
    int d, m, y;
    cout << "Enter date in dd mm yyyy format: ";
    cin >> d >> m >> y;
    int days = 0;
    // I am assuming every month starts with monday
    for (int i = 0; i < d; i++)
    {
        days++;
        if (i % 7 == 0)
        {
            days = 0;
        }
        }

    switch (days)
    {
    case 0:
        cout << "Monday";
        break;
    case 1:

        cout << "Tuesday";
        break;
    case 2:
        cout << "Wednesday";
        break;
    case 3:
        cout << "Thursday";
        break;
    case 4:
        cout << "Friday";
        break;
    case 5:
        cout << "Saturday";
        break;
    case 6:
        cout << "Sunday";
        break;
    }
    return 0;
}