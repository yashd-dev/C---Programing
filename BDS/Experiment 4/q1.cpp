#include <iostream>
using namespace std;
#define SIZE 69

int stack[SIZE], top = -1;
void push(int n), pop(), peek();

int main()
{
    int n, num;
    cout << "\nEnter Numbers to be pushed in stack:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element at index:" << i + 1;
        cin >> num;
        push(num);
    }
    cout << endl;
    return 0;
}

void push(int n)
{
    if (top >= -1 && top < SIZE)
    {
        top++;
        stack[top] = n;
    }
    else
    {
        cout << "\nStack Full!!";
    }
}
void pop()
{
    if (top > -1 && top < SIZE)
    {
        cout << "\nPooping Element: " << stack[top];
        top--;
    }
    else if (top == -1)
    {
        cout << "\nStack Empty";
    }
    else
    {
        cout << "\nStack Full";
    }
}

void peak()
{
    if (top > -1 && top < SIZE)
    {
        cout << "\nTop Element: " << stack[top];
    }
    else if (top == -1)
    {
        cout << "\nStack Empty";
    }
    else
    {
        cout << "\nStack Full";
    }
}