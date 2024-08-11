#include <iostream>
using namespace std;

class Rational{

private:
    int p;
    int q;
public:
    Rational(){
        p=1;
        q=1;
    }
    Rational(int p ,int q){
        this->p = p;
        this->q = q;
    }

    void setP(int p){
        this->p = p;
    }
    void setQ(int q){
        this->q = q;
    }
    Rational operator+(Rational r){//without using friend function
        Rational t;
        t.p = this->p*r.q + this->q*r.p;
        t.q = this->q*r.q;
        return t;
    }
    // friend Rational operator+(Rational r1,Rational r2);// using of frined function
    friend ostream & operator<<(ostream &os,Rational r);
};
// Rational operator+(Rational r1,Rational r2){
//         Rational r;
//         r.p = (r1.p*r2.q)+(r1.q*r2.p);
//         r.q = r1.q*r2.q;
//         return r;
//     }
ostream & operator<<(ostream &os,Rational r){
    os<<r.p<<"/"<<r.q;
    return os;
}
int main(){
    Rational r1(2,5),r2(3,4),r3;
    r3 = r1 + r2;
    cout<<" sum of "<<r1<<" and "<<r2<<" is "<<r3;
}