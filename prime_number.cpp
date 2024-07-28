#include<iostream>
using namespace std;

class prime{
    int num1;
    int num2;
    static int count;
    bool is_prime(int n){
        if(n<2) return false;
        for(int i=2;i<n;i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    public:
    void input(void);
    void calculate(void);
    static void display(int num1,int num2);
    int get_num1() {return num1;}
    int get_num2() {return num2;}
    
};
int prime::count;

void prime:: input()
{
    cout<<"Enter the initial number: ";
    cin>>num1;
    cout<<"Enter the final number: ";
    cin>>num2;
}
void prime::calculate()
{
    for(int i=num1+1;i<num2;i++)
    {
        if(is_prime(i)){
            count++;
        }
        
    }
}
void prime:: display(int num1, int num2){
    cout<<"The prime number between "<<num1<<" and "<<num2<<" is: "<<count;
}

int main(){
    prime n;
    n.input();
    n.calculate();
    prime::display(n.get_num1(),n.get_num2());
    return 0;
}