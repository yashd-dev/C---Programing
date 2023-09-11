#include <iostream>
using namespace std;
int main()
{
    // Implement a menu-driven program to calculate the area of a triangle, rectangle, circle, and sphere.
    int choice;
    float a, b, r;
    cout << "1. Rectangle\n2. Triangle\n3. Circle\n4. Sphere\nEnter your choice:";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter length and breadth:";
        cin >> a >> b;
        cout << "Area of rectangle:" << a * b;
        break;

    case 2:
        cout << "Enter base and height:";
        cin >> a >> b;
        cout << "Area of triangle:" << 0.5 * a * b;
        break;

    case 3:

        cout << "Enter radius:";
        cin >> r;
        cout << "Area of circle:" << 3.14 * r * r;
        break;
    case 4:
        cout << "Enter radius:";
        cin >> r;
        cout << "Area of sphere:" << 4 * 3.14 * r * r;
        break;
    default:

        cout << "Invalid choice";
        break;
    }

    return 0;
}