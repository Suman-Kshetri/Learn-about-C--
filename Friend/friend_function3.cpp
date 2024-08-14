#include<iostream>
using namespace std;
class B;
class  A{
    int a;
    public:
    void getdata()
    {
        cout<<"Enter the first number:";
        cin>>a;
    }
    friend void max(A,B);
};
class B{
    int b;
    public:
    void getdata()
    {
        cout<<"Enter the second number:";
        cin>>b;
    }
    friend void max(A,B);
};

void max(A aa,B bb)
{
    if(aa.a>bb.b)
    {
        cout<<"The first number is greatest: ie: "<<aa.a<<endl;
    }
    else
    {
        cout<<"The second number is the greatest: ie: "<<bb.b<<endl;
    }
}
int main(){
    A num1;
    B num2;
    num1.getdata();
    num2.getdata();
    max(num1,num2);
    return 0;
}