// base class destructor should always be virtual
// when we delete with a base class pointer to a derived class object .....if the base-class destructor is not virtual then delete, like a normal member function calls the destructor for the base class,not the destructor for the derived class
// this will cause only the base part of the object to be destroyed

#include<iostream>
using namespace std;

class Base
{
    public:
    virtual ~Base()//if not used then only the base class object is destroyed;
    {
        cout<<"Destroying base class object....."<<endl;
    }
};
class derived : public Base{
    public:
    ~derived()
    {
        cout<<"Destroying derived class object..."<<endl;
    }
};
int main()
{
    {
    // Base *baseptr=new derived;//dynamic memory allocation of derived type
    // delete baseptr;//memory deallocate;
    Base *bptr;
    derived deriv;
    bptr=&deriv;
    cout<<"End of the scope destructor will be called....."<<endl;
    }
    return 0;
}
