#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Enter Element to Search For: ";
    int search;
    cin >> search;
    int count = 0;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        if (arr[i] == search)
        {
            cout << "Element Found";
            count++;
        }
    }

    if (count == 0)
    {
        cout << "Element Not Found";
    }

    return 0;
}