#include <iostream>
using namespace std;
class B; // Class prototyping to call the class afer class A
class A
{
    int numa;

public:
    void get();
    friend void sum(A obja, B objb);
};
class B
{
    int numb;

public:
    void get();
    friend void sum(A, B);
};

void A::get()
{
    cout << "Enter Nums: ";
    cin >> numa;
}
void B::get()
{
    cout << "Enter Nums: ";
    cin >> numb;
}

void sum(A obja, B objb)
{
    cout << endl;
    cout << "Their Sum is:";
    cout << obja.numa + objb.numb;
}

int main()
{
    A obja;
    B objb;
    obja.get();
    objb.get();
    sum(obja, objb);

    return 0;
}
