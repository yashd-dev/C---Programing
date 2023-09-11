#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number till when the series should end: ";
    cin >> n;
    cout << endl;
    float sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += (i * i);
    }
    cout << "The Sum is: " << sum;
    
    return 0;
}