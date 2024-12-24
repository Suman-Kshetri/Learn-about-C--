// has the member as the templete type..
//class templete are associated with generic type 

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
    rectangle(T x,T y )
    {
        length=x;
        breadth=y;
    }
    T area()
    {
        return length*breadth;
    }
};

int main()
{
    rectangle <int> ri(4,20);
    rectangle <float> rf(6.45,7.8);
    cout<<"Area with integer diameter is: "<<ri.area()<<endl;
    cout<<"Area with fractional dimension is:  "<<rf.area()<<endl;
}