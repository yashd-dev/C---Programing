#include <iostream>
using namespace std;
// Use binary search to find the index of the name "John" in a sorted list of names: Alice, Bob, David, John, Lisa, Mark, Sarah, and Tom.
int main()
{
    string names[8] = {"Alice", "Bob", "David", "John", "Lisa", "Mark", "Sarah", "Tom"};
    int low = 0, high = 7, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (names[mid] == "John")
        {   
            cout << "Index of John is " << mid << endl;
            return 0;
        }
        else if (names[mid] < "John")
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "John not found in the list." << endl;
    return 0;
}