#include<iostream>
using namespace std;
class Employee{
    int id;
    static int count;
    public:
    void setdata()
    {
        cout<<"Enter the id:"<<endl;
        cin>>id;
        count++;
    }
    void getdata()
    {
        cout<<"The id of the employee is: "<<id<<" and this is employee number: "<<count<<endl;
    }

static void getcount()
{
    cout<<"The value of count is: "<<count<<endl;
}
};
int Employee::count;
int main(){
    Employee ram,hari, sita;
    ram.setdata();
    ram.getdata();
    Employee::getcount();
    hari.setdata();
    hari.getdata();
    sita.setdata();
    sita.getdata();
    return 0;
}