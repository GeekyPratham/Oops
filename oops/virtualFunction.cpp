#include <iostream>
using namespace std;

class parent{
public:
    virtual void display(){
        cout<<"display parent class"<<endl;
    }
};
class child : public parent{
public:
    void display(){
         cout<<"display child class"<<endl;
    }
};
int main(){ 
    child c;
    parent *p = &c;
    p->display();// op -> display child class;

    // if virtual is not call then it overriding of function takes place it will display op :-> display of parent class;
}