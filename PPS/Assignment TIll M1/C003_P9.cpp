// No play and eating all day makes your belly fat.This happened to Krish during the lockdown.His weight before the lockdown was w1 kg(measured on the most accurate hospital machine) and after M months of lockdown, when he measured his weight at home(on a regular scale, which can be inaccurate), he got the result that his weight was w2 kg(w2 > w1).
// Scientific research in all growing kids shows that their weights increase by a value between x1 and x2 kg(inclusive)
// per month, but not necessarily the same value each month.Krish assumes that he is a growing kid.Tell him whether his home scale could be giving correct results.

#include <iostream>
using namespace std;

int main()
{
    float w1, w2, x1, x2, m;
    cout << "\nEnter W1:";
    cin >> w1;

    cout << "\nEnter W2:";
    cin >> w2;

    cout << "\nEnter Month";
    cin >> m;

    float increase = w2 - w1;

    cout << "\nEnter X1:";
    cin >> x1;

    cout << "\nEnter X2:";
    cin >> x2;

    if ((x1 * m) <= increase && increase <= (m * x2))
    {
        cout << "\nCorrect results";
    }
    else
        cout << "\nIncorrect";
    return 0;
}
