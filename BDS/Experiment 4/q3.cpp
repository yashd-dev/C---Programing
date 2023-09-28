#include <iostream>
#include <string>
using namespace std;

bool pali(string str, int start, int stop)
{
    if (start < stop)
    {
        if (str[start] != str[stop])
        {
            return false;
        }
        start++;
        stop--;
    }
    return true;
}

int main()
{
    string str;
    getline(cin, str);
    if (pali(str, 0, str.length()))
    {
        cout << "It is a palintrome";
    }
    else
    {
        cout << "Its not :)";
    }
    return 0;
}