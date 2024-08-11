// #include <iostream>
// using namespace std;

// class Test{
// private : int a;
// protected : int b;
// public : int c;

// friend void fun();
// };

// void fun(){
//     Test t;
//     t.a = 5;
//     cout<<t.a<<" ";
//     t.b = 33;
//     cout<<t.b<<" ";

//     t.c = 23;
//     cout<<t.c<<" ";
// };

// int main(){
//     fun();
// }

// #include <iostream> 
// using namespace std;

// class your;
// class My{
// private:
//     int a = 10;

//     friend your;
// };

// class your{
// public:
//     My m;
//     void fun(){
//         cout<<m.a<<endl;
//     }
// };
// int main(){
//     your y;
//     y.fun();
// }

#include <iostream>
using namespace std;

class Your;
class My{
private : int a;
protected : int b;
public : int c;

friend Your;

};
class Your{
public:
    My m;
    void fun(){
        m.a = 10;
        m.b = 11;
        m.c = 12;
    }
};
int main(){

}