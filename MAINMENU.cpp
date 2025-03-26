#include <bits/stdc++.h>
using namespace std;
void mainmenu()
{
    int number;
    cout << "Welcome to El 7alapesa El Mshatshata movie store!\n";
    cout << "1.Add a user\n";
    cout << "2. List users\n";
    cout << "3. Add movie\n";
    cout << "4. The list of movies\n";
    cout << "10. Exit\n";
    cout << "Enter choice: ";
    cin >> number;
    switch (number)
    {
        case 1:
            userinput();
            break;
        case 2: 
            showuserinformation();
        case 3:
            add_movies();
            break;
        case 4:
            list_of_movies();
            break;
        case 10:
            cout << "Thank you for using our service!";
            stop=1;
            break;
        default:
            cout << "Invalid choice! Please choose another number";
            break;
    }
}