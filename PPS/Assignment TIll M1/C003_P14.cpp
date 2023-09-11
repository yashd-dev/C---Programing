#include <iostream>
using namespace std;
int main()
{
    unsigned int n, player1, player2, temp1 = 0, temp2 = 0;
    cout << "Enter Number Of Rounds: ";
    cin >> n;

    unsigned int lead1[n], lead2[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nRound " << i + 1 << ": ";
        cout << "\n\nEnter Score of Player 1: ";
        cin >> player1;
        cout << "\nEnter Score of Player 2: ";
        cin >> player2;

        if (player1 > player2) // Checking which player has led and putting how much they are leading with in their individual array
        {
            lead1[temp1] = player1 - player2;
            temp1++;
            cout << "\nPlayer 1 Leads by " << player1 - player2;
            cout << endl;
        }
        else
        {
            lead2[temp2] = player2 - player1;
            temp2++;
            cout << "\nPlayer 2 Leads by " << player2 - player1;
            cout << endl;
        }
        cout << endl;
    }
    player1 = 0;
    for (int i = 0; i < temp1; i++)
    {
        player1 += lead1[i]; // Summing how much they are leading with
    }

    player2 = 0;
    for (int i = 0; i < temp2; i++)
    {
        player2 += lead2[i];
    }

    if (player1 > player2) // Checking who won
    {
        cout << "\n\nPlayer 1 Wins!";
    }
    else
    {
        cout << "\n\nPlayer 2 Wins!";
    }

    return 0;
}