#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int arr[x][y];
    // x is row y is col
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < x; k++)
            {
                for (int l = 0; l < y; l++)
                {
                    if (arr[i][j] > arr[k][l])
                    {
                        int temp = arr[i][j];
                        arr[i][j] = arr[k][l];
                        arr[k][l] = temp;
                    }
                }
            }
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}