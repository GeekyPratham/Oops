#include <iostream>
using namespace std;

class Base{
public:
    int a=7;
    void display(){
        cout<<"display of Base "<<a<<endl;
    }
};

class Derived:public Base{

public:
    void show(){
        cout<<"show of derived"<<endl;
    }
};
int main(){
    Derived d;
    d.a = 4;
    d.display();
    Base b;
    b.display();
    d.show();
    // b.show();
}