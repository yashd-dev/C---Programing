#include <iostream>
using namespace std;
int main()
{
    float side1, side2, side3;

    cout << "Enter the lengths of three sides of the triangle: \n";
    cin >> side1;
    cin >> side2;
    cin >> side3;

    // Check if the triangle is valid
    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2))
    {
        cout << "The triangle is valid \n";

        // Classify the triangle
        if (side1 == side2 && side2 == side3)
            cout << "It is an equilateral triangle \n";

        else if (side1 == side2 || side2 == side3 || side3 == side1)
        {
            cout << "It is an isosceles triangle \n";
        }
        else
        {
            cout << "It is a scalene triangle \n";
        }
    }
    else
    {
        cout << "The triangle is not valid \n";
        cout << "Please try again \n";
        cout << endl;
    }
    return 0;
}