#include <iostream>
using namespace std;
#define SIZE 10

int queue[SIZE];
int front = -1, rear = -1;
void enqueue(), dequeue(), peak();
int main()
{
    int choice = 0;
    while (choice != 4)
    {
        cout << "ENter 1 for enqueue,2 for dequeue, 3 for peak 4 for exit";
        cin >> choice;

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case2:
            dequeue();
            break;
        case 3:
            peak();
            break;
        default:
            break;
        }
    }
    return 0;
}

void enqueue()
{
    cout << "Enter element";
    int ele;
    cin >> ele;

    if (front == -1)
    {
        front++;
    }
    else if (rear >= -1 && rear < SIZE)
    {
        rear++;
        queue[rear];
    }
    else
    {
        cout << "Queue full";
    }
}

void dequeue()
{
    if (front == -1)
    {
        cout << "Empty Queue";
    }
    else if (rear >= -1 && rear < SIZE)
    {
        front++;
    }
    else
    {
        cout << "Queue full";
    }
}

void peak()
{
}