#include <iostream>
using namespace std;
// You are a teacher, and you need to organize a list of your students' names in alphabetical
// order by their names. Apply your knowledge of sorting techniques and explain which sorting
// technique is most suitable for this scenario and why. Then, provide a step-by-step process of
// applying this sorting technique to alphabetize the following list of student names:
// Johnson
// Smith
// Lee
// Brown
// Davis
// Wilson
// Martinez
// Anderson

// Binary search, Sorting definitions, Bubble Sort, Selection Sort, Insertion Sort, Radix Sort are the options i have

// I choose Bubble Sort because it is the easiest to implement and understand and the number of students is not that much so it will not take much time to sort them using Bubble Sort. Also no memory is required to sort them using Bubble Sort.

int main()
{
    string names[7] = {"Johnson", "Smith", "Lee", "Brown", "Davis", "Wilson", "Martinez"};
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7 - i - 1; j++)
        {
            if (names[j] > names[j + 1]) // It is getting compared in lexicographical ordering https://stackoverflow.com/questions/45950646/what-is-lexicographical-order
            {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout << names[i] << endl;
    }
    return 0;
}