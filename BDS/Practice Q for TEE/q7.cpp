// A fast-food drive-through restaurant serves customers in the order they arrive. The number of customers arriving at the drive-through is not known, and the restaurant wants to implement a system to serve an unlimited number of customers. Identify a suitable data structure to implement this drive-through system where customers are served in the order of arrival

// A supermarket has multiple checkout counters, and customers arrive randomly to check out their items. The supermarket wants to implement a system to manage the queue of customers waiting at each checkout counter. The customers should be served in the order they arrived at their respective counters. Write a program to manage the customer queue for one of the checkout counters.

// A ticket reservation system for a popular event needs to handle an unknown number of ticket reservations. Customers can reserve tickets, and reservations should be processed in the order they are received. Identify a suitable data structure to implement this ticket reservation system where reservations are processed in the order of arrival.

// An airport has multiple security checkpoints, and passengers arrive randomly to go through security checks. The airport wants to implement a system to manage the queues of passengers waiting at each security checkpoint. Passengers should be processed in the order they arrive at their respective checkpoints. Write a program that simulates this airport security check system for one of the security checkpoints

// All are similar too lazy cant be asked :)

// Currently Solving 1st vala the fastfood one

#include <iostream>

using namespace std;

struct Node
{
    int data; // Assuming data here is customer number
    Node *next;
    Node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};

class Queue
{
    Node *front, *rear;

public:
    Queue()
    {
        front = rear = NULL;
    }
    void enqueue(int n)
    {
        Node *newnode = new Node(n);
        if (!newnode)
        {
            cout << "New Node could not be made, compiler denied it";
            return;
        }
        if (front == NULL)
        {
            front = rear = newnode;
            return;
        }
        else
        {
            rear->next = newnode;
            rear = newnode;
            rear->next = NULL;
            return;
        }
    }
    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue is Empty";
            return;
        }
        else
        {
            Node *tempnode = front;
            cout << "Customer " << front->data << " has been served";
            front = front->next;
            delete tempnode;
        }
    }
    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is Empty";
            return;
        }
        else
        {
            Node *tempnode = front;
            cout << "Order of Customers:\n";
            while (tempnode != NULL)
            {
                cout << tempnode->data << " ";
                tempnode = tempnode->next;
            }
        }
    }
};

int main()
{

    int choice = 0;
    Queue q;
    while (choice != 4)
    {
        cout << "\n\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int n;
            cout << "Enter the customer number: ";
            cin >> n;
            q.enqueue(n);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            cout << "Exiting...";
            break;
        default:
            cout << "Invalid Choice";
            break;
        }
    }

    return 0;
}