#include <iostream>
using namespace std;
int main()
{
    // Implement a program to reverse elements of 1D array and display it
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n], arr2[n];
    cout << "\nEnter the elements of the array: \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "\nThe reversed array is: \n";
    for (int i = 0; i < n; i++)
        arr2[i] = arr[n - i - 1];

    for (int i = 0; i < n; i++)
        cout << arr2[i] << " ";

    return 0;
}