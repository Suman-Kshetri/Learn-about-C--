// program to add two number entered by user using the concept of funtion templete
#include<iostream>
using namespace std;

template<class T>

T addition(T x, T y)
{
    T sum;
    sum=x+y;
    return sum;
}

template <class T1,class T2>

void calculate(T1 x, T2 y)
{
    T1 sum1=x+y;
    cout<<"The value of sum is: "<<sum1<<endl;

}
int main()
{
    int a=1,b=2,sum_int;
    float c=1.1,d=4.4,sum_float;
    int num1=45;
    int num2=78.95;
    sum_int = addition(a,b);
    sum_float =  addition(c,d);
    cout<<"sum of integer is: "<<sum_int<<endl;
    cout<<"Sum of float is: "<<sum_float<<endl;
    calculate(num1,num2);
}