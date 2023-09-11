#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int k = 3; k > 0; k--)
    {
        for (int l = k; l > 0; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }
    return 0;
}