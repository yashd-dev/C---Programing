#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "It is a Even Number";
    }
    else
    {
        cout << "It is a Odd Number";
    }
    return 0;
}