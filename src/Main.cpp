#include <iostream>

using namespace std;

void welcomeMessage();
int getOptions();

//global vars for menu 
int menuSize = 3;
string menuOptions[3] = {"Assign seats", "Change seats", "View seats"};

int main()
{
    int option;

    welcomeMessage();
    option = getOptions();

    return 0;
}

//display welcome message and options to user
void welcomeMessage()
{
    cout << "\n\n\t\tSEAT ASSIGNMENT";
    cout << "\n\n\nMenu Options:\n";
    for(int i = 0; i < menuSize; i++){
        cout << i+1 << ". " << menuOptions[i] << "\n";
    }
    cout << "\n";
}

//get users selection for which action to do
int getOption(){
    int option;
    
    cout << "\nPlease choose an option by entering its number: ";
    cin >> option;

    //validation, need to verify is number too
    while(option > menuSize || option < 0) 
    {
        cout << "\nPlease choose a valid option: ";
        cin >> option;
    };

    return option;
}