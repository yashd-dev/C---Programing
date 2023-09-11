// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cout << "\nEnter The Size of Array:";
// //     cin >> n;
// //     cout << endl;

// //     float arr[n + 1], user_val;
// //     cout << "Enter Values of array : ";
// //     cout << endl;
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << "Value at index " << i << ": ";
// //         cin >> arr[i];
// //         cout << endl;
// //     }
// //     cout << "Enter Index value of array to be changed : ";
// //     int user_n;
// //     cin >> user_n;
// //     int len = n + 1;
// //     if (user_n < len)
// //     {
// //         cout << "Enter value to change: ";
// //         cin >> user_val;
// //         cout << "\nNew array:\n";
// //         for (int i = n; i >= user_n; i--)
// //         {
// //             arr[i] = arr[i - i];
// //         }
// //         arr[user_n] = user_val;
// //         for (int i = 0; i < len; i++)
// //         {
// //             cout << "Value at index " << i << ": " << arr[i];
// //             cout << endl;
// //         }
// //     }
// //     else
// //     {
// //         cout << "Enter a valild term";
// //     }
// //     return 0;
// // }

// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int n;
// // //     cout << "\nEnter The Size of Array:";
// // //     cin >> n;
// // //     cout << endl;

// // //     float arr[n];
// // //     cout << "Enter Values of array : ";
// // //     cout << endl;
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         cout << "Value at index " << i << ": ";
// // //         cin >> arr[i];
// // //         cout << endl;
// // //     }
// // //     int len = (sizeof(arr) / sizeof(arr[0])) - 1;
// // //     cout << "Enter The value to change at the end of the array:";
// // //     cin >> arr[len];
// // //     cout << endl;
// // //     cout << "The new array:";
// // //     cout << endl;
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         cout << "\nValue at index " << i << ": " << arr[i];
// // //         cout << endl;
// // //     }
// // //     return 0;
// // // }

// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int n;
// // //     cout << "\nEnter The Size of Array:";
// // //     cin >> n;
// // //     cout << endl;

// // //     float arr[n];
// // //     cout << "Enter Values of array : ";
// // //     cout << endl;
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         cout << "Value at index " << i << ": ";
// // //         cin >> arr[i];
// // //         cout << endl;
// // //     }
// // //     int len = (sizeof(arr) / sizeof(arr[0])) - 1;
// // //     cout << "Removing The value at the end of the array:";
// // //     arr[len] = 0;
// // //     cout << endl;
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         cout << "\nValue at index " << i << ": " << arr[i];
// // //         cout << endl;
// // //     }
// // //     return 0;
// // // }

// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int i, ele, n;
// //     cout << "\nEnter The Size of Array:";
// //     cin >> n;
// //     int arr[n + 1];
// //     cout << endl;

// //     for (i = 0; i < n; i++)
// // {
// //     cout << "Enter eleent at Index " << i << ": ";
// //     cin >> arr[i];
// //     cout << endl;
// // }

// //     cout << "\nEnter eleent to Insert at end: ";
// //     cin >> ele;
// //     arr[n] = ele;

// //     cout << "\nThe New Array is:\n";
// //     for (i = 0; i <= n; i++)
// //         cout << arr[i] << "  ";
// //     cout << endl;

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int i, ele, pos, n;
// //     cout << "Enter the Size for Array: ";
// //     cin >> n;
// //     cout << endl;
// //     int arr[n + 1];

// //     cout << "Enter " << n << " Array eleents: ";
// //     for (i = 0; i < n; i++)
// //     {
// //         cout << "Enter eleent at Index " << i << ": ";
// //         cin >> arr[i];
// //         cout << endl;
// //     }

// //     cout << "\nEnter Element to Insert: ";
// //     cin >> ele;
// //     cout << endl;

// //     cout << "Enter Position to Insert: ";
// //     cin >> pos;
// //     cout << endl;

// //     for (i = n + 1; i >= pos; i--)
// //         arr[i] = arr[i - 1];
// //     arr[i] = ele;

// //     cout << "\nThe New Array is:\n";
// //     for (i = 0; i <= n; i++)
// //         cout << arr[i] << "  ";

// //     cout << endl;
// //     return 0;
// // }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, ele, pos, n;
//     cout << "Enter the Size for Array: ";
//     cin >> n;
//     cout << endl;
//     int arr[n + 1];

//     cout << "Enter " << n << " Array eleents: ";
//     for (i = 0; i < n; i++)
//     {
//         cout << "Enter elements at Index " << i << ": ";
//         cin >> arr[i];
//         cout << endl;
//     }

    
//     return 0;
// }