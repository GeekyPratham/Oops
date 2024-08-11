#include <iostream>
using namespace std;

class Rectangle{

private:
    int length;
    int breadth;

public:
    // constructors
    Rectangle();//default constructor
    Rectangle(int l,int b);//parameterized constructor
    Rectangle(Rectangle &rect);//deepcopy constructor

    // mutators or setters
    void setLength(int l);
    void setBreadth(int b);


        // accessors or getters
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    
    // actual function or facilitators
    int area();
    int perimeter();

    bool isSquare(); // enquiry function

    ~Rectangle();//destructor or for deallocation of object
};


int main(){
    Rectangle r1(10,10);
    cout<<"Area is : "<<r1.area()<<endl;
    if(r1.isSquare()){
        cout<<"yes it is square"<<endl;
    }
    else{
        cout<<"it is not square"<<endl;
    }

}

Rectangle:: Rectangle(){
    length = 1;
    breadth = 1;

}

Rectangle:: Rectangle(int l,int b){
    length = l;
    breadth = b;

}

Rectangle:: Rectangle(Rectangle &rect){
    length = rect.length;
    breadth = rect.breadth;

}

void Rectangle:: setLength(int l){
    length = l;
}
void Rectangle:: setBreadth(int b){
    breadth = b;
}

int Rectangle:: area(){
    return length*breadth;
}

int Rectangle:: perimeter(){
    return 2*(length+breadth);
}

bool Rectangle:: isSquare(){
    return length == breadth;
}

Rectangle::~Rectangle(){
    cout<<"Rectangle Destroyed";
}