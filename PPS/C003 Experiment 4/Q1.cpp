// Write a program to display the sum of N terms of even natural numbers.
#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0, temp = 2;
    cin >> num;
    if (num > 0)
    {
        for (int i = 0; i < num; i++)
        {
            sum += temp;
            temp += 2;
        }
        cout << endl
             << sum;
    }
    else
    {
        cout << "Invalid Input";
    }
    return 0;
}