#include <iostream>
using namespace std;

// // ADT FOR LINEAR QUEUE

// int arr[100];
// int front = -1;
// int rear = -1;

// bool isEmpty();
// bool isFull();
// int dequeue();
// void enqueue(int);
// void peek();

// int main()
// {
//     int n, choice;
//     do
//     {
//         cout << "Enter a Option:\n1. Enqueue\n2. Dequeue\n3. Display\n4. CHeck if Empty\n5. CHeck for Full\n6. Quit " << endl;
//         cin >> choice;

//         switch (choice)
//         {

//         case 1:
//             cout << "Enter a Number to Insert: ";
//             cin >> n;
//             enqueue(n);
//             break;

//         case 2:
//             n = dequeue();
//             break;

//         case 3:
//             peek();

//         case 4:
//             if (isEmpty())
//                 cout << "Queue is empty\n";
//             else
//                 cout << "There is Space in \n";
//             break;

//         case 5:
//             if (isFull())
//                 cout << "Queue is Full\n";
//             else
//                 cout << "There is Space in\n";
//             break;

//         case 6:
//             break; // exits the code

//         default:
//             cout << "Invalid Input!!\n";
//         }
//     } while (choice != 6);
// }

// bool isEmpty() // Check if the queue is empty
// {
//     return (rear == -1 && front == -1) || front > rear;
// }

// bool isFull() // Check if the queue is full
// {
//     return rear == 99;
// }

// int dequeue() // Remove an element from the front of the queue
// {
//     int n = 0;
//     if (!isEmpty())
//     {
//         n = arr[front];
//         front++;
//         cout << "Popped Number " << n << "From the queue";
//         return n;
//     }
//     else
//     {
//         cout << "Queue is Empty " << endl;
//         return -1;
//     }
// }
// void enqueue(int n) // Add an element to the end of the queue
// {
//     if (isEmpty())
//     {
//         front++;
//     }
//     if (!isFull())
//     {
//         rear++;
//         arr[rear] = n;
//     }
//     else
//     {
//         cout << "Queue is full" << endl;
//     }
// }
// void peek() // Get the value of the front of the queue without removing it
// {
//     for (int i = front; i <= rear; i++)
//     {
//         cout << " " << arr[i] << endl;
//     }
// }

// CAlL CENTER CIRCULAR QUEUE

#define SIZE 10 // NUMBER OF CALLS

long long int calls[SIZE];
int front = -1;
int rear = -1;

bool isEmpty();
bool isFull();
void dequeue();
void enqueue(long long int);
void peek();

int main()
{
    cout << "Welcome to the Call Center\n";
    int ch;
    long long int n;
    do
    {
        cout << "Enter 1. Holding A call\n2. Picking up a call\n3. Show Pending Calls\n4. Exit\n";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter the number: ";
            cin >> n;
            if (n > 999999999 && n < 10000000000)
            {
                enqueue(n);
            }
            else
                cout << "\nInvalid Input";
            break;

        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        default:
            break;
        }
    } while (ch != 4);
}

bool isEmpty()
{
    if (front == -1)
        return true;
    else
        return false;
}

bool isFull()
{
    if (front == 0 && rear == SIZE - 1)
    {
        return true;
    }
    if (front == rear + 1)
    {
        return true;
    }
    return false;
}

void enqueue(long long int n)
{
    if (isFull())
    {
        cout << "\nQueue is full\n";
    }
    else
    {
        if (front == -1)
            front = 0;

        rear = (rear + 1) % SIZE; // after reaching the end, it goes back to 1st index
        calls[rear] = n;
        cout << endl
             << "\nInserted " << n << endl;
    }
}

void dequeue()
{
    int n;
    if (isEmpty())
    {
        cout << "\nQueue is empty" << endl;
    }
    else
    {
        n = calls[front];
        if (front == rear)
        {
            front = -1;
            rear = -1; // reseting the queue
        }

        else
        {
            front = (front + 1) % SIZE;
        }

        cout << "\nRemoving " << n << endl;
    }
}

void peek()
{
    int i;
    if (isEmpty())
    {
        cout << endl
             << "Empty Queue" << endl;
    }
    else
    {
        for (i = front; i != rear; i = (i + 1) % SIZE)
            cout << calls[i] << endl;
        cout << calls[i] << endl;
    }
}