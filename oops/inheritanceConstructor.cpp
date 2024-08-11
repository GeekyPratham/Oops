#include <iostream>
using namespace std;

class Base{

public:
    Base(){
        cout<<"Default of Base Class"<<endl;
    }
    Base(int x){
        cout<<"param of Base Class : "<<x<<endl;
    }

};
class Derived : public Base{
public:
    Derived(){
        cout<<"Default of Derived Class"<<endl;
    }
    Derived(int y){
        cout<<"param of Derived Class : "<<y<<endl;
    }

    Derived(int x ,int y) : Base(x){
        cout<<"param of Derived: "<<y<<endl;
    }
};

int main(){

    Derived d;
    cout<<"next"<<endl;
    Derived d1(4);
    cout<<"next"<<endl;
    Base b;
    cout<<"next"<<endl;
    Base b1(55);
    cout<<"next"<<endl;
    Derived d2(22,35);
    cout<<"next"<<endl;
}