#include <iostream>

using namespace std;

void welcomeMessage(string *menu, int size);

int main()
{
    int menuSize = 2;
    string menuOptions[2] = {"Assign seats", "Change seats"};

    welcomeMessage(menuOptions, menuSize);

    return 0;
}

void welcomeMessage(string *menu, int size)
{
    cout << "\n\n\t\tSEAT ASSIGNMENT";
    cout << "\n\n\nMenu Options:\n";
    for(int i = 0; i < size; i++){
        cout << i+1 << ". " << menu[i] << "\n";
    }
    cout << "\n\nPlease choose an option: ";
}