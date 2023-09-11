#include <iostream>
using namespace std;
int main()
{
    // Write a program to find area & perimeter of a circle
    float radius;
    cout << "Enter radius:";
    cin >> radius;
    cout << "Area:" << (3.14 * radius * radius) << "\nPerimeter:" << (2 * 3.14 * radius);
    return 0;
}