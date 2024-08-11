#include <iostream>
using namespace std;

class Complex{

private:
    int real;
    int img;
public:
    Complex(int r=0,int i=0){
        real = r;
        img = i;
    }

    // void display(){
    //     cout<<real<<"+i"<<img<<endl;
    // }

    friend ostream& operator<<(ostream &o,Complex &c1);
};

ostream & operator<<(ostream &out,Complex &c){
    out<<c.real<<"+i"<<c.img<<endl;
    return out;
}
 

int main(){
    Complex c1(3,4);
    // c1.display();
    cout<<c1<<endl; // it is same as below  
    operator<<(cout,c1);
}