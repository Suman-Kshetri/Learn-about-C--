//multilevel inheritance is a type of inheritance in which one super/base class is derived by a child class and and then this child class is further derived by the another chld class

#include<iostream>
using namespace std;

class A{
    protected:
    int roll;

    public:
    void getroll(){
        cout<<"Enter the student roll no: "<<endl;
        cin>>roll;
    }
    void outroll(){
        cout<<"Roll NO:"<<roll<<endl;
    }
};
class B: public A
{
    protected:
    int sub1,sub2;
    public:
    void getmarks(){
        cout<<"Enter the maths marks: ";
        cin>>sub1;
        cout<<"Enter the OOPS marks: ";
        cin>>sub2;
    }
    void showmarks(){
        cout<<"MARKS: "<<endl<<"Maths= "<<sub1<<"  OOPS= "<<sub2<<endl;
    }
};
class C: public B
{
    protected:
    int sports;
    public:
    void input(){
        cout<<"Enter the sports Marks: ";
        cin>>sports;
    }
    void total()
    {
        outroll();
        cout<<"Total Marks: "<< sub1+sub2+sports;
    }
};

int main(){
    C student_detail;
    student_detail.getroll();
    student_detail.outroll();
    student_detail.getmarks();
    student_detail.showmarks();
    student_detail.input();
    student_detail.total();

    return 0;
}