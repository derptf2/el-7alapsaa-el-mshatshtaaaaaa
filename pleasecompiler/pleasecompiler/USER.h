#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include "MOVIE.h"
using namespace std;

struct userinputs
{

	long long userid = 0;
	string username = "0";
	static void userinput();
	static void showuserinformation();
	static int countusers();
};

#endif