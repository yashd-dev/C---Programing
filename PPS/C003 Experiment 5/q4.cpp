#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 3; i++)
    {
        for (int k = 3; k >= i; k--)
        {
            cout << "  ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << "&   ";
        }
        cout << endl;
    }

    return 0;
}