#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value) {
        data=value;
        next=NULL;
    }
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }
    ~Stack()
    {
        while (top)
        {
            Node *temp = top;
            top = top->next;
            delete temp;
        }
    }

    void push(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }
        Node *temp = top;
        top = top->next;
        delete temp;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot peek." << endl;
            return -1; // You can choose an appropriate value to indicate an error.
        }
        return top->data;
    }
    void traverse()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot traverse." << endl;
            return;
        }
        Node *current = top;
        while (current)
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
    bool isEmpty()
    {
        return top == NULL;
    }
};

int main()
{
    Stack stack;
    int choice, value;
    do
    {
        cout << "Stack Menu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout<<"4. Traverse"<<endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter a value to push onto the stack: ";
            cin >> value;
            stack.push(value);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            cout << "Top of the stack: " << stack.peek() << endl;
            break;
        case 4:
            stack.traverse();
            break;
        case 0:
            cout << "Exiting the stack program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
