// parametrized constructor
// a constructor having arguments/ parameters as built in datatypes...

#include<iostream>
using namespace std;

class complex{
    int real,img;
    public:
    complex(int a, int b)
    {
        real=a;
        img=b;
    };
    friend int calculate_real(complex,complex);
    friend int calculate_img(complex,complex);
};
void display(int a,int b)
    {
        cout<<"The sum is : "<<a<< " + "<<b<<" i ";
    }

int calculate_real(complex a, complex b)
{
    int real_sum=a.real+b.real;
    return real_sum;
}
int calculate_img(complex x, complex y)
{
    int img_sum=x.img+y.img;
    return img_sum;
}

int main(){
    int x1,x2,y1,y2;
    cout<<"Enter the first complex number:"<<endl;
    cout<<"Real: ";
    cin>>x1;
    cout<<"Imaginary: ";
    cin>>y1;
    
    cout<<"Enter the Second complex number:"<<endl;
    cout<<"Real: ";
    cin>>x2;
    cout<<"Imaginary: ";
    cin>>y2;

    complex c1(x1,y1), c2(x2,y2);
    int real_sum=calculate_real(c1,c2);
    int img_sum=calculate_img(c1,c2);
    display(real_sum,img_sum);
    return 0;
}