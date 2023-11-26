#include <iostream>
using namespace std;
void recur(int n)
{
    if (n==0)
    {
        return;
    }
    else
    {
        recur(n-1);
        cout<<" "<<n;
        cout<<" "<<n+1;
        return;
    }
    
}
//1 2 3 4 5
int main()
{
    recur(5);
    return 0;
}