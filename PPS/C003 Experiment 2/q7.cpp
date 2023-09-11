#include <iostream>
using namespace std;
int main()
{
    // Write a program to convert temperature in Fahrenheit to Celsius.
    float fahrenheit;
    cout << "Enter temperature in Fahrenheit:";
    cin >> fahrenheit;
    cout << "Temperature in Celsius:" << (((fahrenheit - 32) * 5) / 9);
    return 0;
}