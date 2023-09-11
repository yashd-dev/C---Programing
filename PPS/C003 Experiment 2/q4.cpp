#include <iostream>
using namespace std;
int main()
{
    // Given the value of x, y, and z. Write a program to rotate their values such that x has value of y, y has value of z and z has value of x.
    int x, y, z;
    cout << "Enter x:";
    cin >> x;
    cout << "Enter y:";
    cin >> y;
    cout << "Enter z:";
    cin >> z;
    cout << "Before rotation:\nx: " << x << "\ny: " << y << "\nz: " << z;
    int temp = x;
    x = y;
    y = z;
    z = temp;
    cout << "\nAfter rotation:\nx: " << x << "\ny: " << y << "\nz: " << z;
    return 0;
}