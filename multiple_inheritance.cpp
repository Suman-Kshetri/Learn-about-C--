//multiple inheritance
// when there are more than one base which is inherited by the single deived class


#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void input(){
        cout<<"Enter the number: "<<endl;
        cin>>a;
    }
};
class B{
    protected:
    int b;
    public:
    void getdata()
    {
        cout<<"Enter number: " <<endl;
        cin>>b;
    }
};
class C: public A,public B{
    public:
    void addition()
    {
        cout<<"Sum is: "<<a+b;
    }
};
int main(){
    C sum;
    sum.input();
    sum.getdata();
    sum.addition();
    return 0;
}