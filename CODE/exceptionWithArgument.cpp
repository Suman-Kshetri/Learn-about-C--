//when the program may demand more information about the cause of exception

#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class NEG{
    public:
    double value;
    char description[20];
    NEG()
    {
        value=0;
        // strcpy(description,'\0');
        description[0]='\0';
    }
    NEG(double v, char*desc)
    {
        value =v;
        strcpy(description,desc);
    }
};
class Number{
    double num;
    public:
        void readnum()
        {
            cout<<"Enter the number: ";
            cin>>num;
        }
        double squareroot()
        {
            if(num<0)
            {
                throw NEG(num,"Negative number!!!!");
            }
            else
            {
                return sqrt(num);
            }
        }
};
int main()
{
    Number n1;
    double res;
    n1.readnum();
    try{
        cout<<"Trying to find the Square Root:"<<endl;
        res=n1.squareroot();
        cout<<"Square root is: "<<res<<endl;
        cout<<"No Exception is found!!!!"<<endl;
    }
    catch(NEG n)
    {
        cout<<"Exception occured in the square root of number: "<<n.value<<endl;
        cout<<"Error!!!"<<n.description<<endl;
    }
    return 0;
}