/*
static data members are the member of the class that are declared using the static keyword
static function are the function that can only access the static data members
*/

#include<iostream>
using namespace std;

class employee
{
    int id;
    static int count;
    public:
    void setdata()
    {
        cout<<"ENter the id: ";
        cin>>id;
        count++;
    }

    static void getcount()
    {
        cout<<"The value of the count is: "<<count<<endl;
    }
};
int employee :: count=0;
int main()
{
    employee ram,hari,sita,shyam;
    ram.setdata();
    hari.setdata();
    sita.setdata();
    shyam.setdata();
    employee::getcount();
    return 0;

}