// The Jethalal Scholarship Contest has just finished, and you finish with a rank of R.You know that Rank 1 to Rank 50 will get 100 % scholarship on the Jethalal champaklal gada electronics exam fee and Rank 51 to Rank 100 will get 50 % percentage scholarship on the Jethalal champaklal gada electronics exam fee.The rest do not get any scholarship.What percentage of scholarship will you get ? The exam fees is Rs .3500

#include <iostream>
using namespace std;
int main()
{
    short N;
    cin >> N;
    float fees = 3500;

    if (N > 0 && N < 51)
    {
        fees = 0;
    }
    else if (N > 50 && N < 101)
    {
        fees = fees - (fees * 0.5);
    }
    else if (N > 100)
    {
        //No Scholarship so no change in fees
    }
    else
    {
        cout << "Incorrect Input";
        return 0;
    }
    cout << "Fees After Scholarship " << fees;

    return 0;
}