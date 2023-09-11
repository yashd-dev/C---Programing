#include <iostream>
using namespace std;
int main()
{
    // Write a program to calculate simple interest.
    float p, r, t;
    cout << "Enter principal:";
    cin >> p;
    cout << "Enter rate:";
    cin >> r;
    cout << "Enter time:";
    cin >> t;
    cout << "Simple interest:" << (p * r * t) / 100;

    return 0;
}