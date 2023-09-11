#include <iostream>
using namespace std;
int stack[100], n = 100, top = -1;

void push()
{
    if (top >= -1 && top < n)
    {
        cout << "Enter the element to be pushed";
        int val;
        cin >> val;
        ++top;
        stack[top] = val;
    }
    else
        cout << "\nWrong push stack";
}

void peek()
{
    if (top >= 0)
        cout << "The topmost element is " << stack[top] << endl;
    else
        cout << "\nWrong peek stack";
}

void pop()
{
    if (top >= 0)
    {
        cout << "The popped element is " << stack[top] << endl;
        top--;
    }
    else
        cout << "Wrong pop stack";
}

int main()
{
    int n;
    cout << "Enter num of Elements";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        push();
    }
    for (int i = 0; i < n; i++)
    {
        cout << stack[i] << " ";
    }

    peek();
    pop();
    pop();
    pop();

    return 0;
}