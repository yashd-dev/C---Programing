#include <iostream>
using namespace std;

void p1()
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void p2()
{
    for (char i = 'A'; i < 'F'; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void p3()
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void p4()
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void p5()
{
    for (char i = 'A'; i < 'F'; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void p6()
{
    for (int i = 1; i < 6; i++)
    {
        for (int k = 1; k < (6 - i); k++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void p7()
{
    for (int i = 1; i < 6; i++)
    {
        for (int k = 1; k < (6 - i); k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void p8()
{
    for (int i = 1; i < 6; i++)
    {
        for (int k = 1; k < (6 - i); k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void p9()
{
    for (int i = 1; i < 6; i++)
    {
        for (int k = 1; k < (6 - i); k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << char('@' + j) << " "; // @ character is before A in ASCII
        }
        cout << endl;
    }
}
void p10()
{
    for (int i = 5; i > 0; i--)
    {
        for (int k = 5; k < (5 + i); k++)
        {
            cout << " ";
        }

        for (int j = 5; j >= i; j--)
        {
            cout << char('@' + j) << " "; // @ character is before A in ASCII
        }
        cout << endl;
    }
}

void p11()
{
    int count = 1;
    for (int i = 1; i < 6; i++)
    {
        for (int k = 1; k < (6 - i); k++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            
            count++;
        }
        cout << endl;
    }
}
void p12()
{
    
}
int main()
{
    p1();
    cout << "\n----\n\n";
    p2();
    cout << "\n----\n\n";
    p3();
    cout << "\n----\n\n";
    p4();
    cout << "\n----\n\n";
    p5();
    cout << "\n----\n\n";
    p6();
    cout << "\n----\n\n";
    p7();
    cout << "\n----\n\n";
    p8();
    cout << "\n----\n\n";
    p9();
    cout << "\n----\n\n";
    p10();
    cout << "\n----\n\n";
    return 0;
}