#include <iostream>
using namespace std;

struct BankAccount
{
    long long int number;
    long double balance;
    string name;
};

void input(BankAccount &users)
{
    cin >> users.balance;
    cin >> users.name;
    cin >> users.number;
}

void output(BankAccount &users)
{
    cout << users.balance << endl;
    cout << users.name << endl;
    cout << users.number << endl;
}


int main()
{
    // very ew
    BankAccount users[2];
    for (int i = 0; i < 2; i++)
    {
        input(users[i]);
    }
    for (int i = 0; i < 2; i++)
    {
        output(users[i]);
    }

    return 0;
}