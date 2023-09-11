#include <iostream>
using namespace std;
int main()
{
    // Write a program to copy one 1D array into another 1D array and display copied array
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n], arr2[n];
    cout << "\nEnter the elements of the array: \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int *brr = arr;
    cout << "\nThe copied array is: \n";
    for (int i = 0; i < n; i++)
        cout << brr[i] << " ";

    return 0;
}