// Little Yash is a huge movie fan. He likes watching different kinds of movies: from drama movies to comedy movies, from teen movies to horror movies. He is planning to visit cinema this weekend, but he's not sure which movie he should watch. There are n movies to watch during this weekend.Each movie can be characterized by two integers Li and Ri, denoting the length and the rating of the corresponding movie.Yash wants to watch exactly one movie with the maximal value of Li × Ri.If there are several such movies, he would pick a one with the maximal Ri among them.If there is still a tie, he would pick the one with the minimal index among them.Your task is to help Yash to pick a movie to watch during this weekend.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number of Movies:";
    cin >> n;

    int li[n], ri[n], prod[n];

    for (int i = 0; i < n; i++)
    {
        cout << "For Movie " << (i + 1);
        cout << endl;

        cout << "Enter Length: ";
        cin >> li[i];
        cout << endl;

        cout << "Enter Rating: ";
        cin >> ri[i];
        cout << endl;

        prod[i] = li[i] * ri[i];
    }

    int max = prod[0], temp = 0, temp_index[n], max_ri[n];

    for (int i = 1; i < n; i++) // Finding Max Values
    {
        if (max <= prod[i])
        {
            max = prod[i];
            temp_index[temp] = i;
            max_ri[temp] = ri[i]; // If there is more than one, then to check for next condition this array is needed

            temp++;
            cout << temp; // Check for duplicates
        }
    }
    if (temp == 1 || temp == 0) // If no duplicates then print the chosen movie
    {
        cout << "Movie Chosen is: " << temp_index[0];
    }

    else // If duplicates exists
    {
        temp = 0;
        int len = sizeof(max_ri) / sizeof(max_ri[0]);
        int new_temp_index[len];
        max = max_ri[0]; // Initial Maximal value for ri

        for (int i = 1; i < len; i++)
        {
            if (max <= max_ri[i])
            {
                max = max_ri[i];
                max_ri[temp] = ri[i];
                new_temp_index[temp] = temp_index[temp];
                temp++;
            }
        }

        if (temp == 0 || temp == 1)
        {
            cout << "Movie Chosen is: " << new_temp_index[0];
        }
    
        else
        {
            cout << "Movie Chosen is: " << new_temp_index[0];
        }
    }

    return 0;
}