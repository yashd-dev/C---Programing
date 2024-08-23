#include <iostream>
using namespace std;

class Queue
{
     static const int sizee = 2;
     int arr[sizee];
     int front = -1;
     int rear = -1;

public:
     bool isFull()
     {
          return (front == (rear + 1) % sizee);
     }

     bool isEmpty()
     {
          return (front == -1);
     }

     void enqueue(int n)
     {
          if (isFull())
          {
               cout << "\nQueue is full\n";
          }
          else
          {
               if (isEmpty())
               {
                    front = 0;
               }
               rear = (rear + 1) % sizee;
               arr[rear] = n;
               cout << "\nInserted " << n << endl;
          }
     }

     void dequeue()
     {
          if (isEmpty())
          {
               cout << "\nQueue is empty\n";
          }
          else
          {
               int n = arr[front];
               if (front == rear)
               {
                    front = -1;
                    rear = -1;
               }
               else
               {
                    front = (front + 1) % sizee;
               }
               cout << "\nRemoved " << n << endl;
          }
     }

     void display()
     {
          if (isEmpty())
          {
               cout << "\nQueue is empty\n";
          }
          else
          {
               cout << "\nQueue elements are: ";
               int i = front;
               while (true)
               {
                    cout << arr[i] << " ";
                    if (i == rear)
                         break;
                    i = (i + 1) % sizee;
               }
               cout << endl;
          }
     }
};

int main()
{
     Queue q;
     int choice, value;

     do
     {
          cout << "\nQueue Operations Menu";
          cout << "\n1. Enqueue";
          cout << "\n2. Dequeue";
          cout << "\n3. Display";
          cout << "\n4. Exit";
          cout << "\nEnter your choice: ";
          cin >> choice;

          switch (choice)
          {
          case 1:
               cout << "\nEnter value to enqueue: ";
               cin >> value;
               q.enqueue(value);
               break;
          case 2:
               q.dequeue();
               break;
          case 3:
               q.display();
               break;
          case 4:
               cout << "\nExiting...\n";
               break;
          default:
               cout << "\nInvalid choice. Please try again.\n";
               break;
          }

     } while (choice != 4);

     return 0;
}
