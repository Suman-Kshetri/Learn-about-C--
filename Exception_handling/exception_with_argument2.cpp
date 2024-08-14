#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class NEG{
    public:
    double value;
    char description[50];
    NEG()
    {
        value=0;
        strcpy(description,"\0");
    }
    NEG (double v, const char*desc)
    {
        value=v;
        strcpy(description, desc);
    }
};
class Number
{
    double num;
    public:
     void readnum();
     double sqroot();
};
void Number:: readnum()
{
    cout<<"Enter the number: ";
    cin>>num;
}
double Number:: sqroot()
{
    if(num<0)
    throw NEG(num,"Negative number!!");
    else 
    return sqrt(num);
}
int main()
{
    Number n1;
    double result;
    n1.readnum();
    try{
        cout<<"trying to find the square root...."<<endl;
        result=n1.sqroot();
        cout<<"\n Square root is: "<<result<<endl;
        cout<<"Success.... Exception is not raised!!!";
  
    }
    catch(NEG n)
    {
        cout<<"Cannot find the square root of:  "<<endl;
        cout<<"\n Error!!! "<<n.description<<endl;
    }
}