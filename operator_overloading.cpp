//using the concept of operator overloading we can overload any built in operator
//i.e w can assign new definition to an existing operator:
//some operator that can't be overloaded:
    // 1. scope resolution operator
    // 2. class member access operator(.,*)
    // 3. size of operator (sizeof())
    // 4.conditional operator

    //overloading of + operator

#include<iostream>
using namespace std;

class complex_number{
    float real, img;

    public:
    
    void get_data(void){
        cout<<"Real: ";
        cin>>real;
        cout<<"Imaginary: ";
        cin>>img;
    }
    complex_number operator + (complex_number c2)
    {
        complex_number sum;
        sum.real=real+ c2.real;
        sum.img=img+c2.img;
        return sum;
    }
    complex_number operator - (complex_number c2)
    {
        complex_number sub;
        sub.real=real- c2.real;
        sub.img=img-c2.img;
        return sub;
    }
    complex_number operator * (complex_number c2)
    {
        complex_number mul;
        mul.real=real*c2.real-img*c2.img;
        mul.img=img*c2.real+real*c2.img;
        return mul;
    }
    complex_number operator / (complex_number c2)
    {
        complex_number div;
        float denominator=c2.real*c2.real+c2.img*c2.img;
        div.real=(real*c2.real+img*c2.img)/denominator;
        div.img=(img*c2.real-real*c2.img)/denominator;
        return div;
    }
    void output(complex_number out)
    {
        cout<<out.real<< " + "<<out.img<<" i "<<endl;
    }
};
int main(){
    complex_number c1,c2,sum,sub,mul,div;
    cout<<"Enter the fist complex number: "<<endl;
    c1.get_data();
    cout<<"Enter the second complex number: "<<endl;
    c2.get_data();
    
    sum=c1+c2;
    cout<<"The sum is: ";
    sum.output(sum);
    sub=c1-c2;
    cout<<"The subtraction is: ";
    sub.output(sub);
   mul=c1*c2;
    cout<<"The multiplication is: ";
    mul.output(mul);
   div=c1/c2;
    cout<<"The division is: ";
    div.output(div);
    return 0;
}