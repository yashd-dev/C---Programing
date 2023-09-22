#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number till which the series should last: ";
    cin >> n;
    float sum = 0;
    float prod = 1;
    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        while (temp > 0)
        {
            prod *= i;
            temp--;
        }
        sum += prod / i;
    }
    cout << "Sum of series: " << sum;
    return 0;
}