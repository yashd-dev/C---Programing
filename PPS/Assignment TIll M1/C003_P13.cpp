// There are n citizens in Narnia.It is election time in Narnia and 3 parties, A, B, and C are contesting the elections.Party A receives Xa votes, party B receives Xb votes, and party C receives Xc votes.The constitution of Narnia requires particular party to receive a clear majority to form the government.A party is said to have a clear majority if it receives strictly greater than 50 votes.If any party has a clear majority, print the winning party(A, B or C).Otherwise, print King 's & Queen' s Rule.

#include <iostream>
using namespace std;
int main()
{
    int xa, xb, xc;
    cout << "Input Votes for A B and C\n";
    cin >> xa >> xb >> xc;
    xa -= 50;
    xb -= 50;
    xc -= 50;
    cout << endl;
    if (xa > 0 && xa > xb && xa > xc)
        cout << "A";

    else if (xb > 0 && xb > xa && xb > xc)
        cout << "B";

    else if (xa > 0 && xc > xb && xc > xa)
        cout << "C";

    else
        cout << "King And Queens Rule";

    return 0;
}