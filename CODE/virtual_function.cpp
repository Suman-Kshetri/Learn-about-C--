#include<iostream>

using namespace std;

class BaseClass {
public:
    int base_variable;

    // Virtual function to allow polymorphic behavior
    virtual void display() {
        cout << "Base class display method: " << endl;
        cout << "The value of the base variable is: " << base_variable << endl;
    }
};

class DerivedClass : public BaseClass {
public:
    int derived_variable;

    // Override the display function
    void display() override{
        cout << "Derived class display method: " << endl;
        cout << "The value of the derived variable is: " << derived_variable << endl;
        cout << "The value of the base variable is: " << base_variable << endl;
    }
};

int main() {
    // Base class pointer
    BaseClass* base_pointer;

    // Derived class object
    DerivedClass derived_object;

    // Pointing the base class pointer to derived class object
    base_pointer = &derived_object;

    // Setting values
    base_pointer->base_variable = 50;  // Setting base class variable
    derived_object.derived_variable = 100;  // Setting derived class variable

    // Calling display method using base class pointer (Polymorphism)
    base_pointer->display();  // Will call DerivedClass's display due to virtual function

    // Optionally, you can use a derived class pointer
    DerivedClass* derived_pointer = &derived_object;
    derived_pointer->base_variable = 200;
    derived_pointer->derived_variable = 300;
    
    cout << "\nUsing derived class pointer:" << endl;
    derived_pointer->display();  // Will call DerivedClass's display

    return 0;
}
