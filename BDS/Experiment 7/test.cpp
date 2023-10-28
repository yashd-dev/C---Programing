#include <iostream>
using namespace std;

struct bookshelf
{
    string title, author;
    int year;
    bookshelf *next;

    bookshelf(string author, string title, int year)
    {
        this->author = author;
        this->title = title;
        this->year = year;
        this->next = NULL;
    }
};

class BookList
{
private:
    bookshelf *head;

public:
    BookList();                                          // A Default constructor
    void addBook(string author, string title, int year); // Prototyping The Functions
    void removeBook(string title);
    void displayBookshelf();
    void findBook(string title);
};

BookList::BookList()
{
    head = NULL;
}

void BookList::addBook(string author, string title, int year)
{
    bookshelf *newBook = new bookshelf(author, title, year);
    if (!head)
    {
        head = newBook; // Empty List
    }
    else
    {
        bookshelf *current = head;
        while (current->next) // getting the last element and then appending the new book at it
        {
            current = current->next;
        }
        current->next = newBook;
    }
}

void BookList::removeBook(string title)
{
    if (!head) // oposite of null is true
    {
        cout << "The bookshelf is empty. Cannot remove." << endl;
        return;
    }

    if (head->title == title)
    {
        bookshelf *temp = head;
        head = head->next;
        delete temp;
        cout << "Book removed: " << title << endl;
        return;
    }

    bookshelf *current = head;
    while (current->next)
    {
        if (current->next->title == title)
        {
            bookshelf *temp = current->next;
            current->next = current->next->next;
            delete temp;
            cout << "Book removed: " << title << endl;
            return;
        }
        current = current->next;
    }

    cout << "Book not found: " << title << endl;
}

void BookList::displayBookshelf()
{
    if (!head)
    {
        cout << "The bookshelf is empty." << endl;
        return;
    }

    cout << "Bookshelf contents:" << endl;
    bookshelf *current = head;
    while (current)
    {
        cout << "Title: " << current->title << ", Author: " << current->author << ", Year: " << current->year << endl;
        current = current->next;
    }
}

void BookList::findBook(string author)
{
    if (!head)
    {
        cout << "The bookshelf is empty." << endl;
        return;
    }

    bookshelf *current = head;
    bool found = false;
    while (current)
    {
        if (current->author == author)
        {
            cout << "Book found by: " << author << ", Title: " << current->title << ", Year: " << current->year << endl;
            found = true;
            return;
        }
        current = current->next;
    }

    if (!found)
    {
        cout << "Book by " << author <<" Not Found! " <<endl;
    }
}

int main()
{
    BookList myBookshelf;

    int choice, year;
    string author, title;

    while (true)
    {
        cout << "\nMenu:\n";
        cout << "1. Add book, ";
        cout << "2. Remove book, ";
        cout << "3. Show bookshelf, ";
        cout << "4. Find a book, ";
        cout << "5. Exit\n";
        cout << "\nEnter your choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter author: ";
            cin.ignore();
            getline(cin, author);
            cout << "Enter title: ";
            getline(cin, title);
            cout << "Enter year: ";
            cin >> year;
            myBookshelf.addBook(author, title, year);
            break;
        case 2:
            cout << "Enter the title of the book to remove: ";
            cin.ignore();
            getline(cin, title);
            myBookshelf.removeBook(title);
            break;
        case 3:
            myBookshelf.displayBookshelf();
            break;
        case 4:
            cout << "Enter the authot of the book to search for: ";
            cin.ignore();
            getline(cin, author);
            myBookshelf.findBook(author);
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
