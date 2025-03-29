#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "MOVIE.h"
#include "DATA_STORAGE.h"
using namespace std;
extern datastorage datastruct;  
int movie::count_movies()
{
    // function for counting movies every time you launch
    for (int i = 0; i < 100; i++)
    {
        if (datastruct.movies[i].id == 0)
            return i;
    }
    return -1;
}

void movie::add_movies()
{
    int count_of_movies = count_movies();
    cout << "Enter movie id (8 digits) : ";
    cin >> datastruct.movies[count_of_movies].id;

    string x = to_string(datastruct.movies[count_of_movies].id);

    while (x.size() != 8)
    {
        cout << "invalid id " << "Rewrite the id again (must be 8 digits) : " << endl;
        cin >> datastruct.movies[count_of_movies].id;
        x = to_string(datastruct.movies[count_of_movies].id);
    }
    cout << "Enter movie name: ";
    cin.ignore();
    getline(cin, datastruct.movies[count_of_movies].name_movie);

    cout << "Enter rental fee per day: ";
    cin >> datastruct.movies[count_of_movies].fees_per_day;

    cout << "Enter overdue fee per day: ";
    cin >> datastruct.movies[count_of_movies].over_fees_per_day;
    cout << "Movie added successfully. " << endl;
}

void movie::list_of_movies()
{
    //function that loops over all movie array indexes and displays them

    for (int i = 0; i <= count_movies(); i++)
    {
        cout << "\nMovie number " << i + 1 << ":\n";
        cout << "The Movie ID: " << datastruct.movies[i].id << " | " << "Name of the Movie: " << datastruct.movies[i].name_movie << " | ";

        if (datastruct.movies[i].is_rented)
        {
            cout << "(Not Available)\n";
        }

        else
        {
            cout << "(Available)\n";
        }
    }
}


void movie::Rent_movie()
{
    cout << "            RENT MOVIE            " << endl;
    cout << "=====================================" << endl;
    int val = -1;
    int ID_user;
    cout << "Please enter your user's ID: ";
    cin >> ID_user;
    while (ID_user < 10000000)
    {
        cout << "This user's ID is incorrect!! Please enter a valid ID (8 digits)" << endl;
        cin >> ID_user;
    }
    int ID_movie;
    cout << "Please enter your movie's ID: ";
    cin >> ID_movie;
    while (ID_movie < 10000000)
    {
        cout << "This movie's ID is incorrect!! Please enter a valid ID (8 digits)" << endl;
        cin >> ID_movie;
    }
    for (int i = 0;i < movie::count_movies();i++)
    {
        if (ID_movie == datastruct.movies[i].id)
        {
            val = i;
            break;
        }
    }
    if (val == -1)
    {
        cout << "            This ID is Invalid            " << endl;
    }

    else if (datastruct.movies[val].is_rented && val != -1)
    {
        cout << "            movie already rented by another customer            " << endl;
    }

    else   if (val != -1)
    {
        cout << "            This movie is available            " << endl;
        cout << "rental fee per day                         : " << datastruct.movies[val].fees_per_day << endl;
        cout << "overdue fee per day                        : " << datastruct.movies[val].over_fees_per_day << endl;
        cout << "Please enter the due data like (dd/mm/yyyy):" << endl;
        cin >> datastruct.movies[val].due_date.day;cout << "/";cin >> datastruct.movies[val].due_date.month;cout << "/";cin >> datastruct.movies[val].due_date.year;
        datastruct.movies[val].is_rented = true;
        datastruct.movies[val].customer_id = ID_user;
        cout << "            Movie rented successfully            " << endl;
    }



}