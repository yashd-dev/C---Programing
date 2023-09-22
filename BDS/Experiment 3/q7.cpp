#include <iostream>
using namespace std;
// b) Print Fibonacci series up to n term using recursion
void fib(int a, int b, int n)
{
    if (n == 0)
        return;
    cout << a << " ";
    fib(b, a + b, n - 1);
}
int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << endl;
    fib(0, 1, n);

    return 0;
}