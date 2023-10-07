#include <iostream>
using namespace std;
// 1.	Define structure called cricket that will describe the following data Player name, country name, no of matches played & batting avg. Develop a program that store information of 10 players and display names of players having batting average greater than 50.
struct cricket
{
    string player_name, country_name;
    int matches_played;
    float batting_avg;
};
void add(cricket &c)
{
    cout << "Enter the player name: ";
    cin >> c.player_name;
    cout << "Enter the country name: ";
    cin >> c.country_name;
    cout << "Enter the no. of matches played: ";
    cin >> c.matches_played;
    cout << "Enter the batting average: ";
    cin >> c.batting_avg;
}
int display(cricket &c)
{
    if (c.batting_avg > 50)
    {
        cout << "Player name: " << c.player_name << endl;
        cout << "Country name: " << c.country_name << endl;
        cout << "No. of matches played: " << c.matches_played << endl;
        cout << "Batting average: " << c.batting_avg << endl;
        return 1;
    }
}
int main()
{
    cricket c[10];
    for (int i = 0; i < 10; i++)
    {
        add(c[i]);
    }
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        count += display(c[i]);
    }
    if (count == 0)
    {
        cout << "No player has batting average greater than 50." << endl;
    }

    return 0;
}