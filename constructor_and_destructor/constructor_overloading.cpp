// creating multiple/more than one constructor have the different type or arguments and this provision of having more than one constructor in a program called constructor overloadin

#include<iostream>
using namespace std;

class overloading{
    int a;
    public:
    overloading (){
        a=30;
    }
    overloading (int x)
    {
        a=x;
    }
    overloading (overloading &b)
    {
        a=b.a;
    }
    void output()
    {
        cout<<"A = "<<a<<endl;
    }
};

int main(){
    overloading loading;
    cout<<"Using default constructor: "<<endl;
    loading.output();
    overloading over(90);
    cout<<"Uing parametrized constructor: "<<endl;
    over.output();
    overloading copy(over);
    cout<<"Uing copy constructor: "<<endl;
    copy.output();
    return 0;
}
