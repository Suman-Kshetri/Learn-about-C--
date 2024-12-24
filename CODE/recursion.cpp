//print fibonacci series..upto nth term

#include<iostream>
using namespace std;

int fibonaccii(int n)
{
   if(n==0)
     {return 0;}
  else if(n==1){
     return 1;}
   else {
     return fibonaccii(n-1)+fibonaccii(n-2);
}
}

int main(){
    int n;
    cout<<"Enter the number of terms of the fibonaccii series: ";
    cin>>n;
    if(n<=0)
    {
        cout<<"Enter the positive number : ";
    }
    else{
    cout<<"Fibonacci series upto "<<n<< " terms: "<<endl;
    for(int i=0;i<n;i++)
    {
        int back=fibonaccii(i);
        cout<<back<<"  ";
    }
    cout<<endl;
    }
    return 0;
}
