#include<iostream>

using namespace std;
class BaseClass{
    public:
    int base_variable;
    void display()
    {
        cout<<"The value of the base variable is: "<<base_variable<<endl;
    }
};
class derived_class: public BaseClass{
    public:
    int derived_variable;
    void display()
    {
        cout<<"The value of the derived variable is: "<<derived_variable<<endl;
        cout<<"The value of the derived base variable is: "<<base_variable<<endl;
    }
};


int main()
{
    BaseClass *Base_pointer;
    BaseClass baseobject;
    derived_class derivedobject;
    Base_pointer=&derivedobject;
    Base_pointer->base_variable=50;
    Base_pointer->display();
    //Base_pointer->derived_variable=90; ->error
    //base class pointer when pointed to the object of derived class then it can only access the data members of the base class but
    // not the data members of the derived class but
    // the derived pointer when pointed to object of the derived class then it can access both the data member...

    derived_class *derived_pointer;
    derived_pointer=&derivedobject;
    derived_pointer->base_variable=100;
    derived_pointer->derived_variable=200;
    derived_pointer->display();
    return 0;
}
/*
to allow the pointer of the base class pointing to the derived class object to access the members of the derived class 
virtual funtion/class came to existance...
*/