#include <iostream>
using namespace std;
int main()
{
    float percentage;
    char grade;

    cout << "Enter the percentage marks: ";
    cin >> percentage;
    cout << endl;
    if (percentage >= 90)
        grade = 'A';

    else if (percentage >= 80)
        grade = 'B';

    else if (percentage >= 65)
        grade = 'C';

    else
        grade = 'D';

    cout << "Grade awarded: " << grade << endl;
    return 0;
}