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
    cout << "Enter Element to Search For: ";
    int search;
    cin >> search;
    int size = (sizeof(arr) / sizeof(arr[0]));
    int low = 0;
    int high = size - 1;
    int count = 0;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == search)
        {
            cout << "Element found: ";
            count++;
            break;
        }
        else if (arr[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (count == 0)
    {
        cout << "Element Not Found";
    }

    return 0;
}