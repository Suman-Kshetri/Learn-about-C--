// virtual function is a member function which is  decleared within a base class
// and is redefined (overridden) by a derived class
// virtual function ensure that the correct function is called for an object regardless of the type of reference (or pointer) used
// for function call 
// virtual function are mainly used in achiving the runtime polymorphism

#include<iostream>
using namespace std;

class BaseClass{
    public:
        int base_variable;
        virtual void display()
        {
            cout<<" 1 Displaying Base class Variable base_variable: "<<base_variable<<endl;

        }
};

class DerivedClass: public BaseClass{
    public:
        int derived_variable;
        void display()
        {
            cout<<" 2 Displaying Base class Variable base_variable: "<<base_variable<<endl;
            cout<<" 2 Displaying Derived class variable derived_variable: "<<derived_variable<<endl;
        }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->base_variable=400;
    base_class_pointer->display();
       return 0;

} 