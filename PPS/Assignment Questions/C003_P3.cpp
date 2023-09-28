// Sonu went to the gym today. He decided to do X sets of squats. Each set consists of 15 squats. Determine the total number of squats that he did in N days of a week.

#include <iostream>
using namespace std;
int main()
{
    short int X, N;
    int total = 0; // Total Number of Squats
    cout << "Number of Days: ";
    cin >> N;
    if (N > 0 && N < 8)
    {
        int i = 0;
        while (i < N)
        {
            cout << "Enter Sets done on Day " << i + 1 << " : ";
            cin >> X;
            total += (X * 15);
            cout << endl;
            i++;
        }
        cout << total;
    }
    else
        cout << "Invalid Input";
    return 0;
}