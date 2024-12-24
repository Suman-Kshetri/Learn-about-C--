//complex number

#include<iostream>
using namespace std;

class calculate{
    public:
    int sumrealcomplex(complex a,complex b);
    int sumimaginarycomplex(complex a,complex b);
    void display(int,int);
};
class complex{
    float real,imaginary;
    friend int calculate::sumrealcomplex(complex, complex);
    friend int calculate::sumimaginarycomplex(complex,complex);
    public:
    void setdata()
    {
        cout<<"Real: ";
        cin>>real;
        cout<<"Imaginary: ";
        cin>>imaginary;
    }
};
int calculate::sumrealcomplex(complex a,complex b)
{
    return (a.real+b.real);
}
int calculate::sumimaginarycomplex(complex a,complex b)
{
    return(a.imaginary+b.imaginary);
}
void display(float a, float b)
{
    cout<<"The sum is: "<<a<<" + "<<b<<" i ";
}

int main()
{
    complex c1,c2;
    cout<<"Enter first complex number: "<<endl;
    c1.setdata();
    cout<<"Enter second complex number: "<<endl;
    c2.setdata();
    calculate calc;
    int sumreal= calc.sumrealcomplex(c1,c2);
    int sumimaginary = calc.sumimaginarycomplex(c1,c2);
    calc.display(sumreal,sumimaginary);
    return 0;

}