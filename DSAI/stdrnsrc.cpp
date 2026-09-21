#include <iostream>

using namespace std;

int main() {
    int rollNumber, searchID;
    int a [5];
    cout << "Enter the roll numbers of 5 students: " << endl;

    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    cout << "Enter Roll Number you want to Search: ";
    cin >> searchID;

    for (int j = 0; j <5; j++) {

        if (a [j] == searchID){
            cout << "Student Found";
            return 0;
        }
    }

    cout << "Student Not Found";


return 0;
}