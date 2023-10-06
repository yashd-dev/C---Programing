#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void addstart(node **head, int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = *head;
    *head = newnode;
}

void addend(node **head, int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = NULL;
    if (*head == NULL)
    {
        *head = newnode;
        return;
    }
    node *tempNode = *head; // reach to the last node of Linked List while (tempNode->next != NULL)

    while (tempNode->next != NULL) // Traversing the list till the last node
    {
        tempNode = tempNode->next;
    }
    tempNode->next = newnode;
}

void deletell(node **head, int val)
{
    node *temp = *head;
    node *prev = NULL; // Pointer to the previous node

    // If the head node needs to be deleted
    if (temp != NULL && temp->data == val)
    {
        *head = temp->next;
        delete temp;
        return;
    }

    // Traverse the list to find the node to delete and its previous node
    while (temp != NULL && temp->data != val)
    {
        prev = temp;
        temp = temp->next;
    }

    // If the value was not found in the list
    if (temp == NULL)
    {
        cout << "Element " << val << " not found\n\n";
        return;
    }

    // Update the previous node's next pointer to skip the deleted node
    prev->next = temp->next;

    // Delete the node
    delete temp;
}

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "-->";
        head = head->next;
    }
    if (head == NULL)
    {
        cout << "NULL";
    }
}
int main()
{
    node *head = NULL;
    while (true)
    {
        cout << "\n\nEnter \n1.To Add Element in the beginning of the Linked List\n2. To Add Element in the end of the Linked List \n3.To Delete Elements from the Linked List\n4.To Display the Linked List\n5.To Exit\n\n";

        int choice, value;

        cin >> choice;

        switch (choice)
        {

        case 1:
        {
            cout << "Enter the value to be added at start of the Linked List\n";
            cin >> value;
            addstart(&head, value);
            break;
        }

        case 2:
        {
            cout << "Enter the value to be added at end of the Linked List\n";
            cin >> value;
            addend(&head, value);
            break;
        }

        case 3:
        {
            cout << "Enter the value to be deleted from the Linked List\n";
            cin >> value;
            deletell(&head, value);
            break;
        }

        case 4:
        {
            display(head);
            break;
        }

        case 5:
        {
            return 0;
        }

        default:
        {
            cout << "Invalid Choice\n";
            break;
        }
        }
    }
    return 0;
}