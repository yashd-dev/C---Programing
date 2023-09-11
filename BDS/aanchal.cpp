#include <iostream>
using namespace std;

int n = 5, top = -1, arr[5];
void push(int);
void pop();
void peek();
void display();

int main()
{
    int n, siz;
    cout << "Enter the siz of the stack: ";
    cin >> siz;
    for (int i = 0; i < siz; i++)
    {
        cout << "Enter elements: ";
        cin >> n;
        push(n);
        }
    cout << "Enter the new value: ";
    cin >> n;
    push(n);
    pop();
    peek();
    display();
}
void push(int value)
{
    if (top == n - 1)
    {
        cout << "Stack is full";
    }
    else
    {
        top++;
        arr[top] = value;
        cout << arr[top] << endl;
    }
}
void pop()
{

    if (top < 0)
    {
        cout << "Empty";
    }
    else
    {
        cout << arr[top] << endl;
        top--;
    }
}
void peek()
{
    if (top <= 0)
    {
        cout << "Empty";
    }
    else
    {
        cout << arr[top];
    }
}
void display()
{
    if (top < 0)
    {
        cout << "Empty";
    }
    else
    {
        for (int i = 0; i < top; i++)
        {
            cout << arr[i];
        }
    }
}