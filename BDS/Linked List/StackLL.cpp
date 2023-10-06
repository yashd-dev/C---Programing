#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

void push(node **top, int val) // Pushing in the beginning not at the end
{
    node *newnode = new node();
    newnode->data = val;

    newnode->next = *top;

    *top = newnode;
}
void display(node **top)
{
    cout << endl;
    node *tempnode = new node();
    tempnode = *top;
    while (tempnode != NULL)
    {
        cout << tempnode->data << "->";
        tempnode = tempnode->next;
    }
    if (tempnode == NULL)
    {
        cout << "NULL";
    }
    cout << endl;
}

void pop(node **top)
{
    node *tempnode = new node();
    tempnode = *top;
    // Check for stack underflow
    if (tempnode == NULL)
    {
        cout << "\nStack Underflow" << endl;
        return;
    }
    *top = tempnode->next;
    delete (tempnode);
}
void peak(node **top)
{
    node *tempnode = new node();
    tempnode = *top;
    // Check for stack underflow
    if (tempnode == NULL)
    {
        cout << "\nStack Underflow" << endl;
        return;
    }
    cout << endl
         << tempnode->data << endl;
}
int main()
{
    node *top = NULL;
    pop(&top);
    push(&top, 1);
    push(&top, 2);
    peak(&top);
    push(&top, 3);
    display(&top);
    pop(&top);
    display(&top);

    return 0;
}
