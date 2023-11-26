#include <iostream>
using namespace std;
// A card game player arranges his cards and picks them one by one. With which sorting technique can you compare this example? Apply the identified sorting technique on the given array and show all the passes. 51 14 8 45 67 83 27

// if question is about card game use Insertion Sort Algorithm
int main()
{
    int arr[7] = {51, 14, 8, 45, 67, 83, 27};
    cout << "Showing each pass: \n";

    for (int i = 1; i < 7; i++)
    {
        int current = arr[i];
        int j = i - 1;

        // Move elements greater than current to the right
        while (j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert current into its correct position
        arr[j + 1] = current;

        // Display the array before the current pass
        for (int k = 0; k < 7; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    cout << "\nSorted Array: \n";
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}