/*
is a special member function with the same name as of the class and is invoked autmatically
it is used to initialize invoked as soon as object is created
constructor has no return type
constructor allows default argument type
constructor can't be inherited
constructor are always defined inside public:
constructor can't be virtual

*/

/*  
1. default constructor
->having no argument or defalut value of every argument
2. parametrized constructor
->having the argument / parameter as built in
3. copy constructor  
-> when we need ot initialize the variable of an object with the values of variable of another 
--> of same type we use concept of copy constructor 
->takes an reference to an object of the same class as an argument
both the object should be of same type
*/

#include<iostream>

using namespace std;

class swapNumbers{
    int a,b;
    public:
    swapNumbers()//default constructor
    {
        a=0;b=0;
    }
    swapNumbers(int x,int y)//parametrized constructor
    {
        a=x;b=y;
    }
    swapNumbers(swapNumbers& swap)
    {
        a=swap.b;
        b=swap.a;
    }
    void display()
    {
        cout<<"A= "<<a<<" and B= "<<b<<endl;
    }
};

int main()
{
    int num1,num2;
    cout<<"ENter the first number: ";
    cin>>num1;
    cout<<"ENter the second number:  ";
    cin>>num2;
    swapNumbers original(num1,num2);
    cout<<"NUmber before swapping: "<<endl;
    original.display();
    swapNumbers swapped(original);
    swapped.display();
    return 0;
}