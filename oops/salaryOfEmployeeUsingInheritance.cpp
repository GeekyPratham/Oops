#include <iostream>
using namespace std;

class Employee{

private:
    int id;
    string name;
public:
    Employee(int id,string name){
        this->id = id;
        this->name = name;

    }
    int getId(){
        return id;
    }
    string getName(){
        return name;
    }

};

class fullTimeEmployee : public Employee{

private:
    int salary;

public:
    fullTimeEmployee(int id,string name,int sal):Employee(id,name){
        salary = sal;
    }

    int getSalary(){
        return salary;
    }
};

class partTimeEmployee : public Employee{

private:
    int wages;

public:
    partTimeEmployee(int id,string name,int wag):Employee(id,name){
        wages = wag;
    }

    int getSalary(){
        return wages;
    }
};
int main(){
    fullTimeEmployee f(1,"alice",50000);
    partTimeEmployee p(2,"bob",10000);

    cout<<"for full time employee : "<<f.getId()<<" and name is : "<<f.getName()<<" and salary is : "<<f.getSalary()<<endl;
   
    cout<<"for part time employee : "<<p.getId()<<" and name is : "<<p.getName()<<" and salary is : "<<p.getSalary()<<endl;
}