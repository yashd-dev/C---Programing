#include <iostream>
using namespace std;
int main()
{
    // "Finally, a COVID vaccine is out on the market and the aamchi Mumbai government has asked you to form a plan to distribute it to the public as soon as possible.
    // There are a total of N people with ages a1,a2, ... aN.There is only one hospital where vaccination is done and it is only possible to vaccinate up to D people per day.Anyone whose age is ≥ 80 or ≤9 is considered to be at risk.On each day, you may not vaccinate both a person who is at risk and a person who is not at risk.Find the smallest number of days needed to vaccinate everyone."
    int n, d;
    cout << "Enter the Number of People: ";
    cin >> n;
    cout << "Enter the Number of People Vaccinated per Day: ";
    cin >> d;
    int a[n];
    cout << "Enter the Ages of the People: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int days = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 80 || a[i] <= 9)
        {
            days++; // getting the risked patients
        }
    }
    int norisk = n - days; // getting the non-risked patients
    if (days % d == 0)
    {
        days = days / d;
    }
    else
    {
        days = (days / d) + 1;
    }
    if (norisk % d == 0)
    {
        days = days + (norisk / d);
    }
    else
    {
        days = days + (norisk / d) + 1;
    }
    cout << "The Minimum Number of Days Required to Vaccinate Everyone is: " << days << endl;
    return 0;
}