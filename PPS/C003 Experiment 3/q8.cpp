#include <iostream>
using namespace std;
int main()
{
    // Write a program that takes an arithmetic operator (+, -, *, or /) and two operands from the user. Perform corresponding arithmetic operations on the operands using switch case.
    float a, b;
    char op;
    cout << "Enter two operands:";
    cin >> a >> b;
    cout << "Enter operator:";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a << "+" << b << " = " << a + b;
        break;
    case '-':
        cout << a << "-" << b << " = " << a - b;
        break;
    case '*':
        cout << a << "*" << b << " = " << a * b;
        break;
    case '/':
        cout << a << "/" << b << " = " << a / b;
        break;
    default:
        cout << "Invalid operator";
        break;
    }

    return 0;
}