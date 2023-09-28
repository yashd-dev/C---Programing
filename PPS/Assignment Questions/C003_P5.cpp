// Recently, Kamal visited his doctor. The doctor advised Kamal to drink at least 2000 ml of water each day.Kamal drank X ml of water today.Determine if Kamal followed the doctor's advice or not.

#include <iostream>
using namespace std;
int main()
{
    float X; //initialing X
    cout << "Enter the amount water drunk by Kamal: "; 
    cin >> X;
    cout << endl;

    if (X >= 2000) //Checking if its minimum value
    {
        cout << "YES";
    }
    else // If Its not 
    {
        cout << "NO";
    }
    return 0;
}