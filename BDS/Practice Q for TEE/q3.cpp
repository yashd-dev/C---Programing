#include <iostream>
#include <queue>
using namespace std;
#define SEATS = 50;
// Job interviews are being conducted in a room where, in the waiting area there are chairs arranged for candidates. Candidates come randomly and sit sequentially on chairs. Receptionist has maintained the list of candidates by their name on the 1st come first serve basis. Write a program to use appropriate data structure to be used by the receptionist to send candidates in for an interview

// I will be using queues

queue<string> candidate;

void enqueue(string &name)
{
    cout << "Adding " << name << endl;
    candidate.push(name);
}
void dequeue()
{
    if (candidate.empty())
    {
        cout << "No candidates left";
        return;
    }
    cout << "Removing " << candidate.front() << endl;
    candidate.pop();
}
void display()
{
    queue<string> temp = candidate;
    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}

int main()
{
    string name;
    int choice;
    while (choice != 4)
    {
        cout << "1. Add candidate\n2. Remove candidate\n3. Display candidates\n4. Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter name: ";
            cin >> name;
            enqueue(name);
            cout << endl;
            break;
        case 2:
            dequeue();
            cout << endl;
            break;
        case 3:
            display();
            cout << endl;
            break;
        case 4:
            cout << "Exiting...";
            choice = 4;
            break;
        default:
            cout << "Invalid choice";
            break;
        }
    }
    return 0;
}