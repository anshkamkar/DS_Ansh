#include <iostream>

using namespace std;

int main() {
    int rollNumber;
    int a [5];
    cout << "Enter the roll numbers of 5 students: ";

    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    cout << "The roll numbers of the students are: ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    return 0;
}