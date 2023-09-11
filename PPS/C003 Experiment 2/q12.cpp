#include <iostream>
using namespace std;
int main()
{
    // Write a program to calculate compound interest.
    float principal, rate, time, compoundInterest, n, temp = 1;
    cout << "Enter principal:";
    cin >> principal;
    cout << "Enter rate:";
    cin >> rate;
    cout << "Enter time:";
    cin >> time;
    cout << "Enter number of times interest is compounded per year:";
    cin >> n;
    for (int i = 0; i < (n * time); i++)
    {
        temp *= (1 + rate / 100);
    }
    compoundInterest = principal * temp;
    cout << "Compound interest:" << compoundInterest;

    return 0;
}