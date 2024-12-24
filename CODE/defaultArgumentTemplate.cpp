#include<iostream>
using namespace std;

template <class T=double, int size=4>

class Array{
    T a[size];
    public:
    void input(T* temp)
    {
        for(int i=0;i<size;i++)
        {
            a[i]=temp[i];
        }
    }
    void display();
};
template <class T,int s>
void Array<T,s>::display()
{
    T sum=0;
    for(int i=0;i<s;i++)
    {
        sum=sum+a[i];
    }
    cout<<"the sum is: "<<sum;

}
int main()
{
    int temp[]={1,2,3,4,5,6};
    Array<int,5>obj1;
    obj1.input(temp);
    double d[]={10.12,20.11,16.6,40.22};
    Array<>obj2;
    obj2.input(d);
    obj1.display();
    obj2.display();
    return 0;
}