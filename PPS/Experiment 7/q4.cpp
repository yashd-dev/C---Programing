#include <iostream>
using namespace std;
double fact(int);
int main()
{
    // WAP using user defined function to calculate and return factorial of a given integer.
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is: " << fact(n);
    return 0;
}
double fact(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}