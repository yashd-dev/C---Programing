#include <iostream>

using namespace std;

class Shapes
{
private:
    float area;

public:
    void calArea(float length, float breadth)
    {
        area = length * breadth;
    }

    void calArea(float side)
    {
        area = side * side;
    }

    void displayArea()
    {
        cout << "Area: " << area << endl;
    }
};

int main()
{
    Shapes shape;

    float length, breadth, side;
    int choice;

    cout << "Select a shape:\n";
    cout << "1. Rectangle\n";
    cout << "2. Square\n";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter length and breadth of the rectangle: ";
        cin >> length >> breadth;
        shape.calArea(length, breadth);
    }
    else if (choice == 2)
    {
        cout << "Enter the side length of the square: ";
        cin >> side;
        shape.calArea(side);
    }
    else
    {
        cout << "Invalid choice. Please select 1 for Rectangle or 2 for Square." << endl;
        return 1;
    }

    shape.displayArea();

    return 0;
}
