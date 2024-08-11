#include <iostream>
using namespace std;

class Rectangle{

    public:
        //data member
        int length;
        int breadth;


        //function
        int area(){
            return length*breadth;
        }

        int perimeter(){
            return 2*(length+breadth);
        }
};

int main(){
    Rectangle r1,r2;
    r1.length = 20;
    r1.breadth = 2;
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
} 