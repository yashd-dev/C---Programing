#include <iostream>
using namespace std;
int main()
{
    // Find highest and lowest element in an array.
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    int highest = 0;
    int lowest = 0;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            highest = arr[i];
            lowest = arr[i];
        }
        else
        {
            if (arr[i] > highest)
            {
                highest = arr[i];
            }
            if (arr[i] < lowest)
            {
                lowest = arr[i];
            }
        }
    }
    cout << "\nHighest: " << highest << endl;
    cout << "\nLowest: " << lowest << endl;
    
    return 0;
}