#include<iostream>

using namespace std;

template<class T>

T addition(T x,T y)
{
    T sum;
    sum=x+y;
    return sum;
}
int main()
{
    int a=1,b=2,sum_int;
    float c=1,d=2.2,sum_float;
    sum_int=addition(a,b);
    sum_float=addition(c,d);
    cout<<"Sum of the integer is: "<<sum_int<<endl;
    cout<<"Sum of the float is: "<<sum_float<<endl;
    return 0; 
}