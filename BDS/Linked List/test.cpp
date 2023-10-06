#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};
class Stack
{
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }
    void push(int n)
    {
        Node *temp = new Node(n);

        if (!temp) // NUll ka opposite is true
        {
            cout << "\nStack Overflow";
            return;
        }

        temp->data = n;
        temp->next = top;
        top = temp;
    }

    void peak()
    {
        if (top == NULL)
        {
            cout << "No Elements present";
            return;
        }
        cout << top->data;
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << "No Elements present";
            exit(1);
        }
        Node *temp = top;
        top = top->next; // Update the top pointer to the next node
        delete temp;     // Delete the top node
    }
    void display()
    {
        if (top == NULL)
        {
            cout << "No Elements present";
            return;
        }
        Node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        if (temp == NULL)
        {
            cout << "NULL";
        }
    }
};
int main()
{
    Stack s;
    s.push(69);
    s.push(9);
    s.push(84);
    s.push(2);
    s.push(94);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.display();
    return 0;
}