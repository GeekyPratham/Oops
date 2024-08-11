#include <iostream>
using namespace std;

class Student{
public:

    // data members;
    string name;
    int rollNo;
    int mathMarks;
    int phyMarks;
    int chemMarks;


    // function
    int avg(){
        return (mathMarks+phyMarks+chemMarks)/3;
    }


};

int main(){
    // Student s1; // object is created in stack
    // s1.name = "pratham";
    // s1.rollNo = 26;
    // s1.mathMarks = 99;
    // s1.chemMarks = 98;
    // s1.phyMarks = 97;


/*
    Student s1; // object is created in stack 
    Student *s; // pointer created in heap
    s = &s1; // pointer contain the address of object and we can access property of objrect using this pointer
    s->name = "pratham";
    s->rollNo = 26;
    s->mathMarks = 99;
    s->chemMarks = 98;
    s->phyMarks = 97;

    cout<<"avg marks got by "<<s->name<<" is : "<<s->avg()<<endl;
*/

    Student *s = new Student();// object created in heap
    s->name = "pratham";
    s->rollNo = 26;
    s->mathMarks = 99;
    s->chemMarks = 98;
    s->phyMarks = 97;

    cout<<"avg marks got by "<<s->name<<" is : "<<s->avg()<<endl;
    
}