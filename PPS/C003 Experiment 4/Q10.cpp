#include <iostream>
using namespace std;
int main()
{
    // Implement a program to print all Leap Years from 1 to N using C++ program.
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Leap Years from 1 to " << n << " are: ";
    for (int i = 1; i <= n; i++)
    {
        if (i % 4 == 0 && i % 100 != 0)
            cout << i << "\n";

        else if (i % 400 == 0)
            cout << i << "\n";
    }

    return 0;
}