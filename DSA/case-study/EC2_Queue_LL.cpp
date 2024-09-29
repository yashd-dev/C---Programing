#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
     T data;
     Node *next;

     Node(T data)
     {
          this->data = data;
          this->next = nullptr;
     }
};

template <typename T>
class Queue
{
     Node<T> *head;
     Node<T> *tail;

public:
     Queue()
     {
          this->head = nullptr;
          this->tail = nullptr;
     }

     ~Queue()
     {
          Node<T> *temp = head;
          while (temp != nullptr)
          {
               Node<T> *tempagain = temp;
               temp = temp->next;
               delete tempagain;
          }
     }

     void enqueue(T data)
     {
          Node<T> *newNode = new Node<T>(data);
          if (head == nullptr)
          {
               head = newNode;
               tail = newNode;
          }
          else
          {
               tail->next = newNode;
               tail = newNode;
          }
     }

     void dequeue()
     {
          if (head == nullptr)
          {
               cout << "Queue is empty. Nothing to delete." << endl;
               return;
          }
          Node<T> *temp = head;
          head = head->next;
          if (head == nullptr)
          {
               tail = nullptr;
          }
          delete temp;
     }

     T peek()
     {
          if (head == nullptr)
          {
               cout << "Queue is empty. Nothing to peek." << endl;
               return T();
          }
          return head->data;
     }

     void print()
     {
          Node<T> *temp = head;
          if (temp == nullptr)
          {
               cout << "Queue is empty." << endl;
               return;
          }
          while (temp != nullptr)
          {
               cout << temp->data << "->";
               temp = temp->next;
          }
          cout << "NULL" << endl;
     }

     bool isEmpty()
     {
          return head == nullptr;
     }
};

int main()
{
     Queue<int> q;
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
               if (!q.isEmpty())
               {
                    cout << "The next request size is: " << q.peek() << " bytes" << endl;
                    cout << "All pending requests: ";
                    q.print();
               }
               else
               {
                    cout << "No pending requests." << endl;
               }
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
