#include <iostream>
using namespace std;
// The organization structure of “ABC Pvt. LTD” is given as per joining order. The company is in crisis and wants to start lay off.The employee who joined last is fired first.Implement the suitable data structure and display the order in which the company will fire employees int
// I am going to be implementing a queue for this problem

// A prestigious school, "Academic Heights School," needs to reduce its faculty size due to budget constraints.Teachers in the school are listed based on their joining order.The principal decides to start with the most recently joined teachers.Implement a suitable data structure and display the order in which teachers will be laid off, including their subjects.Teacher Name Subject Order of Joining(Ascending) Mr.Smith Mathematics 1 Mrs.Johnson Science 2 Ms.Davis English 3 Mr.Wilson History 4 Mrs.Evans Mathematics 5 Mr.Brown Science 6(most recent)Display the order in which teachers will be laid off, including their subjects
// Same Shit but 2d array banao for queue

#include <iostream>
using namespace std;

int front = -1;
int rear = -1;

void enqueue(int employeeID, int queue[], int max)
{
    if (rear == max - 1)
    {
        cout << "Queue is full. Cannot enqueue more employees." << endl;
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = employeeID;
}

void dequeue(int queue[])
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty. No employees to dequeue." << endl;
        return;
    }

    cout << "Dequeued employee: " << queue[front] << endl;
    front++;
}

void display(int queue[])
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty. No employees to display." << endl;
        return;
    }

    cout << "Employees to be fired in order: ";
    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter Number of Employees: ";
    cin >> n;
    int queue[n + 2]; // Plus 2 cos leaving some space for some reason, felt cute idk
    int employeeID;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Employee ID at index " << i + 1 << ": ";
        cin >> employeeID;
        enqueue(employeeID, queue, n + 2); // Array by default is passed by reference
    }

    display(queue);

    while (front <= rear)
    {
        dequeue(queue);
    }

    return 0;
}