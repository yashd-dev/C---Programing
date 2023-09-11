#include <iostream>
using namespace std;
int main()
{
    float wallet = 500.0, milk_q = 2.0, milk_p = 50.0, carrot_q = 1.5, carrot_p = 35.0, tomato_q = 2.5, tomato_p = 10.0;

    float total = (milk_p * milk_q) + (carrot_p * carrot_q) + (tomato_p * tomato_q);

    float return_sum = wallet - total;
    cout << "Krishna has Rs " << wallet << " with him and spends a total of Rs " << total << " and the shopkeeper would return Rs " << return_sum;
    
    return 0;
}