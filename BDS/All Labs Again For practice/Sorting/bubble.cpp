#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 2, 1, 4, 3, 6, 7, 8, 9, 10};
    bool flag;
    int temp = 0;
    int count = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        flag = false;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = true;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        count++;
        if (!flag)
        {
            break;
        }
    }
    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout
        << count;

    return 0;
}