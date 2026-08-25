#include <iostream>
using namespace std;
class Student {
    public:
     string name;
     int rolln;
     int marks;

    void display(){
        cout << "Name of the student: " << name << endl;
        cout << "Roll no. of the student: " << rolln << endl;
        cout << "Marks of the student: " << marks << endl;
    }
};

int main (){
    Student s1;

    s1.name= "abc";
    s1.rolln = 22;
    s1.marks = 305;

    s1.display();
    return 0;
}