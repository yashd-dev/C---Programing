#include <iostream>
using namespace std;
void gcd(int a, int b)
{
    if (b == 0)
        cout << a;
    else
        gcd(b, a % b); //a=20 b=15
        //gcd(15,20%15)
        //gcd(15,5)
        //gcd(5,15%5)
        //gcd(5,0)
        //5

}

int main()
{
    // recursion gcd
    int a, b;
    cin >> a >> b;
    gcd(a, b);
    return 0;
}