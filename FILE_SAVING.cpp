#include <bits/stdc++.h>
#include "ADD_USER.cpp"
#include "ADD_MOVIE.cpp"
// #include "movie struct.cpp"
using namespace std;
struct datastorage
{
    string student;
    long long ID;
    float GPA;
};
datastorage datastruct[100];
int main()
{

    //function for determining how many movies are inputted 
    int datastructsize;
    for (int i = 0; i < 100; i++)
    {
        if (datastruct[i].ID==0)
            {
                datastructsize=i;
                break;
            }
    }

    // the following is the output function
    fstream data;
    data.open("data.txt",ios::out | ios::binary|ios::trunc);
    if (data)
    {   //write(cast a character pointer to read the memory location of datastruct, of memory size datastruct *number of datastructs )
        data.write(reinterpret_cast<char*>(datastruct), datastructsize * sizeof(datastruct)); 
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