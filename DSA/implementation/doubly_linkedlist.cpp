// Doubly Linked List Insertion at front,rear,at position

#include <iostream>
using namespace std;

class Node
{
public:
     int data;
     Node *next;
     Node *prev;

     Node(int d)
     {
          data = d;
          next = NULL;
          prev = NULL;
     }
};

class DL
{
     Node *head;

public:
     DL()
     {
          head = NULL;
     }
     ~DL()
     {
          Node *temp = head;
          while (temp != NULL)
          {
               Node *tempagain = temp;
               temp = temp->next;
               delete tempagain;
          }
     }
     void insert_front(int d)
     {
          Node *new_node = new Node(d);
          if (head == NULL)
          {
               head = new_node;
               return;
          }
          head->prev = new_node;
          new_node->next = head;
          head = new_node;
          new_node->prev = NULL;
     }
     void insert_end(int d)
     {
          Node *new_node = new Node(d);
          if (head == NULL)
          {
               head = new_node;
               return;
          }
          Node *temp = head;
          while (temp->next != NULL)
          {
               temp = temp->next;
          }
          temp->next = new_node;
          new_node->prev = temp;
          new_node->next = NULL;
     }
     void insert_pos(int d, int pos)
     {
          Node *new_node = new Node(d);
          if (head == NULL)
          {
               head = new_node;
               return;
          }

          if (pos == 1) // Basicaly insert at front
          {
               new_node->next = head;
               head->prev = new_node;
               head = new_node;
               return;
          }
          Node *temp = head;
          for (int i = 1; i < pos; i++)
          {
               if (temp->next == nullptr)
               {
                    cout << "Index out of bounds" << endl;
                    delete new_node;
                    return;
               }
               temp = temp->next;
          } // So now temp points to the node before the position
          new_node->next = temp->next;
          new_node->prev = temp;
          temp->next = new_node;
          if (new_node->next != NULL)
          {
               new_node->next->prev = new_node;
          }
     }
     void print()
     {
          Node *temp = head;
          while (temp != NULL)
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
     DL list;
     int choice, data, pos;
     cout << "Welcome to the Doubly Linked List Menu" << endl;
     do
     {
          cout << "1. Insert at front" << endl;
          cout << "2. Insert at end" << endl;
          cout << "3. Insert at position" << endl;
          cout << "4. Print list" << endl;
          cout << "5. Exit" << endl;
          cout << "Enter your choice: ";
          cin >> choice;
          switch (choice)
          {
          case 1:
               cout << "Enter the element to be inserted at the front: ";
               cin >> data;
               list.insert_front(data);
               break;
          case 2:
               cout << "Enter the element to be inserted at the end: ";
               cin >> data;
               list.insert_end(data);
               break;
          case 3:
               cout << "Enter the position at which you want to insert: ";
               cin >> pos;
               cout << "Enter the element to be inserted: ";
               cin >> data;
               list.insert_pos(data, pos);
               break;
          case 4:
               list.print();
               break;
          case 5:
               cout << "Exiting..." << endl;
               break;
          default:
               cout << "Invalid choice. Please enter a valid choice." << endl;
               break;
          }
          cout << endl;
     } while (choice != 5);
     return 0;
}