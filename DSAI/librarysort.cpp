#include <iostream>
using namespace std;


int main() {

    int lba [5];
    int searchID;
    // int libs [5];


    cout << "Enter 5 Book IDs: " << endl;

    for (int  i = 0; i<5; i++){ 

        cin >> lba [i];

    }

    for (int m = 0; m < 4; m++){ 

        for (int j = 0; j < 4-m; j++) {

             if (lba [j] > lba [j+1]){

                int a = lba [j];
                lba [j] = lba [j+1];
                lba[j+1] = a;

            }
        }
    }

cout << endl;
cout << "Sorted Book IDs: " << endl;


for (int k = 0; k < 5; k++){

    cout << lba[k];

}

return 0;

}