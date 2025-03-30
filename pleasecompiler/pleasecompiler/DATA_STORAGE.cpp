#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "DATA_STORAGE.h"
#include "MOVIE.h"
#include "USER.h"
using namespace std;
extern datastorage datastruct;
void datastorage::savetofile()
{
    fstream datasave;
    datasave.open("moviedata.txt", ios::out | ios::trunc);
    if (datasave)
    {
    datasave << movie::count_movies()<<endl;
        for (int i = 0; i < movie::count_movies(); i++)
        {
            datasave << datastruct.movies[i].current_date.day<<endl;
            datasave << datastruct.movies[i].current_date.month << endl;
            datasave << datastruct.movies[i].current_date.year << endl;
            datasave << datastruct.movies[i].customer_id << endl;
            datasave << datastruct.movies[i].due_date.day << endl;
            datasave << datastruct.movies[i].due_date.month << endl;
            datasave << datastruct.movies[i].due_date.year << endl;
            datasave << datastruct.movies[i].fees_per_day << endl;
            datasave << datastruct.movies[i].id << endl;
            datasave << datastruct.movies[i].is_rented << endl;
            datasave << datastruct.movies[i].overall_rating << endl;
            datasave << datastruct.movies[i].over_fees_per_day << endl;
            for(int j=0; j < datastruct.movies[i].rating.size(); j++)
                datasave << datastruct.movies[i].rating[j] << endl;
            datasave << datastruct.movies[i].rented_days << endl;
            datasave << datastruct.movies[i].name_movie << endl;
        }
        datasave.close();
    }
    else
        cout << "Error Saving movies!";


    datasave.open("userdata.txt", ios::out | ios::trunc);
    if (datasave)
    {
    datasave << userinputs::countusers() << endl;
        for (int i = 0; i < userinputs::countusers(); i++)
        {
            datasave << datastruct.user[i].userid << endl;
            datasave << datastruct.user[i].username << endl;
}
    }
    else
        cout << "Error Saving users!";
    datasave.close();
}

void datastorage::loadfromfile()
{
    fstream datasave;
    datasave.open("moviedata.txt", ios::in);
    if (datasave)
    {

        int moviecount;
        datasave >> moviecount;
        for (int i=0; i<moviecount;i++)
        {
            datasave >> datastruct.movies[i].current_date.day;
            datasave >> datastruct.movies[i].current_date.month;
            datasave >> datastruct.movies[i].current_date.year;
            datasave >> datastruct.movies[i].customer_id;
            datasave >> datastruct.movies[i].due_date.day;
            datasave >> datastruct.movies[i].due_date.month;
            datasave >> datastruct.movies[i].due_date.year;
            datasave >> datastruct.movies[i].fees_per_day;
            datasave >> datastruct.movies[i].id;
            datasave >> datastruct.movies[i].is_rented;
            datasave >> datastruct.movies[i].overall_rating;
            datasave >> datastruct.movies[i].over_fees_per_day;
            for (int j = 0; j < datastruct.movies[i].rating.size(); j++)
                datasave >> datastruct.movies[i].rating[j];
            datasave >> datastruct.movies[i].rented_days;
            datasave.ignore();
            getline(datasave,datastruct.movies[i].name_movie);
        }
        datasave.close();
    }
    else
        cout << "Error loading movies!";


    datasave.open("userdata.txt", ios::in);
    if (datasave)
    {
        int usercount;
        datasave >> usercount;
        for(int i=0;i<usercount;i++)
        {
            datasave >> datastruct.user[i].userid;
            datasave.ignore();
            getline(datasave,datastruct.user[i].username);
        }
        
    }
    else
        cout << "Error loading users!";
    datasave.close();
}

