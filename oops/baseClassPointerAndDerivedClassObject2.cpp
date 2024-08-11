#include <iostream>
using namespace std;

class Rectangle{
public:
    void area(){
        cout<<"area of Rectangle"<<endl;
    }
};
class Cuboid : public Rectangle{
public:
    void volume(){
        cout<<"volume of cuboid"<<endl;
    }
};
int main(){
    // Rectangle *r;
    // r = new Cuboid();
    // r->area();
    // r->volume(); // incorrect


    // Cuboid *c;
    // c = new Rectangle(); // not possible 

    // Rectangle c;// object is rectangle
    // Cuboid *p = &c; // rectangle is not cuboid thats why i go error message
    // p->area();
    // p->volume();

    Cuboid c;
    Rectangle *p = &c;
    p->area();
    // p->volume();
}