#include <iostream>
using namespace std;
// The toll center collects the toll in the order in which vehicles arrive at the toll. The number of vehicles arriving at the toll is not known.Identify the suitable data structure to implement the toll system where vehicles are served in the order of arrival.The system should cater to unlimited vehicles.

// I am going to be implementing a queue for this problem with a linked list
struct node
{
    string numberplate;
    node *next;
    node(string n)
    {
        numberplate = n;
        next = NULL;
    }
};
class queue
{
    node *front, *rear; // Pointer to first and last element of datatype node
public:
    queue() // Constructor that runs at the beginning
    {
        front = rear = NULL;
    }
    void enqueue(string n)
    {
        node *newnode = new node(n);
        if (!newnode)
        {
            cout << "Request Failed"; // new is a request to the compiler it can reject you, idhar bhi rejection :)
            return;
        }
        if (rear == NULL)
        {
            rear = front = newnode;
            return;
        }
        else
        {
            rear->next = newnode; // linking previous element and the curent element
            rear = newnode;
            rear->next = NULL; // End ke baad NULL aata hai :0
        }
    }
    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue is empty";
            return;
        }
        node *newnode = front;
        cout << "Removing " << newnode->numberplate << endl;
        front = front->next;
        delete newnode;

        if (front == NULL)
        {
            rear = NULL;
        }
    }
    void display()
    {
        if (front == NULL)
        {
            cout << "Empty Queue";
            return;
        }
        node *tempnode = front;
        while (tempnode != NULL)
        {
            cout << tempnode->numberplate << endl;
            tempnode = tempnode->next;
        }
    }
};

int main()
{
    queue q;
    int choice = 0;
    string numberplate;

    while (choice != 4)
    {
        cout << "Enter 1 to add a vehicle to the queue, 2 to remove a vehicle from the queue, 3 to display the queue, 4 to exit:\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the number plate of the vehicle to be added to the queue: ";
            cin >> numberplate;
            q.enqueue(numberplate);
            cout << endl;
            break;
        case 2:
            q.dequeue();
            cout << endl;
            break;
        case 3:
            q.display();
            cout << endl;
            break;
        case 4:
            cout << "Exiting...";
            break;
        default:
            cout << "Invalid choice";
            break;
        }
    }

    return 0;
}