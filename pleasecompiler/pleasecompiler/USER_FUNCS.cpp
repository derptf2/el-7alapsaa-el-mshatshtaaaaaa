#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "USER.h"
#include "DATA_STORAGE.h"
using namespace std;
extern datastorage datastruct;
void userinputs::userinput()
{
    int usercount = userinputs::countusers();
    cout << "Enter your name :" << endl;
    cin.ignore();
    getline(cin, datastruct.user[usercount].username);
    cout << "Enter your id (8 digits) :" << endl;
    cin >> datastruct.user[usercount].userid;

    //turns the ID from int to a string and stores it in x
    string x = to_string(datastruct.user[usercount].userid);

    while (x.size() != 8)
    {
        cout << "invalid id " << "Rewrite the id again (must be 8 digits) : " << endl;
        cin >> datastruct.user[usercount].userid;
        x = to_string(datastruct.user[usercount].userid);
    }
    cout << "saved succesfully." << endl;
}

int userinputs::countusers()
{
    for (int i = 0; i < 100; i++)
    {
        if (datastruct.user[i].userid == 0)
            return i;
    }
    return -1;
}

void userinputs::showuserinformation()
{

    for (int i = 0; i < 100; i++)
    {
        if (datastruct.user[0].userid == 0)
        {
            cout << "The list is empty please enter a user." << endl;
            datastorage::mainmenu();
            break;
        }
        if (datastruct.user[i].userid == 0)
            break;
        cout << "----user list----" << endl;
        cout << i + 1 << "-" << datastruct.user[i].username << " -- " << "  id is :" << datastruct.user[i].userid << endl;
    }
    cout << "-----------------" << endl;
}