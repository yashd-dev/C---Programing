#include <iostream>
using namespace std;
int main()
{
    // Write a program to find and display odd & even numbers from an array (1D) separately
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the elements of the array: \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "\nEven numbers are:\n";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            cout << arr[i] << endl;
    }
    cout << "\nOdd numbers are:\n";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            cout << arr[i] << endl;
    }

    return 0;
}