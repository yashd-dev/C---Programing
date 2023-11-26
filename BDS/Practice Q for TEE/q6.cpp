#include <iostream>
using namespace std;
// A software company, "Tech Solutions Inc.," needs to downsize its project teams due to budget constraints.Employees in a project team are assigned based on their project joining order.The company wants to lay off employees from a specific project team, starting with the most recent joiners.Implement a suitable data structure and display the order in which employees will be laid off.

int top = -1;
int n = 6;
string stack[5];

void enqueue()
{
    cout << "Emp Name: ";
    string name;
    getline(cin, name);
    if (top == -1)
    {
        top++;
    }
    if (top < n)
    {
        stack[top] = name;
        top++;
    }
}

void display()
{
    for (int i = top - 1; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
}

int main()
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Emplyee " << i + 1 << " Details:\n";
        enqueue();
    }
    cout << endl;
    cout << "The Order In which Employees would be Layed Off: " << endl;
    display();
    return 0;
}
