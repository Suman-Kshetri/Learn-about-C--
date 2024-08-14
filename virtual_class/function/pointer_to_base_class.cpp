#include<iostream>
using namespace std;

class BaseClass{
    public:
        int base_variable;
        void display()
        {
            cout<<"Displaying Base class Variable base_variable: "<<base_variable<<endl;

        }
};

class DerivedClass: public BaseClass{
    public:
        int derived_variable;
        void display()
        {
            cout<<"Displaying Base class Variable base_variable: "<<base_variable<<endl;
            cout<<"Displaying Derived class variable derived_variable: "<<derived_variable<<endl;
        }
};
int main()
{
    BaseClass *base_class_pointer;
    //if pointer is of base class then the pointer is binded to the base class funtion in runtime--- late binding
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;// pointing base class pointer to derived class 
    base_class_pointer->base_variable=66;
    // base_class_pointer->derived_variable=99;// throws error:
    base_class_pointer->display();
    
    DerivedClass * derived_class_pointer;
    derived_class_pointer=& obj_derived;
    derived_class_pointer->base_variable=69;
    derived_class_pointer->derived_variable=100;
    derived_class_pointer->display();
    return 0;

}