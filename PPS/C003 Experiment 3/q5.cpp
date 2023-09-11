#include <iostream>
using namespace std;
int main()
{
    // // Vitamin D3 is recommended as the best indicator of vitamin D's nutritional status. If any patient is undergone a Vitamin D3 test, its value ranges from 0 <= to >100 nm/ML. Scott is a Pathologist, and he is doing a vitamin D3 test on his patient. You have to help him automate this process to know the status/level of vitamin D3 depending on its values in nm/mL. Write a program to help Scott to tell the status/level to patients as given in the table below.

    int d3;
    cout << "Enter vitamin D3 value:";
    cin >> d3;
    if (d3 > 100)
        cout << "Toxicity";
    else if (d3 > 30)
        cout << "Sufficient";
    else if (d3 > 20)
        cout << "Insufficient";
    else if (d3 > 0)
        cout << "Deficient";
    else
        cout << "Invalid value";

    return 0;
}