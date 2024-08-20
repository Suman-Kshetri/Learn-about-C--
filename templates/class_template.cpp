#include<iostream>

using namespace std;

template<class T>

class rectangle{
    T length,breadth;
    public:
    rectangle()
    {
        length=breadth=0;
    }
    rectangle(T x,T y)
    {
        length=x;
        breadth=y;
    }
    T area()
    {
        return  length*breadth;
    }
};

int main()
{
    
    rectangle<int>ri(4,6);
    rectangle<float>fl(6.5,7.8);
    cout<<"Area with integer dimension is: "<<ri.area()<<endl;
    cout<<"Area with fractional dimension is: "<<fl.area()<<endl;
    return 0;

}