#include <iostream>
using namespace std;
int main()
{
    // Write a program to initialize read and display your details like age, name, gender, city, height etc and display it. (for name & city use character array)
    char name[100], city[100];
    int age;
    float height;
    cout << "Enter your name:";
    cin >> name;
    cout << "Enter your age:";
    cin >> age;
    cout << "Enter your city:";
    cin >> city;
    cout << "Enter your height:";
    cin >> height;
    cout << "Name:" << name << "\nAge:" << age << "\nCity:" << city << "\nHeight:" << height;
    
    return 0;
}