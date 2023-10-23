#include <iostream>
using namespace std;
// Define class Complex with real and imaginary as data members, define default and parameterized constructor to initialize two complex numbers. Define add (Complex, Complex) member function to add two complex numbers and show( ) function to display both the complex numbers with their addition.
class Complex
{
    double real, imaginary;

public:
    Complex(double r, double i)
    {
        real = r;
        imaginary = i;
    }
    Complex()
    {
        real = 0;
        imaginary = 0;
    }
    void add(Complex x, Complex y)
    {
        real = x.real + y.real;
        imaginary = x.imaginary + y.imaginary;
    }
    void show()
    {
        cout << "Real: " << real << endl;
        cout << "Imaginary: " << imaginary << endl;
    }
};
int main()
{
    cout << "Enter real and imaginary part of 1st complex number: ";
    double r1, i1;
    cin >> r1 >> i1;
    Complex c1(r1, i1);
    cout << "Enter real and imaginary part of 2nd complex number: ";
    double r2, i2;
    cin >> r2 >> i2;
    Complex c2(r2, i2);
    Complex c3;
    c3.add(c1, c2);
    c3.show();
    return 0;
}