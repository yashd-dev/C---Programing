#include <iostream>
using namespace std;

void jk(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}


int main()
{
    int a = 0;
    int b = 9;
    int c = 69;

    int *pA;
    pA = &a;
    cout << *pA;
    a = 69;
    cout << *pA;
    int n = 5;
    int arr[] = {1, 2, 3, 5, 6};
    cout << endl;
    jk(arr, n);
    return 0;
}