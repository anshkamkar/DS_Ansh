#include <iostream>
using namespace std;
int main() {
    int q[5];
    int f=0,
    r=0;
    int c;
    do {
        cout << "Bank Token System Menu:" << endl;
        cout << "1. Issue Token" << endl;
        cout << "2. Display All Tokens" << endl;
        cout << "3. Serve Customer" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";

        cin >> c;
        if (c == 1) {
            if (r < 5) {
                cout << "Enter token number: ";
                cin >> q[r];
                r++;
                cout << "Token issued successfully." << endl;
            } else {
                cout << "Token limit reached. Cannot issue more tokens." << endl;
            }
        } else if (c == 2) {
            if (f == r) {
                cout << "No tokens to display." << endl;
            } else {
                cout << "Displaying tokens:" << endl;
                for (int i = f; i < r; i++) {
                    cout << q[i] << endl;
                }
            }
        } else if (c == 3) {
            if (f < r) {
                cout << "Serving customer "  << endl;
                f++;
            } else {
                cout << "No customers to serve." << endl;
            }
        } else if (c == 4) {
            cout << "Exiting the program." << endl;
        } else {
            cout << "Invalid choice." << endl;
        }
    }
    while (c != 4);

    return 0;
    
}