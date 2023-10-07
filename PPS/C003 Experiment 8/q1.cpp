#include <iostream>
using namespace std;
// 1.	Define structure Student having data members: Roll no, name, address, branch and percentage. WAP to read and display information of a student.
struct student
{
    int roll;
    string name, address, branch;
    float percentage;
};
void add(student &s)
{
    cout << "Enter the roll no. of student: ";
    cin >> s.roll;
    cout << "Enter the name of student: ";
    cin >> s.name;
    cout << "Enter the address of student: ";
    cin >> s.address;
    cout << "Enter the branch of student: ";
    cin >> s.branch;
    cout << "Enter the percentage of student: ";
    cin >> s.percentage;
}
void display(student &s)
{
    cout << "Roll no. of student: " << s.roll << endl;
    cout << "Name of student: " << s.name << endl;
    cout << "Address of student: " << s.address << endl;
    cout << "Branch of student: " << s.branch << endl;
    cout << "Percentage of student: " << s.percentage << endl;
}
int main()
{
    int num;
    cout << "Enter the  no. of student: ";
    cin >> num;
    student s[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the details of student " << i + 1 << endl;
        add(s[i]);
    }
    for (int i = 0; i < num; i++)
    {
        cout << "Details of student " << i + 1 << endl;
        display(s[i]);
    }

    return 0;
}