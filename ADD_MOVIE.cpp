#include <bits/stdc++.h>
#include "movie struct.cpp"
#define shoohdy                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;
const int maximum_number_of_movies = 100;
movie movies[maximum_number_of_movies];
int count_of_movies;

void add_movies();
void list_of_movies();

int main()
{
    int number;
    bool stop=0;
    do
    {
        cout << "\n3. Add movie" << '\n';
        cout << "4. The list of movies" << '\n';
        cout << "10. Exit" << '\n';
        cout << "Enter choice: ";
        cin >> number;
        switch (number)
        {
            case 3:
                add_movies();
                break;
            case 4:
                list_of_movies();
                break;
            case 10:
                cout << "Thank you for using our service!";
                stop=1;
                break;
            default:
                cout << "Invalid choice! Please choose another number";
                break;
        }
    } while (!stop);
}

void add_movies()
{
    // function for counting movies every time you launch
    for (int i = 0; i < 100; i++)
    {
        if (movies[i].id==-20241700193)
            {
                count_of_movies=i;
                break;
            }
    }

    cout << "Enter movie id: ";
    cin >> movies[count_of_movies].id;

    cout << "Enter movie name: ";
    cin.ignore();
    getline(cin, movies[count_of_movies].name_movie);

    cout << "Enter rental fee per day: ";
    cin >> movies[count_of_movies].fees_per_day;

    cout << "Enter overdue fee per day: ";
    cin >> movies[count_of_movies].over_fees_per_day;

    count_of_movies++;
}

void list_of_movies()
{
    //function that loops over all movie array indexes and displays them
    for (int i = 0; i < count_of_movies; i++)
    {
        cout << "\nMovie number " << i + 1 << ":\n";
        cout << "The Movie ID: " << movies[i].id << " | " << "Name of the Movie: " << movies[i].name_movie << " | ";

        if (movies[i].is_rented)
        {
            cout << "(Not Available)\n";
        }

        else
        {
            cout << "(Available)\n";
        }
    }
}