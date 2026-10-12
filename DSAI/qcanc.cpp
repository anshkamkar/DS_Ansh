#include <iostream>
using namespace std;

void menu(){

    int c;

    cout << "Restaurant Menu: " << endl;
    cout << "1. Pizza" << endl;
    cout << "2. Eggs" << endl;
    cout << "3. Pasta" << endl;
    cout << "4. Exit" << endl;


    cout << "Enter your choice: ";
    cin>>c;

    
    if (c == 1){
        cout << "You selected Pizza." << endl;
        menu();
    } else if (c == 2) {
        cout << "You selected Eggs." << endl;
        menu();
    } else if (c == 3) {
        cout << "You selected Pasta." << endl;
        menu();
    } else if (c == 4) {
        cout << "Exiting the menu." << endl;
        return;
    } else {
        cout << "Invalid choice. Please try again." << endl;
        menu();
    }
}

int main () {

    menu();
    return 0;
    
}