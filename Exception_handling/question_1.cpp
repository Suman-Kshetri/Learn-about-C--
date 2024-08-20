//write a meaningful program to illustrate the use of both Exception with arguments and exception specification for function

#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;

class NEG{
     public:
     double value;
     char description[30];
     NEG()
     {
        value=0;
        strcpy(description,"\0");
     }
     NEG(double v,const char *desc)
     {
        value=v;
        strcpy(description,desc);
     }

};
class Number{
    double num;
    public:
    void input()
    {
        cout<<"Enter the number: ";
        cin>>num;
    }
    double calculation()
    {
        if(num<0)
        {
            throw NEG(num,"Negative number!!!! ");
        }
        else{
            return sqrt(num);
        }
    }
};
int main()

{
    Number n1;
    double result;
    n1.input();
    try{
        cout<<"Find out the square root.."<<endl;
        result=n1.calculation();
        cout<<"Square root of the number is: "<<result<<endl;
    }
    catch(NEG neg)
    {
        cout<<"Exception occured while finding out the square root of the number: "<<endl;
        cout<<"Error!!!!!!!!! "<<neg.description<<endl;
    }
}