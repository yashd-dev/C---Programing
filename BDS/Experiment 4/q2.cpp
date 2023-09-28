#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main()
{
    string str;
    stack<char> braces;
    int c = 0;
    getline(cin, str);

    if (str != "")
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            {
                braces.push(str[i]);
            }
        }
        for (int i = 0; i < str.length(); i++)
        {
            if ((braces.top() == '(' && str[i] == ')') || (braces.top() == '{' && str[i] == '}') || (braces.top() == '[' && str[i] == ']'))
            {
                braces.pop();
            }
        }
        if (braces.empty())
        {
            cout << "Balanced";
        }
        else
        {
            cout << "Imbalanced";
            cout << braces.top();
        }
    }
    else
    {
        cout << "Invalid Input";
    }

    return 0;
}