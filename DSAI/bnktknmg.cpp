#include <iostream>
using namespace std;

int main() {
    int r;
    int f;
    int tkn [10];
    
    for (int i = 0; i<10; i++) {
        cout << "Enter Token Number " << i << ": ";
        cin >> tkn [r];
        r++;
    }

    while (f<r) {
        cout << "Token Number: " << tkn [f] << endl;
        f++;
    }
    return 0;
}