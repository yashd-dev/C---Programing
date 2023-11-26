#include <iostream>
using namespace std;
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int num), pop(), peak();

int main()
{
    int ele;
    int choice = 0;
    while (choice != 4)
    {
        cout << "Enter 1 for push, 2 for pop, 3 for peak";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter A Number to push ";
            cin >> ele;
            push(ele);
            break;
        case 2:
            pop();
            break;
        case 3:
            peak();
            break;
        }
    }

    return 0;
}
void push(int num)
{
    if (top >= 1 && top < SIZE)
    {
        top++;
        stack[top] = num;
    }
    else
    {
        cout << "STack Full";
    }
}

void pop()
{
    if (top > -1 && top < SIZE)
    {
        top--;
        return;
    }
    else if (top == -1)
    {
        cout << "Empty";
    }
    else
    {
        cout << "Stack Full";
    }
}

void peak()
{
    if (top > -1 && top < SIZE)
    {
        cout << stack[top];
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


