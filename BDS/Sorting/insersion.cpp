#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key = 0;
    for (int step = 1; step < n; step++)
    {
        key = arr[step];
        int j = step - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}