#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "DATA_STORAGE.h"
#include "MOVIE.h"
#include "USER.h"
datastorage datastruct;
int main()
{
	//datastorage::loadfromfile();
	while (true)
	{
		if (!datastorage::mainmenu())
			break;
	}
	datastorage::savetofile();

}