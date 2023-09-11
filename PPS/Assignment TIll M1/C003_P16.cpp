// Sahil and his friend Dev is standing on the X-axis at the points X1 and X2 respectively.
// Sahil moves one step forward each second (that is he moves to X1+1 after the 1st second, X1+2 after the 2nd second, and so on),
// whereas his friend Dev moves 2 steps forward each second (that is he moves to X2+2 after the 1st second, X2+4 after the 2nd second, and so on).
// You need to determine if Sahil will be able to meet his friend Dev or not.
// You can assume that Sahil and his friend Dev both keep on moving for a long indefinite amount of time and also that they move simultaneously.

#include <iostream>
using namespace std;
int main()
{
    int x1, x2;
    cout << "\nEnter Steps Taken by Sahil: ";
    cin >> x1;
    cout << "\nEnter Steps Taken by Dev: ";
    cin >> x2;
    if (x1 > x2 && x1 != x2)
    {
        while (true)
        {
            x1++;
            x2 += 2;
            if (x1 == x2)
            {
                cout << "\nYes";
                return 0;
            }

            else if (x2 > x1)
            {
                cout << "\nNo";
                return 0;
            }
        }
    }
    else
        cout << "\nNo";

    return 0;
}