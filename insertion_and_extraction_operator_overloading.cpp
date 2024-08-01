#include<iostream>
using namespace std;

class Test{
    int x;
    public:
    Test(int x=0):x{x} {};
    friend istream&  operator>>(istream& input,Test& obj);
    friend ostream& operator << (ostream& output,Test& obj);
};
istream&  operator>>(istream& input,Test& obj)
{
    input>>obj.x;
    return input;
}
ostream& operator << (ostream& output,Test& obj)
{
    output<<obj.x<<endl;
    return output;
}
;
int main(){
    Test t;
    cout<<"Enter the number: ";
    cin>>t;
     cout<<"The value of A= ";  
    cout<<t;
    return 0;
}