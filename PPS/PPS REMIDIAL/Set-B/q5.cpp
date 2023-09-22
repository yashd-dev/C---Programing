#include <iostream>
using namespace std;
int main()
{
    // Write a program to find Pythagorean triplets between range 100-1000.
    for (int i = 100; i <= 1000; i++)
    {
        if (((i * i) + ((i + 1) * (i + 1))) == ((i + 2) * (i + 2)))
        {
            cout << i << " " << i + 1 << " " << i + 2 << endl;
        }
    }
    return 0;
}