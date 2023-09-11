#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Write a program that takes three coefficients (a,b,and c) of a quadratic equation; ax2+bx+c=0 as input, compute all possible roots, and print them with appropriate messages without using cmath.
    float a, b, c, d, x1, x2;
    cout << "Enter coefficients of quadratic equation:";
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and distinct:" << endl;
        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;
    }
    else if (d == 0)
    {
        x1 = -b / (2 * a);
        cout << "Roots are real and equal:" << endl;
        cout << "x1 & x2=" << x1 << endl;
    }
    else
    {
        cout << "Roots are imaginary\n";
    }

    return 0;
}