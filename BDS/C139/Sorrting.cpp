#include <iostream>
using namespace std;
// make different functions for bubble sort, insertion sort, selection sort, linear search, and binary search
// programiz has best resources for these algorithms :))
void bubbleSort(int arr[], int n)
{
    cout << "Unsorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++) // for n elements, n-1 passes are required
    {
        for (int j = 0; j < n - i - 1; j++) // for each pass, n-i-1 comparisons are required, basically the last element is already sorted so skip it
        {
            if (arr[j] > arr[j + 1]) // swap if the element is greater than the next element
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void insertionSort(int arr[], int n)
{
    cout << "Unsorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];              // First element is assumed to be sorted, thats why we start with i=1
        int j = i - 1;                 // j is the index of the element before the key
        while (j >= 0 && arr[j] > key) // recursively swap the elements until the key is at its correct position
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // insert the key at its correct position
    }
    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void selectionSort(int arr[], int n)
{
    cout << "Unsorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;                    // assume the element at ith position to be the minimum
        for (int j = i + 1; j < n; j++) // iterating through the array to find the minimum element
        {
            if (arr[j] < arr[min]) // if the element at jth position is less than the element at min position, then update min
            {
                min = j;
            }
        }
        int temp = arr[i]; // swap the element at ith position with the minimum element
        arr[i] = arr[min];
        arr[min] = temp;
        // rinse and repeat until the array is sorted
    }
    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
bool linearSearch(int arr[], int n, int key)
{
    // basic ass shit hai ye, wont explain
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int binarySearch(int arr[], int n, int key)
{
    // YOU HAVE TO HAVE A SORTED ARRAY BEFOREHAND FOR THIS TO WORK
    // https://www.programiz.com/dsa/binary-search read you'll understand
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return true;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return false;
}
int main()
{
    cout << "Enter number of elements: ";
    int size;
    cin >> size;
    int arr[size];
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    int key; // key to be searched
    cout << "Enter key to be searched: ";
    cin >> key;

    bubbleSort(arr, n);
    cout << endl;

    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) // I am reassigning the array because the array is already sorted. This is because im passing array by reference and not by value
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    cout << endl;

    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);
    cout << endl;

    if (linearSearch(arr, n, key))
    {
        cout << "Key found" << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }
    if (binarySearch(arr, n, key))
    {
        cout << "Key found" << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }
    return 0;
}