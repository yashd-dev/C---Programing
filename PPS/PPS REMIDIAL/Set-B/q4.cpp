#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number till which the series should last: ";
    cin >> n;
    float sum = 0;
    float fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = 1;
        while (i > 0)
        {
            fact *= i;
            i--;
        }
        sum += (1 / fact);
    }
    cout << "Sum of series: " << sum;

    return 0;
}