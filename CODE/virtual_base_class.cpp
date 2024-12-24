//if the base class in derived is derived more than one time ie: B->A,C->A, and D->B,C... then A is being derived in class D more than once
//so virtual base class is used

#include<iostream>

using namespace std;

class A{
    protected:
    int a=10;
    public:
    
    void display()
    {
        cout<<"The value of A = "<<a<<endl;
    }
};
class B:virtual public A
{
    protected:
    int b=20;
    public:
    void display()
    {
        cout<<"The value of B = "<<b<<endl;
    }
};
class C :virtual public A

{protected:
    int c=30;
    public:
    
    void display()
    {
        cout<<"The value of C = "<<c<<endl;
    }
};
class D:public B, public C
{
    public:

    void display(){
    cout<<"The value of A, B, C = "<<a<<" , "<<b<<" , "<<c<<" , "<<endl;
    }
};

int main()
{
    D dd;

    dd.display();
}