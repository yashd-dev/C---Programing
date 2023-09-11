#include <iostream>
using namespace std;
int main()
{
    int n1 = 6, n2 = 8;
    n2 += 9;
    int n3 = n1 * n2;
    n2 = n2 - n1;
    cout << n1 << " " << n2 << " " << n3;
    return 0;
}