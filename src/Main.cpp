#include <iostream>

using namespace std;

void welcomeMessage();
int getOption();

//global vars
int menuSize = 3;
string menuOptions[3] = {"Assign seats", "Change seats", "View allseats"};

int main()
{
    welcomeMessage();
    int option = getOption();

    return 0;
}

//display welcome message and available options to user
void welcomeMessage()
{
    cout << "\n\n\t\tSEAT ASSIGNMENT";
    cout << "\n\n\nMenu Options:\n";
    for(int i = 0; i < menuSize; i++){
        cout << i+1 << ". " << menuOptions[i] << "\n";
    }
    cout << "\n";
}

//get users option selection; will be used to determine which menu to display
int getOption()
{
    int option;

    cout << "Please choose an option: ";
    cin >> option;
    
    //validation to make sure option is valid, should also check for number
    while(option > menuSize || option < 0)
    {
        cout << "Please choose a valid option: ";
        cin >> option;
    }

    return option;
}