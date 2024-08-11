#include <iostream>
using namespace std;

class parent{
public:
    void display(){
        cout<<"display parent class"<<endl;
    }
};
class child : public parent{
public:
    void display(int x){
         cout<<"display child class"<<endl;
    }
};
int main(){
    // parent p;
    // p.display();

    // child c;
    // c.display();

    // child ch;
    // ch.parent::display(); // if same function how to call parent function from object of child

    parent *p = new child();
    p->display();
}