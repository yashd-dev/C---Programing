#include <iostream>
using namespace std;
// Design a structure named employee to print the details of the employee who have 5 years or more experience and salary less than 1 lac using array of structure(Take - Name, ID, experience and salary as member)

// Design a structure named Student with members for Name, Roll Number, Age, and GPA. Then, create an array of structures to store student details. Write a program that prints the details of students who are older than 20 years and have a GPA greater than or equal to 3.5.

// Design a structure named Book with members for Title, Author, ISBN, and Price. Create an array of structures to store book details. Write a program that prints the details of books with a price less than 20 USD.

struct employee
{
    string name;
    int id;
    int experience;
    int salary;
};

int main()
{
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    employee employees[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name of employee " << i + 1 << ": ";
        cin.ignore();
        getline(cin, employees[i].name);
        cout << "Enter ID of employee " << i + 1 << ": ";
        cin >> employees[i].id;
        cout << "Enter experience of employee " << i + 1 << ": ";
        cin >> employees[i].experience;
        cout << "Enter salary of employee " << i + 1 << ": ";
        cin >> employees[i].salary;
    }
    cout << "Employees with 5 or more years of experience and salary less than 1 lac:\n";
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (employees[i].experience >= 5 && employees[i].salary < 100000)
        {
            cout << "Name: " << employees[i].name << endl;
            cout << "ID: " << employees[i].id << endl;
            cout << "Experience: " << employees[i].experience << endl;
            cout << "Salary: " << employees[i].salary << endl;
            counter++;
        }
    }
    if (counter == 0)
    {
        cout << "No employees found";
    }

    return 0;
}