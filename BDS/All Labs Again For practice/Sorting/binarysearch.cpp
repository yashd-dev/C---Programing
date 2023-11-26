#include <iostream>
using namespace std;
int main()
{
    // In binnary search, you split the array in half and check if the element is in the first half or the second half, then you split that half in half and check again, you keep doing this till you find the element
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int ele = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    int mid, low = 0, high = n - 1;
    while (high >= low)
    {
        mid = (low + high) / 2;
        if (arr[mid] == ele)
        {
            cout << "Element found at index " << mid;
            break;
        }
        else if (arr[mid] > ele) // if the element is less than the mid element then it will be in the first half
        {
            high = mid - 1;
        }
        else // if the element is greater than the mid element then it will be in the second half
        {
            low = mid + 1;
        }
    }
    if (high < low)
    {
        cout << "Element not found";
    }

    return 0;
}