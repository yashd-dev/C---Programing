#include <iostream>
using namespace std;
struct urmom
{
    int a;
    int b;
    int c;
};
int main()
{
    struct urmom arr[2];
    for (int i = 0; i < 2; i++)
    {
        cin >> arr[i].a;
        cin >> arr[i].b;
        cin >> arr[i].c;
    }
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << arr[i].a << endl;
        cout << arr[i].b << endl;
        cout << arr[i].c << endl;
    }
}
