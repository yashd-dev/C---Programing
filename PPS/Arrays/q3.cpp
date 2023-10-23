#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Integer Array Size";
    cin >> n;
    int arr[n];
    int *Arr = arr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << *(Arr + i);
    }

    return 0;
}