#include <iostream>
using namespace std;
int main()
{
    // Write a program to find the sum of all numbers between M and N, where N>M.
    int m, n, sum = 0;
    cout << "Enter two numbers M and N: ";
    cin >> m;
    cin >> n;
    if (n > m)
    {
        for (int i = m + 1; i < n; i++)
        {
            sum += i;
        }
        cout << endl
             << sum;
    }
    else
        cout << "Incorrect Input";
    return 0;
}