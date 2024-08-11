// operator overloadint 

// complex number

#include <iostream>
using namespace std;

class Complex{

public:
    int real;
    int imaginary;

    // default or parameterized constructor
    Complex(int l = 0,int i = 0){
        real = l;
        imaginary = i;
    }
    
    // function of add

    Complex add(Complex &c){
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
};
int main(){
    
    Complex c1(2,5);
    Complex c2(3,4);
    Complex c3;
    c3 = c1.add(c2);
    // c3=c1+c2;
    cout<<c3.real<<"+i"<<c3.imaginary<<endl;
    
}