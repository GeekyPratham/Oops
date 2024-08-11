#include <iostream>
using namespace std;

class Base{
public:
    void fun1(){
        cout<<"fun1 of base"<<endl;
    }
};
class Derived:public Base{

public:
    void fun2(){
        cout<<"fun2 of derived"<<endl;
    }
};
int main(){
    // Base *d;
    // d = new Derived();
    // d->fun1();
    // // d->fun2(); cant be call as pointer is of base class

    // Derived *p;
    // p = new Base();// not possible as object is of derived class but pointer is of derived class
    // p->fun1();
    // p->fun2();
}