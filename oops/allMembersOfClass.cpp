#include <iostream>
using namespace std;

class Parent{
private:
    int a;
protected:
    int b;
public:
    int c;

    void funParent(){
        a=10;
        b=5;
        c=15;
    }
};

class Child : private Parent{
private:

protected:

public:
    void  funChild(){
        // a = 10; // inheritate publically from Parent class so only protected and public member can access
        b = 5;
        c = 30;
    }
};

class GrandChild : public Child{


public:

    void funGrandChild(){

        // a = 10;  // inheritate publically from Chlid class so only protected and public member can access


        // b = 29; // can not access private member of chlid class
        // c = 34;
    }
};

int main(){

    Child c;
    // c.a = 10;
    // c.b = 23; // we can not access private and proctected member  
    // c.c = 22;// because child class inheriting protectly from parent class 
}