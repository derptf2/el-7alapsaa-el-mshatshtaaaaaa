#include <bits/stdc++.h>
using namespace std;
const int n = 100; // constant for array
int idgreat = 0;       // global id for userid array
int namegreat = 0;     // global id for username array

struct userinputs
{
    int userid[n]{0};
    string username[n];
};
userinputs user;   // global user variable and dont ask why....
void savevalues(); // declare of functions to avoid errors in compilations
void loadvalues();
void userinput();
void showuserinformation();
void optionalinput();

void userinput()
{

    cout << "Enter your name :" << endl;
    cin.ignore();
    getline(cin, user.username[namegreat]);
    cout << "Enter your id (8 digits) :" << endl;
    cin >> user.userid[idgreat];
    
    //turns the ID from int to a string and stores it in x
    string x = to_string(user.userid[idgreat]);

    while (x.size() != 8)
    {
        cout << "invalid id " << "Rewrite the id again (must be 8 digits) : " << endl;
        cin >> user.userid[idgreat];
        x = to_string(user.userid[idgreat]);
    }
    cout << "saved succesfully." << endl;
    namegreat++;
    idgreat++;
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

void showuserinformation()
{

    for (int i = 0; i < n; i++)
    {
        if (user.userid[0] == 0)
        {
            cout << "The list is empty please enter a user." << endl;
            optionalinput();
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