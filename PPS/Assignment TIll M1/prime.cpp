// Write a program to check whether the entered number is prime or not .(make use of break)

#include <iostream>
using namespace std;
int main()
{
    int prime, c = 0;
    cin >> prime;
    for (int i = 2; i < prime; i++)
    {
        if (prime % i == 0)
        {
            cout << "Not Prime";
            c++;
            break;
        }
    }
    if (c == 0)
    {
        cout << "Prime";
    }

    return 0;
}