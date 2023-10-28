#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};
class queue
{
    Node *front, *rear;

public:
    queue()
    {
        front = rear = NULL;
    }
    void enqueue(int n)
    {
        Node *newnode = new Node(n);
        if (!newnode)
        {
            cout << "queue overflow";
            exit(1);
        }

        if (rear == NULL)
        {
            rear = front = newnode;
        }
        rear->next = newnode;
        rear = newnode;
    }
    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Empty Queue";
        }
        Node *newnode = front;
        front = front->next;
        if (front == NULL)
            rear == NULL;
        delete newnode;
    }
    void diplay()
    {
        Node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        if (temp == NULL)
            cout << "NULL";
    }
};
int main()
{
    queue s;
    s.enqueue(10);
    s.enqueue(10);
    s.enqueue(10);
    s.enqueue(1);
    s.enqueue(10);
    s.dequeue();
    s.dequeue();
    s.dequeue();
    s.diplay();
    return 0;
}