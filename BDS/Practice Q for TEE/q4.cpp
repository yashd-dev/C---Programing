#include <iostream>
using namespace std;

string encode();
string decode();

int main()
{
    string str;
    int choice = 0; // Initialize choice to avoid undefined behavior

    while (choice != 3)
    {
        str = "";
        cout << "1. Encode\n2. Decode\n3. Exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            str = encode();
            cout << "Encoded string: " << str << endl;
            break;
        case 2:
            str = decode();
            cout << "Decoded String: " << str << endl;
            break;
        case 3:
            break;
        default:
            cout << "Invalid choice\n";
            break;
        }
    }

    return 0;
}

string encode()
{
    string str;
    cout << "Enter string to encode: ";
    cin.ignore();
    getline(cin, str);
    string encoded = "";

    for (int i = str.length() - 1; i >= 0; i--)
    {
        encoded += str[i];
    }

    return encoded;
}

string decode()
{
    string str;
    cout << "Enter string to decode: ";
    cin.ignore();
    getline(cin, str);
    string decoded = "";

    for (int i = str.length() - 1; i >= 0; i--)
    {
        decoded += str[i];
    }
    return decoded;
}
