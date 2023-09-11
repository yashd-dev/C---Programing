// Khushi is strugglng to pass a certian course.
// The test has a total of N questions.
// Each question carries 3 marks for correct and -1 for incorrect answer.
// Khushi is a riskaverse person so she decided to attempt all the questions.
// It is known that Khushi got X questions correct and rest of them incorrect.
// For Khushi to pass the course she must score atleast P marks.

#include <iostream>
using namespace std;
int main()
{
    short int N, P, X;
    cin >> N; // Number of questions
    cin >> P; // Minimum Marks to Pass
    cin >> X; // Number of Correct Answers
    if (N > 0 && P > 0 && X >= 0)
    {
        int wrong = N - X;
        int total = (X * 3) + (-1 * wrong);
        if (total < P)
        {
            cout << "Fail";
        }
        else
        {
            cout << "Pass";
        }
    }
    else
        cout << "Invalid Input";

    return 0;
}