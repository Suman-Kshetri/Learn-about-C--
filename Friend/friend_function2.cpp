#include<iostream>
using namespace std;
class complex;
class calculator{
    public:
   int sumrealcomplex(complex a,complex b);
   int sumimgcomplex(complex x, complex y);
   void display(int,int);
};
class complex{
    float real,imaginary;
    friend int calculator ::sumimgcomplex(complex,complex);
    friend int calculator::sumrealcomplex(complex,complex);

    public:
    void setdata()
    {
        cout<<"Real:";
        cin>>real;
        cout<<"imaginary:";
        cin>>imaginary;
    }
};

int calculator::sumrealcomplex(complex a, complex b)

{
      return (a.real+b.real);
    }
    int calculator::sumimgcomplex(complex x, complex y)

{
      return (x.imaginary+y.imaginary);
    }
        void calculator::display(int sumreal,int sumimg)
    {
        cout<<"The sum is: "<<sumreal<<" + "<<sumimg<<" i ";
    }
int main(){
    complex c1,c2;
    cout<<"Enter the complex numbers:"<<endl;
    cout<<"First complex number:"<<endl;
    c1.setdata();
    cout<<"Second complex number:"<<endl;
    c2.setdata();
    calculator calc;
    int realsum=calc.sumrealcomplex(c1,c2);
    int imgsum=calc.sumimgcomplex(c1,c2);
    calc.display(realsum,imgsum);
    return 0;
}