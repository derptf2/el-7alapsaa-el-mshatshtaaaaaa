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
    datasave.open("data.txt", ios::out | ios::binary | ios::trunc);
    if (datasave)
    {
        //write(cast a character pointer to read the memory location of datastruct, of memory size datastruct *number of datastructs )
        datasave.write(reinterpret_cast<char*>(&datastruct), sizeof(datastorage));
        datasave.close();
    }
    else
        cout << "Error Saving!";
}

void datastorage::loadfromfile()
{
    fstream datasave;
    datasave.open("data.txt", ios::in | ios::binary);
    if (datasave)
    {
        //same as writing
        datasave.read(reinterpret_cast<char*>(&datastruct), sizeof(datastorage));
        datasave.close();
    }
    else
        cout << "Error Loading!";
}

