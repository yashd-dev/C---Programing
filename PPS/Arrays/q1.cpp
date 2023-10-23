#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll;
    string name,
        address, branch;
    float per;
};
void add(Student &s)
{
    cout << "Roll No: ";
    cin >> s.roll;
    cout << "Name: ";
    cin >> s.name;
    cout << "Address: ";
    cin >> s.address;
    cout << "Branch: ";
    cin >> s.branch;
    cout << "Percentage: ";
    cin >> s.per;
}
void show(Student &s)
{
    cout << s.name << endl
         << s.roll << endl
         << s.branch << endl
         << s.address << endl
         << s.per << endl;
}
int main()
{
    int n;
    cout << "Enter Nos of Students: ";
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        add(s[i]);
        show(s[i]);
    }

    return 0;
}