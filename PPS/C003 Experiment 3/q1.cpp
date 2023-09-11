#include <iostream>
using namespace std;
int main()
{
    // Develop a program that accepts sales amount; if the sales amount is more than 5000, then the discount is 12% of the sales amount; otherwise, it is 7%—display the total discount and amount to be paid after the discount.
    float salesAmount, discount, amountToBePaid;
    cout << "Enter sales amount:";
    cin >> salesAmount;
    if (salesAmount > 5000)
    {
        discount = salesAmount * 0.12;
    }
    else
    {
        discount = salesAmount * 0.07;
    }
    amountToBePaid = salesAmount - discount;
    cout << "Total discount:" << discount << endl;
    cout << "Amount to be paid:" << amountToBePaid;
    return 0;
}