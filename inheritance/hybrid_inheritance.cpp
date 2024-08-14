//hybrid inheritance--when we combine the concept of two or more basic inheritance type


// combining multilevel and multiple inheritance

#include<iostream>
using namespace std;
 class A {
    public:    void putdata(){
        cout<<"Inside class A!!!"<<endl;
    }
 };
 class B:public A{
    public:
    void getdata()
    {
        cout<<"Derived of class A!!"<<endl;
    }
 };

 class D{
    public:
    void input()
 {
    cout<<"Inside Class D!!"<<endl;
 }
 };
 class C: public B, public D{
    public:
    void last(){
    cout<<"Derived class from class A to  B and From class D !!!"<<endl;
    }
 };
int main(){
   C out;
   out.putdata();
   out.getdata();
   out.input(); 
   out.last();
    return 0;
}