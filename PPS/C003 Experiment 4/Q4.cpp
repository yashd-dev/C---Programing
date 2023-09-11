#include <iostream>
using namespace std;
int main()
{
    // Write a program to count +ve number, -ve number and zeros until user wants, make use of do while loop.
    int x, sum = 0, cond = 1;
    do
    {
        cout << "\nEnter Number: ";
        cin >> x;
        sum += x;
        cout << "\nEnter 0 to stop 1 to continue:";
        cin >> cond;
        if (cond > 1)
        {
            cout << "Incorrect Input, Exiting...";
            break;
        }

    } while (cond == 1);
    cout << "\nThe Sum is: " << sum;
    return 0;
}