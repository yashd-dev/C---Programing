#include <iostream>
using namespace std;
int main()
{
    // Write a program to find the power of a number XY; here, X is base and Y is exponent.
    float x, y;
    cout << "Enter two numbers X and Y where X is base and Y is exponent. : ";
    cin >> x;
    cin >> y;
    cout << endl;
    float temp = x;

    if (y > 0) // if exponent is positive
    {
        for (int i = 0; i < y - 1; i++)
        {

            x *= temp; // multiplying x with itself y times
        }
        cout << x;
        cout << endl;
    }

    else // if exponent is negative
    {
        for (int i = 0; i < ((-1 * y) + 1); i++)
        {

            x *= 1 / temp; // multiplying 1/x with itself y times
        }
        cout << "Exponent is: " << x;
        cout << endl;
    }
    return 0;
}