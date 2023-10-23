#include <iostream>
using namespace std;
// Declare a class employee having data members as id, name and member function as getData( ) & display( ). Derive class manager from employee class. Manager class has data members as salary and member functions as getdata( ) & display( ). Again, derive class project manager from manager. Project manager class have data members as total experience, number of projects handled and member function as getdata() & display(). Write a program using multilevel inheritance to display all details of project manager.
class Employee
{
    int id;
    string name;

public:
    void getData()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
    }
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};
class Manager : public Employee
{
    float salary;

public:
    void getData()
    {
        Employee::getData();
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void display()
    {
        Employee::display();
        cout << "Salary: " << salary << endl;
    }
};
class ProjectManager : public Manager
{
    int totalExperience, projectsHandled;

public:
    void getData()
    {
        Manager::getData();
        cout << "Enter Total Experience: ";
        cin >> totalExperience;
        cout << "Enter Projects Handled: ";
        cin >> projectsHandled;
    }
    void display()
    {
        Manager::display();
        cout << "Total Experience: " << totalExperience << endl;
        cout << "Projects Handled: " << projectsHandled << endl;
    }
};
int main()
{
    ProjectManager pm;
    pm.getData();
    pm.display();
    return 0;
}