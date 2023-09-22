#include <iostream>
using namespace std;
struct bank
{
    long int account_no;
    char name[50];
    float balance;
};

int main()
{
    cout << "Enter the number of accounts: ";
    int n;
    cin >> n;
    struct bank b[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\n-----------------\n";
        cout << "\nAccount " << i + 1;
        cout << "\nEnter the name of the account holder: ";
        cin.ignore();
        cin.getline(b[i].name, 50);
        cout << "\nEnter the account number: ";
        cin >> b[i].account_no;
        cout << "\nEnter the balance: ";
        cin >> b[i].balance;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\n-----------------\n";
        cout << "\nAccount " << i + 1;
        cout << "\nName: " << b[i].name;
        cout << "\nAccount Number: " << b[i].account_no;
        cout << "\nBalance: " << b[i].balance;
    }
    // The program must provide a search function that searches details of a particular bank account.

    cout << "\n\n\nEnter the account number to search: ";
    long int search;
    cin >> search;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i].account_no == search)
        {
            cout << "\nMatch found!";
            cout << "\n-----------------\n";
            cout << "\nAccount " << i + 1;
            cout << "\nName: " << b[i].name;
            cout << "\nAccount Number: " << b[i].account_no;
            cout << "\nBalance: " << b[i].balance;
            c++;
        }
    }
    if (c == 0)
    {
        cout << "\nNo match found!";
    }
    return 0;
}