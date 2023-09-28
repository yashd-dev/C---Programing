#include <iostream>
using namespace std;
int main()
{
    unsigned int n;
    cout << "Enter Number of Dolls: ";
    cin >> n;
    cout << endl;

    unsigned int arr[n];
    cout << "Enter Type of dolls:\n\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) // Basic Bubble sort
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1]) // Checking If the next element is equal to the first
        {
            i++; // If it is, then increment i once here then above in loop its incremented once more, skipping the element being checked against.
        }
        else
        {
            cout << "\n"
                 << arr[i]; // Print the one without a pair :(
        }
    }

    return 0;
}