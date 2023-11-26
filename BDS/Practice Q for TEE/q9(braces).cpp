#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            if (st.empty())
            {
                cout << "Not balanced";
                return 0;
            }

            char openingBracket = st.top();

            if ((s[i] == ')' && openingBracket == '(') ||
                (s[i] == ']' && openingBracket == '[') ||
                (s[i] == '}' && openingBracket == '{'))
            {
                st.pop();
            }

            else
            {
                cout << "Not balanced";
                return 0;
            }
        }
    }

    if (st.empty())
    {
        cout << "Balanced";
    }
    else
    {
        cout << "Not balanced";
    }

    return 0;
}
