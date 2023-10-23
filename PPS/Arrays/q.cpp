#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //[3,2,7,1]
    //[7,2,3,1]
    

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     // cout << arr[i] + 1 << " " << arr[i + 1] << endl;
    //     if (((arr[i] + 1) != arr[i + 1]) && (i + 1 != n))
    //     {
    //         int j = i;
    //         while ((arr[j] + 1) != arr[i + 1])
    //         {
    //             cout << arr[i] + 1 << endl;
    //             j++;
    //         }
    //     }
    //     // [1,2,4,6,9]
    // }

    return 0;
}