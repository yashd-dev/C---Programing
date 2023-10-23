#include <iostream>
using namespace std;
// Create a class rectangle with (length, width), derive a class box with additional member (depth). In both the classes write parameterized constructor to initialize data member and area ( ) function to find area. Define main ( ) and create appropriate objects to call area ( ) function.
class Rectangle
{
    int length, width;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    int area()
    {
        return length * width;
    }
};
class Box : public Rectangle
{
    int depth;

public:
    Box(int l, int w, int d) : Rectangle(l, w)
    {
        depth = d;
    }
    int volume()
    {
        return area() * depth;
    }
};
int main()
{
    cout << "Enter length, width and depth of box: ";
    int l, w, d;
    cin >> l >> w >> d;
    Box b(l, w, d);
    cout << "Area of box: " << b.area() << endl;
    cout << "Volume of box: " << b.volume() << endl;
    return 0;
}