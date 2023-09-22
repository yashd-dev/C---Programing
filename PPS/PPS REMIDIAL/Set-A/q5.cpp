#include <iostream>
using namespace std;
int main()
{
    // Write a program to determine day of a given date.
    int d, m, y;
    cout << "Enter date in dd mm yyyy format: ";
    cin >> d >> m >> y;
    int days = 0;
    for (int i = 1; i < m; i++)
    {
        if (i == 2)
        {
            if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
            {
                days += 29;
            }
            else
            {
                days += 28;
            }
        }
        else if (i == 4 || i == 6 || i == 9 || i == 11)
        {
            days += 30;
        }
        else
        {
            days += 31;
        }
    }

    return 0;
}