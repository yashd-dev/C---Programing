#include <iostream>
using namespace std;
double power(int x, int y)
{
    double result = 1;
    for (int i = 0; i < y; i++)
    {
        result *= x;
    }
    return result;
}
int main()
{
    // Write a function that takes two integer parameters x & y, and returns the result XY.   (Don’t use pow( ))
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Power of " << x << " raised to " << y << " is: " << power(x, y);
    return 0;
}