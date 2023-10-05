#include <iostream>
using namespace std;
bool search(int *, int, int);
int main()
{
    // Write user defined function “search” to search element is present in 1D array or not. Search function accepts array and key to search as parameters.
    cout << "Enter Size of the Array: ";
    int size;
    cin >> size;
    int arr[size];
    cout << "Enter Elements of the Array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Key to Search: ";
    int key;
    cin >> key;
    if (search(arr, key, size))
    {
        cout << "Key Found";
    }
    else
    {
        cout << "Key Not Found";
    }

    return 0;
}
bool search(int arr[], int key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}