#include<iostream>
using namespace std;
class num2;
class num1{
    int a;
    public:
    void geta()
    {
        cout<<"Enter the value of a:"<<endl;
        cin>>a;
    }
    void showa()
    {
        cout<<a<<endl;
    }
    friend void swap(num1 & ,num2 &);
};
class num2{
    int b;
    public: void getb()
    {
        cout<<"Enter the value of b:"<<endl;
        cin>>b;
    }
    void showb()
    {
        cout<<b<<endl;
    }
    friend void swap (num1 &, num2 &);
};
void swap (num1 &x,num2 &y)
{
    int t;
    t=x.a;
    x.a=y.b;
    y.b=t;
}
int main(){
num1 x;
num2 y;
x.geta();
y.getb();

x.showa();
y.showb();

swap(x,y);cout<<"After swapping:";
x.showa();
y.showb();
    return 0;
}