#pragma once
#ifndef DATA_STORAGE_H
#define DATA_STORAGE_H

#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include "MOVIE.h"
#include "USER.h"
using namespace std;
struct datastorage
{
public:
    movie movies[100];
    userinputs user[100];
    static bool mainmenu();
    static void savetofile();
    static void loadfromfile();
};
extern datastorage datastruct;


#endif