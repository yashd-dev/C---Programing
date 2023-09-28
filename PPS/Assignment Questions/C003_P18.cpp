#include <iostream>
using namespace std;
int main()
{
    // You are given an integer N.Consider the sequence containing the integers 1, 2,…, N in increasing order(each exactly once).Find the maximum length of its continuous subsequence with an even sum.
    int n;
    cout << "Enter an Integer:";
    cin >> n;
    int sum = 1, max = 0, temp = 0;
    for (int i = 1; i < n; i++)
    {
        sum += (i + 1);
        if (sum % 2 == 0)
        {
            if (sum > max)
            {
                max = sum;
                temp = i;
            }
        }
    }
    cout << "Max Length of Subsequence with Even Sum is: " << temp + 1 << endl;

    return 0;
}