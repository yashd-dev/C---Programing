#include <iostream>
using namespace std;
int fib(int);
int main()
{
    // Write a program to print Fibonacci series up to n using recursion.
    int n;
    cout << "Enter a number to print Fibonacci series up to that number: ";
    cin >> n;
    cout << "Fibonacci series up to " << n << " is: ";
    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << " ";
    }
    return 0;
}
int fib(int n)
{
    if (n == 0 || n == 1)
        return n;

    else
        return fib(n - 1) + fib(n - 2);
}