#include <iostream>
using namespace std;
// Class “Employee” has data members: Emp_id, Emp_name and Emp_sal and this class uses a parameterized constructor to accept the details of 2 employees and display the results using the display () function.
class Employee
{
    int Emp_id;
    string Emp_name;
    float Emp_sal;

public:
    Employee(int id, string name, float sal)
    {
        Emp_id = id;
        Emp_name = name;
        Emp_sal = sal;
    }
    void display()
    {
        cout << endl;
        cout << "Employee ID: " << Emp_id << endl;
        cout << "Employee Name: " << Emp_name << endl;
        cout << "Employee Salary: " << Emp_sal << endl;
        cout << endl;
    }
};
int main()
{
    cout << "Enter Name of 1st Employee: ";
    string name1;
    cin.ignore();
    getline(cin, name1);
    cout << "Enter ID of 1st Employee: ";
    int id1;
    cin >> id1;
    cout << "Enter Salary of 1st Employee: ";
    float sal1;
    cin >> sal1;
    Employee e1(id1, name1, sal1);

    e1.display();

    cout << "Enter Name of 2nd Employee: ";
    string name2;
    cin.ignore();
    getline(cin, name2);
    cout << "Enter ID of 2nd Employee: ";
    int id2;
    cin >> id2;
    cout << "Enter Salary of 2nd Employee: ";
    float sal2;
    cin >> sal2;
    Employee e2(id2, name2, sal2);

    e2.display();
    return 0;
}