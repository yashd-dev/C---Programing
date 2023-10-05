#include <iostream>
using namespace std;
double largest(double, double, double);
int main()
{
    // Implement a program using user defined function to return largest of three floating-point numbers.
    double x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    cout << "Largest number is: " << largest(x, y, z);
    return 0;
}
double largest(double x, double y, double z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > x && y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}