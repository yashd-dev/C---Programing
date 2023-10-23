#include <iostream>
using namespace std;
// Create a class student having data members name, rollno & branch and define two member function getData( ) & display( ) for taking input & display the same. Write a complete C++ code for displaying the information of a student.

class Student
{
    string branch;
    int roll_no;

public:
    void get_data()
    {
        cout << "Enter Branch: ";
        cin >> branch;
        cout << "\nRoll No: ";
        cin >> roll_no;
    }
    void show_data()
    {
        cout << "\nBranch: " << branch;
        cout << "\nRoll No: " << roll_no;
    }
};

int main()
{
 
    Student student; // Create an object of the Student class

    student.get_data();
    student.show_data();

    return 0;
}
