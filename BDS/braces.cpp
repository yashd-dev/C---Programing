#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string expr;

    cout << "Enter the expression: ";
    cin >> expr;
    char str[expr.length()];
    int c = 0;
    // str=a{b(c)[d]e{f}} now extract brackets from the string
    for (int i = 0; i < expr.length(); i++)
    {
        if (str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == '[' || str[i] == ']')
        {
            str[c] = expr[i];
            c++;
        }
    }
  
    stack<char> braces;
    for (int i = 0; i < c; i++)
    {
        if (braces.empty())
        {
            // If the stack is empty
            // just push the current bracketstr
            braces.push(str[i]);
        }

        else if ((braces.top() == '(' && str[i] == ')') || (braces.top() == '{' && str[i] == '}') || (braces.top() == '[' && str[i] == ']'))
        {

            // If we found any complete pair of bracket
            // then pop
            braces.pop();
        }
        else
        {
            braces.push(str[i]);
        }
    }
    if (braces.empty())
    {

        cout << "Balanced";
    }
    else
    {
        cout << "Not Balanced";
    }
    return 0;
}