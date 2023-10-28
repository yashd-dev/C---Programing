#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = rear = NULL;
    }
    ~Queue()
    {
        while (front)
        {
            Node *temp = front;
            front = front->next;
            delete temp;
        }
    }
    
    void enqueue(int value)
    {
        Node *newNode = new Node(value);
        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        Node *temp = front;
        front = front->next;
        delete temp;
        if (!front)
        {
            rear = NULL;
        }
    }

    int frontValue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. Cannot get front element." << endl;
            return -1; // You can choose an appropriate value to indicate an error.
        }
        return front->data;
    }
    void traverse()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. Cannot traverse." << endl;
            return;
        }
        Node *temp = front;
        while (temp)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    bool isEmpty()
    {
        return front == NULL;
    }
};

int main()
{
    Queue queue;
    int choice, value;

    do
    {
        cout << "Queue Menu:" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Traverse" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter a value to enqueue into the queue: ";
            cin >> value;
            queue.enqueue(value);
            break;
        case 2:
            queue.dequeue();
            break;
        case 3:
            cout << "Front of the queue: " << queue.frontValue() << endl;
            break;
        case 4:
            queue.traverse();
            break;
        case 0:
            cout << "Exiting the queue program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
