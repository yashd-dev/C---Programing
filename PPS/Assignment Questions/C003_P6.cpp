// There is an ATM machine. Initially, it contains a total of K units of money. N people (numbered 1 through N) want to withdraw money; for each valid i the i-th person wants to withdraw Ai units of money. The people come in and try to withdraw money one by one, in the increasing order of their indices. Whenever someone tries to withdraw money, if the machine has at least the required amount of money, it will give out the required amount. Otherwise, it will throw an error and not give out anything; in that case, this person will return home directly without trying to do anything else. For each person, determine whether they will get the required amount of money or not.

#include <iostream>
using namespace std;
int main()
{
    int K, amount;
    cout << "Enter Total Money in ATM: ";
    cin >> K;
    cout << endl;

    int N;
    cout << "Enter Total Number of People: ";
    cin >> N;
    cout << endl;
    if (0 < N && 0 < K)
    {
        for (int i = 0; i < N; i++)
        {
            cout << endl;
            cout << "\n\n\nEnter Amount: ";
            cin >> amount;
            cout << endl;

            if (0 <= amount && amount <= K)
            {
                K -= amount;
                cout << "Can Withdraw \n\nAmount Left:" << K;
                cout << endl;
            }
            else
            {
                cout << "Cant Withdraw";
                cout << endl;
            }
        }
    }
    else
    {
        cout << "Error! Incorrect Input";
    }

    return 0;
}