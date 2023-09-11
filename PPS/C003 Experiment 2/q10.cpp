#include <iostream>
using namespace std;
int main()
{
    // Write a program to find largest of two numbers using ternary operator.
    int a, b;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Largest number:" << ((a > b) ? a : b);
    return 0;
}