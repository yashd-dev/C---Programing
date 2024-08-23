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
class LL
{
     Node<T> *head;

public:
     LL()
     {
          this->head = nullptr;
     }

     ~LL()
     {
          Node<T> *temp = head;
          while (temp != nullptr)
          {
               Node<T> *tempagain = temp;
               temp = temp->next;
               delete tempagain;
          }
     }

     void insert(T data)
     {
          Node<T> *newNode = new Node<T>(data);
          if (head == nullptr)
          {
               head = newNode;
          }
          else
          {
               Node<T> *temp = head;
               while (temp->next != nullptr)
               {
                    temp = temp->next;
               }
               temp->next = newNode;
          }
     }

     void insertAt(int index, T data)
     {
          Node<T> *newNode = new Node<T>(data);
          if (index == 0)
          {
               newNode->next = head;
               head = newNode;
               return;
          }
          Node<T> *temp = head;
          for (int i = 1; i < index; i++)
          {
               if (temp->next == nullptr)
               {
                    cout << "Index out of bounds" << endl;
                    delete newNode;
                    return;
               }
               temp = temp->next;
          }
          newNode->next = temp->next;
          temp->next = newNode;
     }

     void deleteBeginning()
     {
          if (head == nullptr)
          {
               cout << "List is empty. Nothing to delete." << endl;
               return;
          }
          Node<T> *temp = head;
          head = head->next;
          delete temp;
     }

     void deleteEnd()
     {
          if (head == nullptr)
          {
               cout << "List is empty. Nothing to delete." << endl;
               return;
          }

          if (head->next == nullptr)
          {
               delete head;
               head = nullptr;
               return;
          }

          Node<T> *temp = head;
          while (temp->next->next != nullptr)
          {
               temp = temp->next;
          }

          delete temp->next;
          temp->next = nullptr;
     }

     void deleteAt(int index)
     {
          if (index == 0)
          {
               deleteBeginning();
               return;
          }

          Node<T> *temp = head;
          for (int i = 1; i < index; i++)
          {
               if (temp->next == nullptr)
               {
                    cout << "Index out of bounds" << endl;
                    return;
               }
               temp = temp->next;
          }

          Node<T> *tempagain = temp->next;
          if (tempagain != nullptr)
          {
               temp->next = tempagain->next;
               delete tempagain;
          }
          else
          {
               cout << "Index out of bounds" << endl;
          }
     }

     void print()
     {
          Node<T> *temp = head;
          if (temp == nullptr)
          {
               cout << "List is empty." << endl;
               return;
          }
          while (temp != nullptr)
          {
               cout << temp->data << "->";
               temp = temp->next;
          }
          cout << "NULL" << endl;
          cout << endl;
     }
};

int main()
{
     LL<int> list;
     int choice, data, index;

     cout << "Welcome to the Linked List Menu" << endl;

     do
     {
          cout << "1. Insert at end" << endl;
          cout << "2. Insert at index" << endl;
          cout << "3. Delete at beginning" << endl;
          cout << "4. Delete at end" << endl;
          cout << "5. Delete at index" << endl;
          cout << "6. Print list" << endl;
          cout << "7. Exit" << endl;
          cout << "Enter your choice: ";
          cin >> choice;

          switch (choice)
          {
          case 1:
               cout << "Enter the element to be inserted at the end: ";
               cin >> data;
               list.insert(data);
               break;
          case 2:
               cout << "Enter the index at which you want to insert: ";
               cin >> index;
               cout << "Enter the element to be inserted: ";
               cin >> data;
               list.insertAt(index, data);
               break;
          case 3:
               list.deleteBeginning();
               break;
          case 4:
               list.deleteEnd();
               break;
          case 5:
               cout << "Enter the index at which you want to delete: ";
               cin >> index;
               list.deleteAt(index);
               break;
          case 6:
               list.print();
               break;
          case 7:
               cout << "Exiting..." << endl;
               break;
          default:
               cout << "Invalid choice. Please enter a valid choice." << endl;
               break;
          }
          cout << endl;
     } while (choice != 7);

     return 0;
}
