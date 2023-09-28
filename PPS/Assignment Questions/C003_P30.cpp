#include <iostream>
#include <string>

using namespace std;
struct employee
{
    string name;
    int salary, hours, days;
};

int main()
{
    // Write a structure to store the names, salary and hours of work per day of 10 employees in a company. Write a program to increase the salary depending on the number of hours of work per day as follows and then print the name of all the employees along with their final salaries.
    // Hours of work per day 8 10 >= 12 Increase in salary Rs.50 Rs.100 Rs.150

    struct employee emp[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Name:";
        cin >> emp[i].name;
        cout << "Enter Salary:";
        cin >> emp[i].salary;
        cout << "Enter Hours per day:";
        cin >> emp[i].hours;
        cout << "Enter Days:";
        cin >> emp[i].days;

        if (emp[i].hours >= 12)
            emp[i].salary += 150;
        else if (emp[i].hours >= 10)
            emp[i].salary += 100;
        else if (emp[i].hours >= 8)
            emp[i].salary += 50;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << emp[i].name << " " << emp[i].salary * emp[i].days << endl;
    }

    return 0;
}