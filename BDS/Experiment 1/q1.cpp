#include <iostream>
using namespace std;
int main()
{
    // Find the sum and Average of all the elements
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    int sum = 0;
    float avg = 0;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    avg = (float)sum / n;
    cout << "\nSum: " << sum << endl;
    cout << "\nAverage: " << avg << endl;

    return 0;
}