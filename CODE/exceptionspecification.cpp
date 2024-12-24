//in the specification exception we can restrict the type of exception 
// we can throwout side of itself or we can prevent any funtion from throwing any exception
//for this we need to add throw clause to the function definition
//only those data types that are contained in parenthesis separated by commas only
//be thrown 

#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;

class NEG{ 
    public:
    double value;
    char description[39];
   
    NEG()
    {
        value=0;
        strcpy(description,"");
    }
    NEG(int num, char* desc)
    {
        value=num;
        strcpy(description,desc);
    }
};
class Number{
    double num;
    public:
    void input() noexcept(true){
        cout<<"Enter the number: ";
        cin>>num;
    }
    double squareroot() noexcept(false)
    {
        if(num>=0)
        {
            return sqrt(num);
        }
        else{
            throw NEG(num,"Negative NUmber!!");
        }
    }
};

int main()
{
    Number n1;
    n1.input();
    try{
        double res= n1.squareroot();
        cout<<"The square root is: "<<res<<endl;
    }
    catch(NEG n)
    {
        cout<<"Exception occured due to the value of number : "<<n.value<<endl;
        cout<<"Error!!!" <<n.description<<endl;
    }
    return 0;
}
