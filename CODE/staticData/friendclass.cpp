/*
a friend class can acess private and protected members of other class in which it is declaed as afriend
*/

#include<iostream>
using namespace std;

class complex;
class calculate{
    public:
    int sumrealnumber(complex a,complex b);
    int sumimaginarynumber(complex a ,complex b);
    void display(int ,int);
};
 class complex{
    int real, imaginary;
    public:
    void getdata()
    {
        cout<<"Real: ";
        cin>>real;
        cout<<"Imaginary: ";
        cin>>imaginary;
    }
    friend class calculate;
 };
 int calculate :: sumrealnumber(complex a,complex b)
 {
    return (a.real+b.real);
 }
 int calculate::sumimaginarynumber(complex a,complex b)
 {
    return (a.imaginary+b.imaginary);
 }
void calculate::display(int realsum,int imaginarysum)
{
    cout<<"The sum of the two complex number is: "<<realsum<<" + "<<imaginarysum<<" i "<<endl;
}

 int main()
 {
    complex c1,c2;
    cout<<"Enter the first complex: ";
    c1.getdata();
    cout<<"Enter the second complex: ";
    c2.getdata();
    calculate calc;
    int real =calc.sumrealnumber(c1,c2);
    int imaginary = calc.sumimaginarynumber(c1,c2);
    calc.display(real,imaginary);
}
 