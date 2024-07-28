// method overriding / function overriding in inheritance

#include<iostream>
#include<conio.h>
using namespace std;

class A{
    public:
    void display(){
        cout<<"Base class"<<endl;
    }
};
class B: public A{
    public:
    void display(){
        cout<<"Derived class"<<endl;
        // A::display();//to call the base class display
}
};

int main(){
    B bb;
    bb.display();
    bb.A::display();//to call the class A
    return 0;
}

