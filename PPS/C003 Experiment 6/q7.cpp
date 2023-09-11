#include <iostream>
using namespace std;
int main()
{
    // Write a program to perform addition of two matrix (2D array) and display the resultant matrix.
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;
    int arr[m][n], arr2[m][n], sum[m][n];

    cout << "\nEnter the elements of the first array: \n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    cout << "\nEnter the elements of the second array: \n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr2[i][j];

    cout << "\nThe sum of the elements of the array is: \n";
    for (int i = 0; i < m; i++)
    {
        cout << "\n";
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = arr[i][j] + arr2[i][j];
            cout << sum[i][j] << " ";
        }
    }
    return 0;
}