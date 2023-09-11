#include <iostream>
using namespace std;
int main()
{
    // Develop a program to perform divisibility tests by 3 and 5.  If the entered number is divisible by three and not by five print “THREE”; if the number is divisible by five and not by three print “FIVE”; if divisible by both 3 & 5 print “BOTH” otherwise, print “NOT”
    int number;
    cout << "Enter number:";
    cin >> number;
    if (number % 3 == 0 && number % 5 != 0)
    {
        cout << "THREE";
    }
    else if (number % 5 == 0 && number % 3 != 0)
    {
        cout << "FIVE";
    }
    else if (number % 3 == 0 && number % 5 == 0)
    {
        cout << "BOTH";
    }
    else
    {
        cout << "NOT";
    }
    return 0;
}