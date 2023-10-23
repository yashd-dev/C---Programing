#include <iostream>

using namespace std;

class Shape
{
protected:
    double a, b;

public:
    void get_data()
    {
        cout << "Enter two dimensions: ";
        cin >> a >> b;
    }

    void display_area(int ch)
    {
        switch (ch)
        {
        case 1:
            cout << "Area of Triangle: " << 0.5 * a * b << endl;
            break;
        case 2:
            cout << "Area of Rectangle: " << a * b << endl;
            break;
        default:
            cout << "wrong imput";
        }
    }
};

class Triangle : public Shape
{
};

class Rectangle : public Shape
{
};

int main()
{
    Triangle tri;
    Rectangle rect;

    cout << "Enter sides for a triangle:" << endl;
    tri.get_data();
    cout << "Enter sides for a rectangle:" << endl;
    rect.get_data();

    cout << "areas:" << endl;
    tri.display_area(1);
    rect.display_area(2);

    return 0;
}
