#include <iostream>
using namespace std;
// 2.	There are 50 computers in an office. Every computer has following information CPU type, hard disk size. WAP to store details of all 50 computers and then print details of computers having hard disk size greater than 8 GB.
struct Computer
{
    string cpuType;
    int hardDiskSize;
};
void add(Computer &c)
{
    cout << "Enter the CPU type: ";
    cin >> c.cpuType;
    cout << "Enter the hard disk size: ";
    cin >> c.hardDiskSize;
}
int display(Computer &c)
{
    if (c.hardDiskSize > 8)
    {
        cout << "CPU type: " << c.cpuType << endl;
        cout << "Hard disk size: " << c.hardDiskSize << endl;
        return 1;
    }
}
int main()
{
    Computer c[50];
    for (int i = 0; i < 50; i++)
    {
        cout << "Enter the details of computer " << i + 1 << endl;
        add(c[i]);
    }
    int count = 0;
    for (int i = 0; i < 50; i++)
    {
        count += display(c[i]);
    }
    if (count == 0)
    {
        cout << "No computer has hard disk size greater than 8 GB." << endl;
    }

    return 0;
}