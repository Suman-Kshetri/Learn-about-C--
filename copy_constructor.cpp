//when we need to initialize the variable of an object with the values of variable of anothetr 
// another object  of same type then we use concept of copy constructor
//Copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.
// Copy constructor takes a reference to an object of the same class as an argument.
//both the object should be of same class..

#include<iostream>
using namespace std;

class swapNumbers{
    int num1, num2;
    public:
    swapNumbers(int a, int b)
    {
        num1=a;
        num2=b;
    }
    swapNumbers(swapNumbers &swap)
    {
        num1=swap.num2;
        num2=swap.num1;
    }
    void display(){
        cout<<"a = "<<num1<< " and b = "<<num2<<endl;
    }
};

int main(){
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    swapNumbers original(num1,num2);
    cout<<"Before swapping: "<<endl;
    original.display();
    cout<<"Afrter Swapping: "<<endl;
    swapNumbers swapped(original);
    swapped.display();

    return 0;
}