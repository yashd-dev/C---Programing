#include <iostream>
using namespace std;
int main()
{
    // In this we first assume first element is sorted, then we take the next element and compare it with the sorted array and place it in the correct position
    int arr[] = {5, 4, 3, 2, 1, 767, 3253, 88767, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0}; // Array to be sorted
    int key = 0;
    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j]) // basiccaly go left of array till end and check if the key is less than the current element, if yes then shift the current element to the right
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // place the key in the correct position
        /* code */
    }
    // Print the sorted array
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}