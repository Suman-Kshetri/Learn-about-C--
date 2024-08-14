//operator overloading

#include<iostream>
using namespace std;

class numbers{
    int num;
    public:
    void get_data(){
        cin>>num;
    }
    friend int operator + (numbers,numbers);
    int operator * (numbers num2)
    {
        int mul=num*num2.num;
        return mul;
    }
};

int operator + (numbers num1,numbers num2){
     int sum=num1.num+num2.num;
    return sum;
} 
int main(){
    numbers num1,num2;
    cout<<"Enter the first number:"<<endl;
    num1.get_data();
    cout<<"Enter the second number:" <<endl;
    num2.get_data();
    cout<<"The sum of two numbers is: "<<endl;
    int sum=num1+num2;
    cout<<"The sum is: "<<sum<<endl;
    int mul=num1*num2;
    cout<<"The product of two numbers is: "<<mul<<endl;
    return 0;
}