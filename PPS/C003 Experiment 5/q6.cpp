#include <iostream>
using namespace std;

int main()
{
    // Write a C++ program to print Armstrong numbers between N1 to N2, where N2>N1.
    int n1, n2;
    cout << "Enter the range of numbers: ";
    cin >> n1 >> n2;
    cout << "Armstrong numbers between " << n1 << " and " << n2 << " are: " << endl;

    for (int i = n1; i <= n2; i++)
    {
        int sum = 0, temp = i, digits = 0;
        // get digits from temp
        while (temp)
        {
            digits++;
            temp /= 10;
        }
        temp = i;
        while (temp)
        {
            int rem = temp % 10;
            int remtemp = rem;
            rem = 1;
            for (int j = 0; j < digits; j++)
            {
                rem *= remtemp;
            }
            sum += rem;
            temp /= 10;
        }
        if (sum == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}
