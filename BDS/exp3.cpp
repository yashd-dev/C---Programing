#include <iostream>
using namespace std;
struct bank
{
    int account_no;
    float balance;
    string name;
};

int main()
{
    int n;
    cout << "Enter number of accounts: ";
    cin >> n;
    bank details[n];
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "For Account: " << i + 1 << endl;
        cout << "Enter Account Number: ";
        cin >> details[i].account_no;
        cout << "\nEnter Balance: ";
        cin >> details[i].balance;
        cout << "\nEnter Name: ";
        cin.ignore();
        getline(cin, details[i].name);
    }

    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "For Account: " << i + 1 << endl
             << details[i].account_no << endl
             << details[i].balance << endl
             << details[i].name << endl;
    }
    cout << endl
         << "Enter Bank Number to search for" << endl;
    int search;
    cin >> search;
    for (int i = 0; i < n; i++)
    {
        if (details[i].account_no == search)
        {
            cout << endl
                 << "Account Found:" << endl
                 << "Account Number: "
                 << details[i].account_no << endl
                 << "Balance: "
                 << details[i].balance << endl
                 << "Name: "
                 << details[i].name << endl;
            break;
        }
        else
            cout << "Account not found";
    }

    return 0;
}

#include <iostream>
using namespace std;

void printing2(int num)
{
    if (num == 0)
        return;
    cout << "*";
    return printing2(num - 1);
}
void pattern2(int n, int i)
{
    if (n == 0)
        return;
    printing2(i);
    cout << endl;
    pattern2(n - 1, i - 1);
}

void printing(int num)
{
    if (num == 0)
        return;
    cout << "*";
    return printing(num - 1);
}
void pattern(int n, int i)
{
    if (n == 0)
        return;
    printing(i);//2
    cout << endl;
    pattern(n - 1, i + 1);
}

int main()
{
    int n;
    cout << "Enter number of lines of the star: ";
    cin >> n;///5
    cout << endl;

    pattern(n, 1);
    cout << endl;
    pattern2(n, n);
    return 0;
}



// Swapping Pointer ab lesgoo

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a; // temp is set to value of a
    *a = *b;       // value at address of a is set to value of b
    *b = temp;     // value at address of b = temp which inturn is the value a
}

int main()
{
    int a; // 10
    int b; // 20
    cout << "Enter 2 Numbers: ";
    cin >> a >> b;

    swap(&a, &b);
    // int *pA = &a; // pointer to address of a
    // int *pB = &b; // pointer to address of b
    // int temp = a; // temp is set to value of a
    // *pA = b;    // value at address of a is set to value of b
    // *pB = temp;   // value at address of b = temp which inturn is the value a

    cout << "Swapped Numbers are: \n";
    cout << a << endl
         << b;

    return 0;
}



#include <iostream>
#include <string.h>

using namespace std;

struct Books
{

    char book_name[100];
    char author_name[100];
    float book_price;
    unsigned int copies;
};

int main()
{
    int n = 1;
    struct Books arr[n];

    for (int i = 0; i < n; i++)
    {

        cout << "Enter name of  book " << i + 1 << ": ";
        cin.getline(arr[i].book_name, 100);
        cout << "\nAuthor: ";
        cin.getline(arr[i].author_name, 100);
        cout << "\nPrice: ";
        cin >> arr[i].book_price;
        cout << "\nCopies: ";
        cin >> arr[i].copies;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\n\nBook " << i + 1 << endl;

        cout << "Book Name: " << arr[i].book_name << endl
             << "Author Name: "
             << arr[i].author_name << endl
             << "Price: "
             << arr[i].book_price << endl
             << "Copies: "
             << arr[i].copies;
    }

    cout << "\n\nEnter the name of book to search for: ";

    char search[100];
    cin.ignore();
    cin.getline(search, 100);
    int c = 0;
    for (int i = 0; i < n; i++)
    {

        if (strcmp(arr[i].book_name, search) == 0)
        {
            cout << "Copies: " << arr[i].copies;
            c++;
        }
    }
    if (c == 0)
    {
        cout << "\nBook not found";
    }

    cout << "\n\nEnter the author of book to search for: ";

    char search_author[100];
    cin.getline(search_author, 100);

    for (int i = 0; i < n; i++)
    {

        if (strcmp(arr[i].author_name, search_author) == 0)
        {
            cout << arr[i].book_name;
            c++;
        }
    }
    if (c == 0)
    {
        cout << "\nAuthor not found";
    }
}