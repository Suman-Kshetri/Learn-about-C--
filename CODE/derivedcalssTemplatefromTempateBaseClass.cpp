#include<iostream>

using namespace std;

template<class T>

class base{
    T data;
    public:
    base(){}
    base(T a){
        data=a;
    }
    void display()
    {
        cout<<"data: "<<data<<endl;
    }
};
template<class T>

class derived:public base<int>{
    T data;
    public:
    derived(){}
    derived(int a,T b):base<int>(a),data(b){}
void display()
{
    cout<<"Base class: "<<endl;
    base<int>::display();
    cout<<"Derived class: "<<endl;
    cout<<"Data: "<<data<<endl;
}
};

int main()
{
    derived <int> obj(10,30);
    obj.display();
}