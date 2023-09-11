#include <iostream>
using namespace std;
int main()
{
    // Armstrong Number
    int num, sum = 0, remainder, temp;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    //get the digits of the number
    int digits=0;
    while (num)
    {
        num /= 10;
        digits++;
    }
    num = temp;
    int prod=1;
    while (num)
    {
        remainder = num % 10;
        prod=1;
        for (int i = 0; i < digits; i++)
        {
           prod*=remainder;
        }
        sum+=prod;
        num /= 10;
    }
    if (sum == temp)
    {
        cout << "\nArmstrong Number";
    }
    else
    {
        cout << "\nNot an Armstrong Number";
    }
    return 0;
}