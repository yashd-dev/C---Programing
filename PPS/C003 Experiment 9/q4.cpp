#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

float sum(float a, float b)
{
    return a + b;
}

int main()
{
    int choice, int1, int2, int3;
    cout << "Choose an operation:\n";
    cout << "1. Sum of two integers\n";
    cout << "2. Sum of three integers\n";
    cout << "3. Sum of two floating-point numbers\n";
    cin >> choice;

    switch (choice)
    {
    case 1:

        cout << "Enter two integers: ";
        cin >> int1 >> int2;
        cout << "Sum of two integers: " << sum(int1, int2) << endl;
        break;

    case 2:
        cout << "Enter three integers: ";
        cin >> int1 >> int2 >> int3;
        cout << "Sum of three integers: " << sum(int1, int2, int3) << endl;
        break;

    case 3:
        float float1, float2;
        cout << "Enter two floating-point numbers: ";
        cin >> float1 >> float2;
        cout << "Sum of two floating-point numbers: " << sum(float1, float2) << endl;
        break;

    default:
        cout << "Invalid choice. Please select 1, 2, or 3." << endl;
    }

    return 0;
}
