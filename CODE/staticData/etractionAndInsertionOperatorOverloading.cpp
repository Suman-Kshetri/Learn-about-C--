#include<iostream>
using namespace std;
class Number{
    int n;
    public:

    friend istream& operator >> (istream& input,Number& num);
    friend ostream& operator << (ostream& output,Number&  num);
};
istream& operator >> (istream& input,Number& num)
{
    input>>num.n;
    return input;
}
ostream& operator << (ostream& output, Number& num)
{
    output<<num.n;
    return output;
}

int main()
{
    Number number;
    cout<<"Enter the number : "<<endl;
    cin>>number;
    cout<<"The number is : ";
    cout<<number<<endl;
    return 0;
}