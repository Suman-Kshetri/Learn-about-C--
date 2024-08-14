//constructor handling in inheritance

#include<iostream>
using namespace std;
 class A{
    protected:
    int a;
    public:
    A(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<"A= "<<a<<endl;
    }
 };
 class B {
    protected:
    int b;
    public:
    B(int y)
    {
        b=y;
    }
    void getdata()
    {
        cout<<"B= "<<b<<endl;
    }
 };

 class C: public A, public B{
    // note:if there is construtor in base class then there should be constructor in derived class to acess the base class constructor
     int c;
     public:
     C(int p,int q,int r):A(p),B(q)
     {
        c=r;
     }
     void show()
     {
        cout<<"C= "<<c<<endl;
     }
 };
int main(){
    C constructor(10,20,30);//calling the constructor
    constructor.display();
    constructor.getdata();
    constructor.show();
    return 0;
}