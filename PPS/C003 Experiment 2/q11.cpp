#include <iostream>
using namespace std;
int main()
{
    // If the length of three sides of a triangle are input through the keyboard, write a program to find the area of triangle and check whether the triangle is valid or not using conditional operator. Hint:- A triangle is valid if the sum of its two sides is greater than the third side.
    int a, b, c, area, semiperimeter;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;
    if (a + b > c && b + c > a && c + a > b)
    {
        semiperimeter = (a + b + c) / 2;
        area = (semiperimeter * (semiperimeter - a) * (semiperimeter - b) * (semiperimeter - c));

        double error = 0.01; // define the precision of sqrt
        double s = area;

        while ((s - area / s) > error) // loop until precision satisfied
        {
            s = (s + area / s) / 2; // 
        }

        cout << "Area:" << s;
    }
    else
    {
        cout << "Invalid triangle!";
    }
    return 0;
}