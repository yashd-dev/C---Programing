#include <iostream>
using namespace std;

// Write a program to manage a simple inventory system for a store. Each inventory item should have a name, quantity, and price.Implement this inventory system using a singly linked list.Write a program that allows users to add new items to the inventory, update the quantity of existing items, display the current inventory, and remove items from the inventory

// You want to create a music playlist manager.Each song in the playlist has a title, artist, and duration(in minutes).Implement this playlist using a singly linked list.Write a program that allows users to add new songs, display the playlist, and calculate the total duration of the playlist

// You want to create a task list manager. Each task in the list has a description and a due date.Implement this task list using a singly linked list.Write a program that allows users to add new tasks, mark tasks as completed, display the tasks, and find tasks due on a specific date.

struct item
{
    string name;
    int quantity;
    int price;
    item *next;
    item(string name, int quantity, int price)
    {
        this->name = name;
        this->quantity = quantity;
        this->price = price;
        this->next = NULL;
    }
};

class inventory
{
    item *head;

public:
    inventory()
    {
        head = NULL;
    }

    void additem(string name, int quantity, int price)
    {
        item *newitem = new item(name, quantity, price);
        if (head == NULL)
        {
            head = newitem;
            return;
        }
        else
        {
            item *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newitem;
            return;
        }
    }

    void updatequantity(string name)
    {

        item *temp = head;
        while (temp != NULL)
        {
            if (temp->name == name)
            {
                int quantity;
                cout << "Enter quantity of item: ";
                cin >> quantity;
                temp->quantity = quantity;
                return;
            }
            temp = temp->next;
        }
        cout << "Item not found";
        return;
    }

    void display()
    {
        item *temp = head;
        while (temp != NULL)
        {
            cout << "Name: " << temp->name << endl;
            cout << "Quantity: " << temp->quantity << endl;
            cout << "Price: " << temp->price << endl;
            temp = temp->next;
        }
    }

    void removeitem(string name)
    {
        item *temp = head;
        item *prev = NULL;
        while (temp != NULL)
        {
            if (temp->name == name)
            {
                if (prev == NULL)
                {
                    head = temp->next;
                }
                else
                {
                    prev->next = temp->next;
                }
                delete temp;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
        cout << "Item not found";
        return;
    }
};

int main()
{
    inventory inv;
    int choice = 0;
    string name;

    while (choice != 5)
    {
        cout << "1. Add item\n2. Update quantity\n3. Display\n4. Remove item\n5. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int quantity, price;
            cout << "Enter name of item: ";
            cin.ignore(); // Added this line to consume the newline character left in the buffer
            getline(cin, name);
            cout << "Enter quantity of item: ";
            cin >> quantity;
            cout << "Enter price of item: ";
            cin >> price;
            inv.additem(name, quantity, price);
            break;
        case 2:
            cout << "Enter name of item: ";
            cin.ignore();
            getline(cin, name);

            inv.updatequantity(name);
            break;
        case 3:
            inv.display();
            break;
        case 4:
            cout << "Enter name of item: ";
            cin.ignore();
            getline(cin, name);
            inv.removeitem(name);
            break;
        case 5:
            break;
        default:
            cout << "Invalid choice\n";
            break;
        }
    }

    return 0;
}
