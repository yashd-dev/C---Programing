#include <iostream>
using namespace std;
#define SIZE 69

int queue[SIZE], front = -1, rear = -1;

void peek(), enqueue(int num), dequeue();
bool ifFUll(), isEmpty();

int main()
{
    int num;
    cout << "Enter Elements to be pushed: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int n;
        cout << "\nEnter ELement at Index: " << i + 1;
        cin >> n;
        enqueue(n);
    }

    return 0;
}

bool isEmpty() // Check if the queue is empty
{
    return (rear == -1 && front == -1) || front > rear;
}

bool isFull() // Check if the queue is full
{
    return rear == 99;
}

void dequeue()
{
    int n = 0;
    if (!isEmpty())
    {
        n = queue[front];
        front++;
        cout << "Popped Number " << n << "From the queue";
    }
    else
    {
        cout << "Queue is Empty " << endl;
    }
}

void enqueue(int num)
{
    if (isEmpty())
    {
        rear++;
    }
    if (!isFull())
    {
        queue[rear] = num;
        rear++;
    }
    else
    {
        cout << "Queue is full";
    }
}