#include <iostream>
#include <string>
using namespace std;
#define SIZE 10
// Create a student record (name, rollno, marks of 3 subjects and score), calculate the average, store average in a score data member. If score<40, declare FAIL else PASS along with student details, maintain 10 students records. (make use of member function to read and display records

class Student
{
    string name;
    int rollNo;
    int marks[3];
    float avg;
    bool pass_fail;

public:
    void read()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Marks in 3 Subjects: ";
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
        calcAvg();
    }

    void calcAvg()
    {
        float total = 0;
        for (int i = 0; i < 3; i++)
        {
            total += marks[i];
        }
        avg = total / 3;
        if (avg < 40)
        {
            pass_fail = false;
        }
        else
        {
            pass_fail = true;
        }
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: ";
        for (int i = 0; i < 3; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Avg Score: " << avg << endl;
        if (pass_fail)
        {
            cout << "Result: PASS" << endl;
        }
        else
        {
            cout << "Result: FAIL" << endl;
        }
    }
};

int main()
{
    Student students[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter details for Student Number " << i + 1 << ":" << endl;
        students[i].read();
    }

    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "\nStudent Number " << i + 1 << " Details:\n";
        students[i].display();
    }

    return 0;
}
