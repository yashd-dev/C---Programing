#include <iostream>
using namespace std;
int main()
{
    // Develop a program to perform sum of elements of matrix (2D array) of order MXN.
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;
    int arr[m][n], sum = 0;
    cout << "\nEnter the elements of the array: \n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    cout << "\nThe sum of the elements of the array is: " << sum;
    return 0;
}