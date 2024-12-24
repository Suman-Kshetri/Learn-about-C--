/*
a friend function if not a member function of a class but granted the special access to
and can modify  the private and protected member of the class 
*/

//wap to find the largest among two number using the friend function using two class members
#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void input()
    {
        cout<<"ENter the first number: ";
        cin>>a;
    }
    friend void max(A,B);
};
class B{
    int b;
    public:
    void input(){
        cout<<"ENter the seond number:";
        cin>>b;
    }
    friend void max(A,B);
};
void max(A aa,B bb)
{
    if(aa.a>bb.b)
    {
        cout<<"THe largest number is first number: "<<aa.a<<endl;
    }
    else if(aa.a==bb.b)
    {
        cout<<"BOth the number are equall!!";
    }
    else{
        cout<<"The largest number is second number: "<<bb.b <<endl;
    }
}
int main()
{
    A num1;B num2;
    num1.input();
    num2.input();
    max(num1,num2);
}