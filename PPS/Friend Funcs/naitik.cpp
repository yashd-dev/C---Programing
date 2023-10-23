#include <iostream>
using namespace std;
struct stud
{
    int data;
};
void get(stud &s)
{
    cin >> s.data;
}
void cou(stud &a)
{
    cout << a.data;
}
int main()
{
    stud s1;
    get(s1);
    cou(s1);
    return 0;
}