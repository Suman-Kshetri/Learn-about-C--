//we cannot have object of base class but we can make pointer of base class to access all the derived class


#include<iostream>

using namespace std;

class Base{//Abstract class
    public:
    virtual void show()=0;//pure virtual function
};

class Derived: public Base{
    public:
    void show()
    {
        cout<<"Inside Derived class show(): "<<endl;
    }
};
class Derived2: public Base{
    public:
    void show()
    {
        cout<<"Inside Derived2 class show(): "<<endl;
    }
};
int main()
{
    Base *arr[2]; //array of pointer to base class
    Derived driv1;
    Derived2 driv2;
    arr[0]=&driv1;
    arr[1]=&driv2;
    arr[0]->show();
    arr[1]->show();
    return 0;
}