#include <iostream>
#include <string>

using namespace std;

// Create a class named 'Student' with a string (char array) variable 'name' and an integer variable 'roll_no'. Assign the value of roll_no as 2 and that of name as "John" in main( ) function by creating an object of the class Student and display the same.

class Student
{
public:
    string name;
    int roll_no;
};

int main()
{
    Student student; // Create an object of the Student class

    // Assign values to the object's members
    student.roll_no = 2;
    student.name = "John";

    // Display the values
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.roll_no << endl;

    return 0;
}
