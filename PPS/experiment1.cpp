#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

void si()
{
    float p, r, t;
    cout << "\nEnter Principle:";
    cin >> p;

    cout << "\nEnter Rate:";
    cin >> r;

    cout << "\nEnter Time:";
    cin >> t;
    float si = (p * r * t) / 100;
    cout << "The Simple interest is: " << si;
}
void oddeven()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "It is a Even Number";
    }
    else
    {
        cout << "It is a Odd Number";
    }
}
/*boundary data: upper and lower limit of expectation that should be accepted and rejected
extreme data: */
void rectangle()
{
    float length, breadth;
    cout << "\nEnter Length\n";
    cin >> length;
    cout << "Enter Breadth\n";
    cin >> breadth;
    float area = length * breadth;
    float perimeter = 2 * (length + breadth);
    cout << "The Area is:" << area << "\nThe Perimeter is:" << perimeter;
}
void netflix()
{
    float A, B, C, sub;
    cout << "\nEnter The Amount for Netflix subscription";
    cin >> sub;

    cout << "\nEnter The Amount A has";
    cin >> A;

    cout << "\nEnter The Amount B has";
    cin >> B;

    cout << "\nEnter The Amount C has";
    cin >> C;

    if (A + B >= sub)
    {
        cout << "\nA and B can contribute";
    }
    else if (A + C >= sub)
    {
        cout << "\nA and C can contribute";
    }
    else if (B + C >= sub)
    {
        cout << "\nB and C can contribute";
    }
}
void arrays()
{
    // Finding Sum and Avg

    int n_elements;
    cout << "Enter The Number of elements: ";
    cin >> n_elements;
    float arr[n_elements], sum, user_num; // Double because incase the user might input decimal numbers
    for (int i = 0; i < n_elements; i++)
    {
        cout << "Enter the element at " << i + 1 << ": ";
        cin >> user_num;
        arr[i] = user_num;
        sum += arr[i];
    }
    cout << "\nPrinting the Array: ";

    for (int i = 0; i < n_elements; i++)
    {
        cout << "\n"
             << arr[i];
    }
    cout << "\nThe Sum is " << sum;
    cout << "\nThe Avg is " << sum / n_elements << "\n";

    // Finding Max and min

    float max = arr[0], min = arr[0];

    for (int i = 0; i < n_elements; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Maximum: " << max << "\nMinimum: " << min << "\n";

    // Insert at last end of array
    float temp;
    cin >> temp;
    arr[n_elements - 1] = temp;

    arr[1] = temp;
    for (int i = 0; i < n_elements; i++)
    {
        cout << "\n"
             << arr[i];
    }
}
void milk()
{
    // 3. Krishna goes to the market to buy milk and vegetables.He has a currency of Rs .500 with him.From a shop, he purchases 2.0 liters of Milk priced at Rs .50.0 per liter, 1.5 kg of Carrots priced at Rs .35.0 per kg, and2 .5 kg of Tomatoes priced at Rs .10.0 per kg.He gives the currency of Rs .500 to the shopkeeper.Write an algorithm and draw a flowchart to calculate and display the amount the shopkeeper will return to Krishna.

    float wallet = 500.0, milk_q = 2.0, milk_p = 50.0, carrot_q = 1.5, carrot_p = 35.0, tomato_q = 2.5, tomato_p = 10.0;

    float total = (milk_p * milk_q) + (carrot_p * carrot_q) + (tomato_p * tomato_q);

    float return_sum = wallet - total;
    cout << "Krishna has Rs " << wallet << " with him and spends a total of Rs " << total << " and the shopkeeper would return Rs " << return_sum;
}
void nvar()
{
    int n1 = 6, n2 = 8;
    n2 += 9;
    int n3 = n1 * n2;
    n2 = n2 - n1;
    cout << n1 << " " << n2 << " " << n3;
}
void grade()
{

    float percentage;
    char grade;

    cout << "Enter the percentage marks: ";
    cin >> percentage;
    cout << endl;
    if (percentage >= 90)
        grade = 'A';

    else if (percentage >= 80)
        grade = 'B';

    else if (percentage >= 65)
        grade = 'C';

    else
        grade = 'D';

    cout << "Grade awarded: " << grade << endl;
}
void triangle()
{

    float side1, side2, side3;

    cout << "Enter the lengths of three sides of the triangle: \n";
    cin >> side1;
    cin >> side2;
    cin >> side3;

    // Check if the triangle is valid
    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2))
    {
        cout << "The triangle is valid \n";

        // Classify the triangle
        if (side1 == side2 && side2 == side3)
            cout << "It is an equilateral triangle \n";

        else if (side1 == side2 || side2 == side3 || side3 == side1)
        {
            cout << "It is an isosceles triangle \n";
        }
        else
        {
            cout << "It is a scalene triangle \n";
        }
    }
    else
    {
        cout << "The triangle is not valid \n";
        cout << "Please try again \n";
        cout << endl;
    }
}
void factorial()
{
    int n;
    long long int factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else
    {
        for (int i = 1; i <= n; ++i)

            factorial *= i;

        cout << "Factorial of " << n << " = " << factorial;
    }
}

void series()
{
    int n;
    cout << "Enter a number till when the series should end: ";
    cin >> n;
    cout << endl;
    float sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += (i * i);
    }
    cout << "The Sum is: " << sum;
}
int main()
{
    // cout << "\nSimple Interest Program:\n";
    // si();
    // arrays();
    // netflix();
    // oddeven();
    // milk();
    // nvar();
    // grade();
    triangle();
    // factorial();
    // series();

    // C++ program to find largest among
    // two numbers using ternary operator

    // Variable declaration
    // int n1 = 5,
    //     n2 = 10, max;

    // // Largest among n1 and n2
    // max = (n1 > n2) ? n1 : n2;

    // // Print the largest number
    // cout << "Largest number between "
    //      << n1 << " and " << n2
    //      << " is " << ((n1 > n2) ? n1 : n2);

    // return 0;
}