#include <iostream>
using namespace std;
int main()
{
    // 3.	WAP to print array using pointer
    
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