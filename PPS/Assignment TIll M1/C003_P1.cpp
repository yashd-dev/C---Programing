// Saif and Kareena are playing with dice.In one turn, both of them roll their dice at once.They consider a turn to be good if the sum of the numbers on their dice is greater than 6. Given that in a particular turn Saif and Kareena got X and Y on their respective dice, find whether the turn was good.

#include <iostream>
using namespace std;
int main()
{
    short int saif, kareena, sum;
    cout << endl;

    cout << "Enter the Number on Dice for Saif: ";
    cin >> saif;
    cout << endl;

    cout << "Enter the Number on Dice for Kareena: ";
    cin >> kareena;
    cout << endl;

    if (0 < saif < 7 && 0 < kareena < 7)
    {
        sum = saif + kareena;
        if (sum > 6)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
        cout << "Incorrect Input";

    return 0;
}