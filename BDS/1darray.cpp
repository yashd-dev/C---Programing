// #include <iostream>
// using namespace std;
// int main()
// {
//     int n; // number of elements
//     cout << "\nEnter the length of the array: ";
//     cin >> n;              // taking the number of elements

//     float arr[n], sum = 0; // initialization of array and sum

//     for (int i = 0; i < n; i++)
//     {
//         cout << "\nEnter the element of the array at " << i + 1 << " :";
//         cin >> arr[i]; // Taking element of the array from the user
//     }

//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i]; // Finding the sum of the elements of the array
//     }

//     float avg = sum / (float)n;
//     cout << "The average is: " << avg;

//     float min = arr[0], max = arr[0];

//     for (int i = 1; i < n; i++)
//     {
//         if (min >= arr[i])
//             min = arr[i];
//         if (max <= arr[i])
//             max = arr[i];
//     }
//     cout << "\nThe Maximum value is: " << max << "\nThe Minimal value is: " << min;
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;
struct bank
{
    char name[50];
    int id;
    float balance;
} a[100];
int main()
{
    int n = 0;
    cout << "\nEnter the number of account u want to store: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\nAccount " << i + 1;
        cout << "\nEnter your name: ";
        cin.ignore();
        cin.getline(a[i].name, 50);
        cout << "\nEnter your id: ";
        cin >> a[i].id;
        cout << "\nEnter your balance: ";
        cin >> a[i].balance;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\nAccount " << i + 1;
        cout << "\nName: " << a[i].name;
        cout << "\nId: " << a[i].id;
        cout << "\nBalance: " << a[i].balance;
    }
    return 0;
}