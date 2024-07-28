//constructor is a special member funtion with the same name as of the class
//it is used to initialize the object of the class
//is is automatically invoked as soon as an object is created
//constuctor has the same name of the class
//constructor has no any return type
//cosntructor allows default argument concept
//constructor can't be inherit
//constructor are always defined inside public: section because to access....because object cant't be called
//constuctors can't be virtual
//Types: 1. default costrucors
    //  2.parametrized constructors
    //  3. copy constructors:


//default constructors:
//having no argument

#include<iostream>
using namespace std;

class complex{
    int real, imag;
    public:
    complex();

    void output();
};
void complex:: output()
    {
        cout<<"The complex numnber is: "<<real<< " + "<< imag<< " i ";

    }

complex:: complex()
{
    real=10;
    imag=40;
}
int main(){
    complex c1;
    c1.output();
    return 0;
}