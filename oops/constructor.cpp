#include <iostream> 
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;

public:
    // Rectangle(){ // default constructor or non parameterized constructor
    //     length=2;
    //     breadth=3;
    // }
    // Rectangle(int l,int b){ // parameterized constructor
    //     setLength(l);
    //     setBreadth(b);
    // }


    // we can use this instead above of two cosntructor
    Rectangle(int l=2,int b=2){ //default argument or initalized parameterized constructor
        setLength(l);
        setBreadth(b);
    }

    // copy constructor
    Rectangle(Rectangle &rect){
        length=rect.length;
        breadth=rect.breadth;
    }

    void setLength(int l){
        if(l>0)length = l;
        else length = 0;
    }
    void setBreadth(int b){
        if(b>0)breadth= b;
        else breadth = 0;
    }

    int getLength(){
        return length;
    }

    int getBreadth(){
        return breadth;
    }


    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }


};
int main(){
    Rectangle r1;

    cout<<"length is : "<<r1.getLength()<<endl<<"breadth is : "<<r1.getBreadth()<<endl<<"area is : "<<r1.area()<<endl<<"perimeter is : "<<r1.perimeter()<<endl;  

    cout<<"second rect"<<endl;

    Rectangle r2(10,5);

    cout<<"length is : "<<r2.getLength()<<endl<<"breadth is : "<<r2.getBreadth()<<endl<<"area is : "<<r2.area()<<endl<<"perimeter is : "<<r2.perimeter()<<endl;

    cout<<"third rect"<<endl;

    Rectangle r3(-10,5);

    cout<<"length is : "<<r3.getLength()<<endl<<"breadth is : "<<r3.getBreadth()<<endl<<"area is : "<<r3.area()<<endl<<"perimeter is : "<<r3.perimeter()<<endl;


    cout<<"fourth rect"<<endl;
    Rectangle r(r2);
    cout<<"length is : "<<r.getLength()<<endl<<"breadth is : "<<r.getBreadth()<<endl<<"area is : "<<r.area()<<endl<<"perimeter is : "<<r.perimeter()<<endl;



}