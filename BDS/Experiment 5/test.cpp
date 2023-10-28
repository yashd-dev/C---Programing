#include <iostream>
using namespace std;
#define SIZE 10
int arr[SIZE];
int front = -1, rear = -1;
void enqueue(int n)
{
    if (front == -1)
    {
        front++;
    }
    if (rear == (SIZE - 1))
    {
        cout << "Queue is full";
        return;
    }
    rear++;
    arr[rear] = n;
}
void dequeue()
{
    if (front == -1)
    {
        cout << "Queue Is Empty";
        return;
    }
    if (rear == (SIZE - 1))
    {
        cout << "Queue is full";
        return;
    }
    cout << "Removing: " << arr[front];
    front++;
}
void display()
{
    if (front == -1)
    {
        cout << "Queue Is Empty";
        return;
    }
    if (rear == (SIZE - 1))
    {
        cout << "Queue is full";
        return;
    }
    int temp = front;
    cout << endl;
    while (temp != rear + 1)
    {
        cout << arr[temp] << " -> ";
        temp++;
    }
    if (temp == rear+1)
    {
        cout << "NULL";
    }
}
int main()
{
    enqueue(10);
    enqueue(9910);
    enqueue(0);
    enqueue(1);
    dequeue();
    display();
    return 0;
}