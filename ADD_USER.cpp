#include <bits/stdc++.h>
#include "MAINMENU.cpp"
using namespace std;

struct userinputs
{
    long long userid=-20241700193;
    string username;
};
userinputs user[100];   // global user variable and dont ask why....
// void savevalues(); // declare of functions to avoid errors in compilations
// void loadvalues();
void userinput();
void showuserinformation();
int countusers()
// void optionalinput();
void userinput()
{
    int usercount=countusers();
    cout << "Enter your name :" << endl;
    cin.ignore();
    getline(cin, user[usercount].username);
    cout << "Enter your id (8 digits) :" << endl;
    cin >> user[usercount].userid;
    
    //turns the ID from int to a string and stores it in x
    string x = to_string(user[usercount].userid);

    while (x.size() != 8)
    {
        cout << "invalid id " << "Rewrite the id again (must be 8 digits) : " << endl;
        cin >> user[usercount].userid;
        x = to_string(user[usercount].userid);
    }
    cout << "saved succesfully." << endl;
}
// void savevalues()
// {
//     ofstream outfile("user.txt");
//     outfile << idgreat << " " << namegreat << endl;
//     for (int i = 0; i < idgreat; i++)
//     {
//         if (user.userid[i] == 0)
//             break;
//         outfile << user.userid[i] << " " << user.username[i] << endl;
//     }
//     outfile.close();
// }
// void loadvalues()
// {
//     ifstream infile("user.txt");
//     if (!infile)
//     {
//         ofstream outfile("user.txt");
//         outfile.close();
//         return;
//     }

//     if (!(infile >> idgreat >> namegreat))
//     {
//         idgreat = 0;
//         namegreat = 0;
//         return;
//     }

//     for (int i = 0; i < idgreat; i++)
//     {
//         infile >> user.userid[i];
//         infile.ignore();
//         getline(infile, user.username[i]);
//     }

//     infile.close();
// }
int countusers()
{
    for (int i = 0; i < 100; i++)
    {
        if (user[i].userid==-20241700193)
                return i;
    }
}
void showuserinformation()
{

    for (int i = 0; i < 100; i++)
    {
        if (user[0].userid == -20241700193)
        {
            cout << "The list is empty please enter a user." << endl;
            mainmenu();
            break;
        }
        if (user.userid[i] == 0)
            break;
        cout << "----user list----" << endl;
        cout << i + 1 << "-" << user.username[i] << " -- " << "  id is :" << user.userid[i] << endl;
    }
    cout << "-----------------" << endl;
}

// void optionalinput()
// {
//     while (true)
//     {
//         int show;
//         cout << endl
//              << "Choose an option:" << endl;
//         cout << "1 - Enter a new user" << endl;
//         cout << "2 - Show user list" << endl;
//         cout << "3 - Exit program" << endl;
//         cout << "Your choice: ";
//         cin >> show;
//         if (show == 1)
//             userinput();
//         else if (show == 2)
//             showuserinformation();
//         else if (show == 3)
//         {
//             cout << "Exiting program...";
//             exit (0);
//             break;
//         }
//         else
//         {
//             cout << "Wrong input ! ";
//             cout << "Please enter a valid number ." << endl;
//             optionalinput();
//         }
//     }
// }

// int main()
// {
//     optionalinput();
// }