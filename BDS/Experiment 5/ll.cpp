#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
class stack
{
    node *head;

public:
    stack()
    {
        head = NULL;
    }
    void push(int val)
    {
        node *newnode = new node(val);
        if (!newnode)
        {
            cout << "eRROR";
            exit(1);
        }
        newnode->data = val;
        newnode->next = head;

        head = newnode;
    }

    void pop()
    {
        node *newnode = head;
        if (head == NULL)
        {
            cout << "EMPTY";
        }
        head = head->next;
        delete newnode;
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "No Elements present";
            return;
        }
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        if (temp == NULL)
        {
            cout << "NULL";
        }
    }
    void recursive()
    {
    }
};
int main()
{
    stack s;
    s.push(10);
    s.push(210);
    s.push(140);
    s.push(150);
    s.push(160);
    s.push(1770);
    s.display();
    cout << "kuch";
    return 0;
}