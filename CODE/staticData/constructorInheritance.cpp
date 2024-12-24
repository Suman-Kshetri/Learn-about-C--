#include<iostream>

using namespace std;

class A{
    int num1;
    public:
    A(int x)
    {
        num1=x;
    }
    void display()
    {
        cout<<"The value of A = "<<num1<<endl;
    }
};
class B{
    int num2;
    public:
    B(int y)
    {
        num2=y;
    }
    void print()
    {
        cout<<"The value of B = "<<num2<<endl;
    }
};
class C :public A ,public B{
    int num3;
    public:
    C(int x,int y,int z): A(x),B(y)
    {
        num3=z;
    }
    void output()
    {
        cout<<"The value of C= "<<num3<<endl;
    }
};

int main()
{
    C constructor(10,20,30);
    constructor.display();
    constructor.print();
    constructor.output();
    return 0;
}