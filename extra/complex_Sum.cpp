//sum of the two complex number using friend function
#include<iostream>
using namespace std;
class complex;

class calculate{
    public:
    int sum_real_complex(complex,complex);
    int sum_imaginary_complex(complex,complex);
    void display_data(int a,int b)
    {
        cout<<"The sum is: "<< a << " + "<< b << " i ";
    }
};
class complex{
    float real,imaginary;
    public:
    friend int calculate:: sum_real_complex(complex a,complex b);
    friend int calculate:: sum_imaginary_complex(complex x,complex y);
    void input_data(){
        cout<<"Real: ";
        cin>>real;
        cout<<"Imaginary: ";
        cin>>imaginary;
    }
    // friend int calculate_sum(complex,complex);
};

int calculate:: sum_real_complex(complex a, complex b)
{
    int sum =a.real+b.real;
    return sum;
}
int calculate::sum_imaginary_complex(complex  x,complex  y)
{
    int sum=x.imaginary+y.imaginary;
    return sum;
}
int main(){
    complex c1,c2;
    cout<<"Enter the first complex number:"<<endl;
    c1.input_data();
    cout<<"Enter the second complex number:"<<endl;
    c2.input_data();
    cout<<"The sum of complex number is:"<<endl;
    calculate calc;
    int sum_real=calc.sum_real_complex(c1,c2);
    int sum_img=calc.sum_imaginary_complex(c1,c2);
    calc.display_data(sum_real,sum_img);
    
    return 0;
}