#include<iostream>

using namespace std;

template<class T>

class A {
    protected:
    T x;
}; 
template <class T>

class B: public A<T>
{
    public:
    T function(T args)
    {
        this->x=args;
        return this->x;
    }
};
int main()
{
    B <float>obj;
    cout<<"X= "<<obj.function(5.88);
    return 0;}