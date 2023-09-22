#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "\nEnter 2 numbers: ";
    cin >> num1 >> num2;
    int *pNum1 = &num1;
    int *pNum2 = &num2;

    int temp = num1;
    *pNum1 = num2;
    *pNum2 = temp;
    cout << num1 << " " << num2;
    return 0;
}