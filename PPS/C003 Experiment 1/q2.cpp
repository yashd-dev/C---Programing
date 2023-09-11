#include <iostream>
using namespace std;
int main()
{
    float length, breadth;
    cout << "\nEnter Length\n";
    cin >> length;
    cout << "Enter Breadth\n";
    cin >> breadth;
    float area = length * breadth;
    float perimeter = 2 * (length + breadth);
    cout << "The Area is:" << area << "\nThe Perimeter is:" << perimeter;
    return 0;
}