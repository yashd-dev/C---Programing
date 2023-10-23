#include <iostream>
using namespace std;
int main()
{
    string roman;
    getline(cin, roman);
    int count = 0;
    while (roman[count] != '\0')
    {
        count++;
    }
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        switch (roman[i])
        {
        case 'I':
            arr[i] = 1;
            break;
        case 'V':
            arr[i] = 5;
            break;
        case 'X':
            arr[i] = 10;
            break;
        case 'L':
            arr[i] = 50;
            break;
        case 'C':
            arr[i] = 100;
            break;
        case 'D':
            arr[i] = 500;
            break;
        case 'M':
            arr[i] = 1000;
            break;
        }
    }
    int res = 0;
    for (int i = count - 1; i >= 0; i--)
    {
        if ((arr[i] > arr[i - 1]) && (i - 1 != -1))
        {
            res += (arr[i] - arr[i - 1]);
            i--;
        }
        else
            res += arr[i];
    }
    cout << res;
    return 0;
}