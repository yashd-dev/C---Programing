#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    // Destructor to delete all nodes
    ~LinkedList()
    {
        while (head)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Function to insert a new node at the beginning of the list
    void insertAtBeginning(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Function to insert a new node at the end of the list
    void insertAtEnd(int value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = newNode;
        }
        else
        {
            Node *current = head;
            while (current->next)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to insert a new node at a specified position
    void insertAtPosition(int value, int position)
    {
        if (position <= 0)
        {
            cout << "Invalid position" << endl;
            return;
        }
        Node *newNode = new Node(value);
        if (position == 1)
        {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node *current = head;
        int count = 1;
        while (current && count < position - 1)
        {
            current = current->next;
            count++;
        }
        if (!current)
        {
            cout << "Position out of range" << endl;
            delete newNode;
            return;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    // Function to modify the data of a node at a specified position
    void modifyNodeData(int value, int position)
    {
        Node *current = head;
        int count = 1;
        while (current && count < position)
        {
            current = current->next;
            count++;
        }
        if (!current)
        {
            cout << "Position out of range" << endl;
            return;
        }
        current->data = value;
    }

    // Function to delete a node at a specified position
    void deleteNodeAtPosition(int position)
    {
        if (!head)
        {
            cout << "List is empty" << endl;
            return;
        }
        if (position == 1)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node *current = head;
        int count = 1;
        while (current && count < position - 1)
        {
            current = current->next;
            count++;
        }
        if (!current || !current->next)
        {
            cout << "Position out of range" << endl;
            return;
        }
        Node *temp = current->next;
        current->next = temp->next;
        delete temp;
    }

    // Function to traverse and print the list
    void traverse()
    {
        Node *current = head;
        while (current)
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList list;

    // Create a linked list
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.insertAtEnd(4);
    list.insertAtEnd(5);

    cout << "Original Linked List: ";
    list.traverse();

    // Insert a new node at the beginning
    list.insertAtBeginning(0);
    cout << "After inserting 0 at the beginning: ";
    list.traverse();

    // Insert a new node at the end
    list.insertAtEnd(6);
    cout << "After inserting 6 at the end: ";
    list.traverse();

    // Insert a new node at a specified position
    list.insertAtPosition(9, 3);
    cout << "After inserting 9 at position 3: ";
    list.traverse();

    // Modify the data of a node at a specified position
    list.modifyNodeData(7, 4);
    cout << "After modifying the data at position 4 to 7: ";
    list.traverse();

    // Delete a node at a specified position
    list.deleteNodeAtPosition(2);
    cout << "After deleting the node at position 2: ";
    list.traverse();

    return 0;
}
