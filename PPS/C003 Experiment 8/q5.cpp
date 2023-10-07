#include <iostream>
using namespace std;
int main()
{
    // 4.	WAP to print string in reverse order using pointers
    string str;
    getline(cin, str);
    char *Pstr;
    int i = 0;
    while (str[i] != '\0')
    {
        Pstr = &str[i];
        i++;
    }
    cout << endl;
    for (int k = 0; k < i; k++)
    {
        cout << *(Pstr);
        Pstr--;
    }

    return 0;
}