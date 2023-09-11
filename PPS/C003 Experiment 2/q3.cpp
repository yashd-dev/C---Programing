#include <iostream>
using namespace std;
int main()
{
    // Write a program to exchange values of two variables without using 3rd variable
    int a, b;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Before swapping:\na:" << a << "\nb:" << b;

    a = a + b; // a = 2 + 3 = 5
    b = a - b; // b = 5 - 3 = 2
    a = a - b; // a = 5 - 2 = 3

    cout << "\nAfter swapping:\na:" << a << "\nb:" << b;
    return 0;
}