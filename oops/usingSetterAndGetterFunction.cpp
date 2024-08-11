#include <iostream>
using namespace std;


class Rectangle{
private:
    int length;
    int breadth;

public:
    void setLength(int l){
        if(l>0) length = l;
        else length = 0;
    }
    void setBreadth(int b){
        if(b>0) breadth = b;
        else breadth = 0;
    }

    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }

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

    r1.setLength(3);
    r1.setBreadth(5);
    cout<<"length is : "<<r1.getLength()<<endl<<"breadth is : "<<r1.getBreadth()<<endl<<"area is : "<<r1.area()<<endl<<"perimeter is : "<<r1.perimeter()<<endl;


    cout<<"second rectangle "<<endl;
    r2.setLength(-5);
    r2.setBreadth(5);
    cout<<"length is : "<<r2.getLength()<<endl<<"breadth is : "<<r2.getBreadth()<<endl<<"area is : "<<r2.area()<<endl<<"perimeter is : "<<r2.perimeter()<<endl;

}