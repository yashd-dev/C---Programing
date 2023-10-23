#include <iostream>

using namespace std;

class Student
{
protected:
    int rollnum;

public:
    Student()
    {
        rollnum = 0;
    }
    void getNumber(int num)
    {
        rollnum = num;
    }

    void putNumber()
    {
        cout << "Roll Number: " << rollnum << endl;
    }
};

class Test : public Student
{
protected: // protected because i have to access it in result
    int sub1, sub2, sub3;

public:
    Test()
    {
        sub1 = sub2 = sub3 = 0;
    }
    void getMarks(int x, int y, int z)
    {
        sub1 = x;
        sub2 = y;
        sub3 = z;
    }

    void putMarks()
    {
        cout << "Subject 1 Marks: " << sub1 << endl;
        cout << "Subject 2 Marks: " << sub2 << endl;
        cout << "Subject 3 Marks: " << sub3 << endl;
    }
};

class Result : private Test // both are public so as to make changes in main function
{
public:
    void display()
    {
        int rollnum = 3;
        int marks1 = 85, marks2 = 90, marks3 = 78;

        getNumber(rollnum);               // inheriting student
        getMarks(marks1, marks2, marks3); // inheriting marks

        cout << "Student's Result:" << endl;
        putNumber();
        putMarks();
        int totalMarks = sub1 + sub2 + sub3;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main()
{
    Result r1;

    r1.display();
    return 0;
}