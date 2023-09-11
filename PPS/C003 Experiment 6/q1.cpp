// Write a program to multiply each element of an array by 5 and display the resultant array
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the elements of the array: \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        arr[i] = arr[i] * 5;

    cout << "\nThe resultant array is: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}