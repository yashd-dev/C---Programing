// Chef and some of his friends are planning to participate in a puzzle hunt event.The rules of the puzzle hunt state : "This hunt is intended for teams of 6 to 8 people." Chef's team has N people in total. Are they eligible to participate?

#include <iostream>
using namespace std;
int main()
{
    short int N;
    cin >> N;
    if (N > 5 && N < 9)
    {
        cout << "Can participate";
    }
    else
        cout << "Cant Participate";

    return 0;
}