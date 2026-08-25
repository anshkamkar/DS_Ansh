#include <iostream>
using namespace std;

class employee {
public: 

    string nm;
    int sal;
    int ansal;


    void display(){
        cout << "Employee Name: " << nm << endl;
        cout << "Monthly Salary: " << sal << endl;
        cout << "Annual Salary: " << ansal << endl;
    }

};

int main(){
    
    employee e1;

    cout << "Enter Employee Name: ";
    cin >> e1.nm;

    cout << "Enter Employee Salary: ";
    cin >> e1.sal;

    e1.ansal = e1.sal*12;
    e1.display();

    return 0;
}