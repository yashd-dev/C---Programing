#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

int main()
{
    node *head=NULL;
    node *one = new node();
    node *two = new node();
    node *three = new node();

    one->data = 1;
    two->data = 2;
    three->data = 3;

    one->next = two;
    two->next = three;
    three->next = NULL;
    head = one;

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
