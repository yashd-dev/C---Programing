#include <iostream>
using namespace std;

class Queue
{
     int arr[100];
     int front = -1;
     int rear = -1;

public:
     bool isEmpty()
     {
          return (rear == -1 && front == -1) || front > rear;
     }
     bool isFull()
     {
          return rear == 99;
     }
     void enqueue(int n)
     {
          if (isEmpty())
          {
               front++;
          }
          if (!isFull())
          {
               rear++;
               arr[rear] = n;
          }
          else
          {
               cout << "Queue is Full";
          }
     }
     void dequeue()
     {

          int n = 0;
          if (!isEmpty())
          {
               n = arr[front];
               cout << "Processing " << n << " bytes..." << endl;
               front++;
               cout << "Done!" << endl;
          }
          else
          {
               cout << "Queue is Full";
          }
     }
     void peek()
     {
          for (int i = front; i <= rear; i++)
          {
               cout << "Packet Number: " << i << " : " << arr[i] << endl;
          }
     }
};

int main()
{
     Queue q;
     int choice, value;

     do
     {
          cout << "Welcome to Yash's EC2 Instance:" << endl;
          cout << "1. Receive A Request" << endl;
          cout << "2. Process A Request" << endl;
          cout << "3. See all Pending Requests" << endl;
          cout << "4. Shut Down The Server" << endl;
          cout << "Enter your choice: ";
          cin >> choice;
          cout << endl;

          switch (choice)
          {
          case 1:
               cout << "Enter The request size in bytes: ";
               cin >> value;
               cout << endl;
               q.enqueue(value);
               break;
          case 2:
               q.dequeue();
               break;
          case 3:
               q.peek();
               break;
          case 4:
               cout << "Shutting The Server Down..." << endl;
               break;
          default:
               cout << "Invalid choice, please try again." << endl;
          }
          cout << endl;
     } while (choice != 4);
     return 0;
}
