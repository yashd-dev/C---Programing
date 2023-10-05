#include <iostream>
using namespace std;
int summ(int);
int rev(int);
int count(int);
int main()
{
    // Write a menu driven program to compute sum of digits of a number, to find reverse of a number, to count number of digits by writing three different functions with parameters and return type.
    int choice, num;
    while (true)
    {
        cout << endl;
        cout << "1. Sum of digits of a number\n2. Reverse of a number\n3. Count number of digits\n4. Terminate The Code\nEnter your choice: ";
        cin >> choice;
        cout << endl;
        if (choice != 4)
        {
            cout << "Enter a number: ";
            cin >> num;
            cout << endl;
        }

        switch (choice)
        {
        case 1:
            cout << "Sum of digits of " << num << " is: " << summ(num);
            cout << endl;

            break;
        case 2:
            cout << "Reverse of " << num << " is: " << rev(num);
            cout << endl;
            break;
        case 3:
            cout << "Number of digits in " << num << " is: " << count(num);
            cout << endl;
            break;
        case 4:
            cout << "Terminating Now...";
            return 0;
        default:
            cout << "Invalid choice.";
            cout << endl;
            break;
        }
    }
    return 0;
}
int summ(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int rev(int num)
{
    int rev = 0;
    while (num != 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}
int count(int num)
{
    int count = 0;
    while (num != 0)
    {
        count++;
        num /= 10;
    }
    return count;
}