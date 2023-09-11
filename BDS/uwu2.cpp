// WAP to delete an element in an array at a specific element
#include <iostream>
using namespace std;
int main()
{
    int element, num, pos;
    cout << "Please enter the number of elements: ";
    cin >> num;
    int arr[num];
    cout << "Please enter an array: " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Please enter the element you wish to delete: ";
    cin >> element;
    for (int i = 0; i <= num - 1; i++)
    {
        if (element == arr[i])
        {
            for (int j = i; j <= num - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }
    for (int i = 0; i <= num - 1; i++)
    {
        cout << arr[i] << endl;
    }
}