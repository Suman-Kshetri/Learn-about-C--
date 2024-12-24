/*
operator overloading is the compile time polimorphism
it is an idea of giving special meaning to an existing operator
in c++ without changing its original meaning
*/
#include<iostream>
using namespace std;

class complex_number{
    float real,img;
    public:
    void get_data()
    {
        cout<<"Real: ";
        cin>>real;
        cout<<"Imaginary: ";
        cin>>img;
    }

complex_number operator + (complex_number c2)
{
    complex_number sum;
    sum.real=real+c2.real;
    sum.img= img+c2.img;
    return sum;
}
complex_number operator - (complex_number c2)
{
    complex_number sub;
    sub.real=real-c2.real;
    sub.img=img-c2.img;
    return sub;
}
    void output(complex_number out)

    {
        cout<<out.real<<" + "<<out.img<< " i "<<endl;
    }
    friend complex_number operator *(complex_number c1,complex_number c2);
    friend complex_number operator / (complex_number c1,complex_number c2);
};
complex_number operator *(complex_number c1 , complex_number c2)
{
    complex_number mul;
    mul.real=c1.real*c2.real;
    mul.img= c1.img*c2.img;
    return mul;
}
complex_number operator /(complex_number c1, complex_number c2)
{
    complex_number div;
    div.real=c1.real/c2.real;
    div.img=c1.img/c2.img;
    return div;
}

int main()
{
    complex_number s1,s2,sub,mul,sum,div;
    cout<<"Enter the first complex number: "<<endl;
    s1.get_data();
    cout<<"Enter the second complex number: "<<endl;
    s2.get_data();
    sum= s1+s2;
    cout<<endl;
    cout<<"The sum is: ";
    sum.output(sum);
    sub = s1-s2;
    cout<<endl;
    cout<<"The subtraction is: ";
    sub.output(sub);
    mul= s1*s2;
    cout<<endl;
    cout<<"The multiplication is: ";
    mul.output(mul);
    cout<<endl;
    div = s1/s2;
    cout<<"The division is : ";
    div.output(div);
    cout<<endl;
    return 0;

}