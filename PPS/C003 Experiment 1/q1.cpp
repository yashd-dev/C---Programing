#include <iostream>
using namespace std;
int main()
{
    float p, r, t;
    cout << "\nEnter Principle:";
    cin >> p;

    cout << "\nEnter Rate:";
    cin >> r;

    cout << "\nEnter Time:";
    cin >> t;
    float si = (p * r * t) / 100;
    cout << "\nThe Simple interest is: " << si;
    return 0;
}