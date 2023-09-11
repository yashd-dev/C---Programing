#include <iostream>
using namespace std;
int main()
{
    // Given an array nums of size n, return the majority element.
    // The majority element is the element that appears more than(n / 2) times.You may assume that the majority element always exists in the array.
    int n;
    cout << "Enter Size of Array:";
    cin >> n;
    int arr[n];
    int count = 0;
    cout << "\nEnter Elements of the Array: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) // using bubble sort
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "\nMajority Element:";
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;
            if (count >= (n / 2))
            {
                cout << arr[i];
            }
        }
        else
        {
            count = 0;
        }
    }
    return 0;
}