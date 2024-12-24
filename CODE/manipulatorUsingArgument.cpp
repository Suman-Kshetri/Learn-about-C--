#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float num=230.908;
    cout<<"Use of Setw(): "<<endl;
    cout<<setw(5)<<num<<setw(5)<<endl;
    cout<<"Use of setfill():" <<endl;
    cout<<setfill('#')<<setw(5)<<num<<setw(5)<<endl;
    cout<<"Using the setprecision() : "<<endl;
    cout<<fixed<<setprecision(4)<<num<<endl;
    cout<<"Using the setbase():  "<<endl;
    int num2=478;
    cout<<"Decimal to Binary: "<<setbase(2)<<endl;
    cout<<"Decimal to Hexadecimal :" <<setbase(16)<<num2<<endl;
    cout<<"Decimal to Octal: "<<setbase(8)<<num2<<endl;
    return 0;
}