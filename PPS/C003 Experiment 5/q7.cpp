#include <iostream>
using namespace std;
int main()
{
    // Write a C++ program to print prime numbers between N1 to N2, where N2>N1.
    int n1, n2;
    cout << "Enter the range of numbers: ";
    cin >> n1 >> n2;
    cout << "Prime numbers between " << n1 << " and " << n2 << " are: " << endl;
    for (int i = n1; i <= n2; i++)
    {
        int count = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (!count)
        {
            cout << i << endl;
        }
    }
    return 0;
}