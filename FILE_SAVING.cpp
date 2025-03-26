#include <bits/stdc++.h>
#include <MOVIE_STRUCT.cpp>
#include "ADD_USER.cpp"
#include "ADD_MOVIE.cpp"
// #include "movie struct.cpp"
using namespace std;
struct datastorage
{
    movie movies[100];
    userinputs user[100];
};
datastorage datastruct[100];
int main()
{
    // the following is the output function
    fstream data;
    data.open("data.txt",ios::out | ios::binary|ios::trunc);
    if (data)
    {   //write(cast a character pointer to read the memory location of datastruct, of memory size datastruct *number of datastructs )
        data.write(reinterpret_cast<char*>(datastruct), count_of_movies*sizeof(movies) + ); 
        data.close();
    }
    else
    cout << "Error!";

    // the following is the input function
    data.open("data.txt",ios::in | ios::binary);
    if (data)
    {
        //same as writing
        data.read(reinterpret_cast<char*>(datastruct), 2 * sizeof(datastruct));
        data.close();
    }
    else
        cout << "Error!";


    return 0;
}