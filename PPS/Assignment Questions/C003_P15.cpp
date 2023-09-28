// Anukampa decided to buy a new tablet.His budget is B, so he cannot buy a tablet whose price is greater than B.Other than that, he only has one criterion — the area of the tablet's screen should be as large as possible.  Of course, the screen of a tablet is always a rectangle.Anukampa has visited some tablet shops and listed all of his options.In total, there are N available tablets, numbered 1 through N.For each valid i, the i - th tablet has width Wi, height Hi and price Pi.Help Anukampa choose a tablet which he should buy and find the area of such a tablet's screen, or determine that he cannot buy any tablet. Diplay "No tablet" if he cannot buy any tablet.

#include <iostream>
using namespace std;

int main()
{
    unsigned int n, b;
    cout << "Enter Number of Tablets: ";
    cin >> n;

    cout << "\nEnter Budget: ";
    cin >> b;

    unsigned int wi, hi, pi, area = 0, flag = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << "\nEnter Width, Height, and Price for Tablet number " << i + 1 << ": ";
        cin >> wi >> hi >> pi;

        if ((wi * hi) > area && pi <= b)
        {
            area = wi * hi;
            flag=flag+1;
        }
    }
    if (flag > 0)
        cout << "\n"
             << area;
    else
        cout << "\nNo Tablet";

    return 0;
}