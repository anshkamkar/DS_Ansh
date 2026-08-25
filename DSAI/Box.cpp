#include <iostream>
using namespace std;
class Box {
    public:
    int length, breadth, height;

    void area(){
        int a;
        a = length * breadth * height;
        cout << "Area of the box: " << a;
    }
};

int main (){
    Box b1;
    b1.length = 5;
    b1.breadth = 6;
    b1.height = 7;

    b1.area();
    return 0;
}