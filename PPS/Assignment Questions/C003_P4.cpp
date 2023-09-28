// In Fantasyland, everyone who earns strictly more than Y rupees per year, has to pay a tax to Seema. Seema has allowed a special scheme where you can invest any amount of money and claim exemption for it. You have earned X (X>Y) rupees this year. Find the minimum amount of money you have to invest so that you don't have to pay taxes this year.

#include <iostream>
using namespace std;
int main()
{
    int X, Y;
    cout << "Enter the Amount You earned: ";
    cin >> X;
    cout << endl;

    cout << "Enter the Minimum Amount For Taxes: ";
    cout << endl;

    cin >> Y;

    if (0 <= X && X > Y && 0 <= Y)
    {
        cout << "\nInvestment to be made: " << (X - Y);
    }
    else
    {
        cout << "\nIncorrect Values Entered, Try Again";
    }

    return 0;
}