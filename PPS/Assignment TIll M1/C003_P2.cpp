// Rahul wants to appear in a competitive exam. To take the exam, there are following requirements:Minimum age limit is X(i.e.Age should be greater than or equal to X).Age should be strictly less than Y.Rahul's current Age is A. Find whether he is currently eligible to take the exam or not.

#include <iostream>
using namespace std;
int main()
{
    short int X, Y, A;
    cout << "Minimum Age: ";
    cin >> X;
    cout << endl;

    cout << "Maximum Age: ";
    cin >> Y;
    cout << endl;

    cout << "Rahul's Age: ";
    cin >> A;
    cout << endl;

    if (0 < X < 130 && 0 < Y < 130 && 0 < A < 130) // 130 is the maximum age of humans till date.
    {
        if (X <= A < Y)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
        cout << "\nInvalid Age\n";

    return 0;
}