#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "MOVIE.h"
#include "DATA_STORAGE.h"
#include "USER.h"
using namespace std;
extern datastorage datastruct;
bool datastorage::mainmenu()
{
    int number;
    cout << "Welcome to El 7alapesa El Mshatshata movie store!\n";
    cout << "1.Add a user\n";
    cout << "2. List users\n";
    cout << "3. Add movie\n";
    cout << "4. The list of movies\n";
    cout << "5. Rent a movie\n";
    cout << "10. Exit\n";
    cout << "Enter choice: ";
    cin >> number;
    switch (number)
    {
    case 1:
        userinputs::userinput();
        return 1;
    case 2:
        userinputs::showuserinformation();
        return 1;
    case 3:
        movie::add_movies();
        return 1;
    case 4:
        movie::list_of_movies();
        return 1;
    case 5:
        movie::Rent_movie();
        return 1;
    case 10:
        cout << "Thank you for using our service!";
        return 0;
    default:
        cout << "Invalid choice! Please choose another number\n";
        return 1;
    }

}