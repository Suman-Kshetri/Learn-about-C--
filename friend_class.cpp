// friend class is used to minimize the more use of friend funtion 
#include<iostream>
using namespace std;
class complex;
class calculate{
    public: 
    int sum_real_complex(complex a,complex b);
    int sum_img_complex(complex x,complex y);
    int output(int a,int b){
        cout<<"The sum of complex number is: "<< a << " + " << b << " i " <<endl;
    }
};
class complex{

    int real,imaginary;
    public:
    void get_data()
    {
        cout<<"Real: ";
        cin>>real;
        cout<<"Imaginary: ";
        cin>>imaginary;
    }
    friend class calculate;
};
int calculate :: sum_real_complex(complex a,complex b)
{
    int sum=a.real+b.real;
    return sum;
}
int calculate :: sum_img_complex(complex x, complex y)
{
    int img=x.imaginary+y.imaginary;
    return img;
}
int main(){
    complex c1,c2;
    cout<<"Enter the first number: "<<endl;
    c1.get_data();
    cout<<"Enter the second number: "<<endl;
    c2.get_data();
    calculate calc;
    int sum_real=calc.sum_real_complex(c1,c2);
    int sum_img=calc.sum_img_complex(c1,c2);
    calc.output(sum_real,sum_img);
    return 0;
}