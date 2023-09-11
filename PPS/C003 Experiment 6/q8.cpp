#include <iostream>
using namespace std;
int main()
{
    // Implement a program to find the largest element 3X3 matrix.
    int m = 3, n = 3;
    int arr[m][n], max = 0;
    cout << "\nEnter the elements of the array: \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] > max)
                max = arr[i][j];
        }
        cout << "\n";
    }
    cout << "The largest element of the array is: " << max;
    return 0;
}