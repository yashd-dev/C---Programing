#include <iostream>
using namespace std;

void addingarraysend() // Adding an element to the end of an array
{
    // make and int array take number of inputs from user and store them in the array
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n + 1];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // Add an Element to the End of an Array
    int newElement;
    cout << "Enter the element to be added to the end of the array: ";
    cin >> arr[n];
    for (int i = 0; i <= n; i++)
        cout << arr[i];
}

void addinganywhere() // Adding an element at any index in an array
{
    // make and int array take number of inputs from user and store them in the array
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n + 1]; // Extra space for the new element
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) // Input the array elements
        cin >> arr[i];

    int newElement;
    cout << "Enter the element to be added : ";
    cin >> newElement;

    int pos;
    cout << "Enter the position at which the element is to be added: ";
    cin >> pos;

    for (int i = n - 1; i >= pos; i--) // Shifting elements to the right
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = newElement;

    for (int i = 0; i < n + 1; i++) // Printing the array after insertion
    {
        cout << arr[i] << " ";
    }

    // [1,2,9,3,4,5 ]
}

void deletearray()
{

    int arr[10], tot = 10, i, elem, j, found = 0;
    cout << "Enter 10 Array Elements: ";
    for (i = 0; i < tot; i++)
        cin >> arr[i];
    cout << "\nEnter Element to Delete: ";
    cin >> elem;
    //[1,2,3,4,6,7,8,9,10,10]
    for (i = 0; i < tot; i++)
    {
        if (arr[i] == elem)
        {
            for (j = i; j < (tot - 1); j++)
                arr[j] = arr[j + 1];
            found++;
            i--;
            tot--;
        }
        // [1,5,5,5]
    }

    for (int i = 0; i < tot; i++)
    {
        cout << arr[i] << " ";
    }

    if (found == 0)
        cout << "\nElement doesn't found in the Array!";
    else
        cout << "\nElement Deleted Successfully!";
    cout << endl;
}

void deletepos() // Deleting an element from any index in an array
{
    int arr[10], tot = 10, i, elem, j;
    cout << "Enter 10 Array Elements: ";
    for (i = 0; i < tot; i++)
        cin >> arr[i];
    cout << "\nEnter Position to Delete: ";
    cin >> elem;
    //[1,2,3,4,6,7,8,9,10,10]

    for (j = elem; j < (tot - 1); j++)
        arr[j] = arr[j + 1];

    for (i = 0; i < tot; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
// [1,5,5,5]

void deleteend() // Deleting an element from the end of an array
{
    // deletion from the end of array
    // make and int array take number of inputs from user and store them in the array
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n]; // Extra space for the new element
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) // Input the array elements
        cin >> arr[i];
    arr[n] = 0;
    for (int i = 0; i < n - 1; i++) // Input the array elements
        cout << arr[i];
}

int main()
{
    addingarraysend();
    addinganywhere();
    deletearray();
    deletepos();
    deleteend();
    return 0;
}
