#include <iostream>
using namespace std;
int main()
{
    // 6.	WAP to find the number of vowels in entered string using pointer [eg - i/p India o/pà A-1, E-0, I-2, O-0, U-0]
    string str;
    getline(cin, str);
    int count = 0;
    int i = 0;
    char *Pstr = &str[0];
    while (str[i] != '\0')
    {
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        if (*Pstr == 'A' || *Pstr == 'E' || *Pstr == 'I' || *Pstr == 'O' || *Pstr == 'U')
        {
            count++;
        }
        Pstr++;
    }
    cout << count;
    return 0;
}