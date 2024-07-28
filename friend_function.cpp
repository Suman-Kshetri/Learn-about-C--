//addition of two complex number:
/*
properties of friend funtion
1. not in the scope of class
2. cannot be called by the object of that class since it is not in the scope of class like: c1.calculate_sum --invalid
3.can be called/ invoked without the help of object
4. usually contains objects as arguments
5.can be declared inside public or private or protected section of class
6.it cannot directly access the members by their names and need 
object_name.member_name to access any members
*/
#include<iostream>
using namespace std;
class complex{
    int real;
    int imaginary;
    public:
    void get_data()
    {
        cout<<"Real: ";
        cin>>real;
        cout<<"Imaginary: ";
        cin>>imaginary;
    }
    friend void calculate_sum(complex &o1,complex &o2);
};
void calculate_sum(complex &o1, complex &o2)
{
    int real_sum=o1.real+o2.real;
    int imaginary_sum=o1.imaginary+o2.imaginary;
    cout<<"The sum of two real number is: "<<real_sum<<" + "<<imaginary_sum<<"i"; 
}
int main(){
    complex c1,c2,sum;
    c1.get_data();
    c2.get_data();
    calculate_sum(c1,c2);
    return 0;
}