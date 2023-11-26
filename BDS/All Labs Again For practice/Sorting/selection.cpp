#include <iostream>
using namespace std;
int main()
{
    // In selection sort you basicaly find the lowest/highest index, check if its not the current index of the itteration and swap it with the current index

    int arr[] = {5, 4, 3, 2, 1, 767, 3253, 88767, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // Array to be sorted
    int minIndex = 0;
    int temp;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        minIndex = i;
        for (int j = i + 1; j < sizeof(arr) / sizeof(arr[0]); j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    // Print the sorted array
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}