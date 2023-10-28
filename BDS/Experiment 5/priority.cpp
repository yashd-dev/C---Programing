#include <iostream>
using namespace std;
#define SIZE 10
struct queue
{
    int data, priority;
};

queue q[SIZE];
int sizee = -1;

void enqueue(int data, int priori)
{
    sizee++;
    if (sizee == SIZE)
    {
        cout << "Queue is Full";
        return;
    }
    q[sizee].data = data;
    q[sizee].priority = priori;
}
int peak()
{
    int highpriori = 0, ind = -1;
    for (int i = 0; i <= SIZE; i++)
    {
        if (highpriori == q[i].priority && ind > -1 && q[ind] < q[i].data)
        {
            highpriori = q[i].priority;
            ind = i;
        }
    }
}
int main()
{

    return 0;
}