//hierarchical inheritance
// when one base class is being inherited by the multiple derived class ....

#include<iostream>
using namespace std;

    class A {
        public:
        void message()
        {
            cout<<"Welcome to inheritance !!"<<endl;
        }
    };
    class B: public A{
        public:
        void display(){
            cout<<"First sub class created of Class A!!!"<<endl;
        }
    };
    class C:public A{
        public:
        void output()
        {
            cout<<"Second sub class created of the Class A!!!"<<endl;
        }
    };

int main(){
    B print;
    cout<<"Front the first Derived Class B:"<<endl;
    print.message();
    print.display();
    C out;
    cout<<"From the second derived class C:"<<endl;
    out.message();
    out.output();
    return 0;
}