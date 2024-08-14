// if a catch blocak cannot handle the particular exception then we rethrow the exception

#include<iostream>
using namespace std;
void rethrow(int x,int y)
{
    try
    {
        if(y!=0)
        {
            cout<<"The result of division is : "<<x/y<<endl;

        }
        else
        {
            throw(y);
        }
    }
    catch(int z)
    {
       cout<<"I cannot handle this:Rethrowing"<<endl;
       throw;
    //rethrow
}
}
int main(){
    int x,y;
    cout<<"Enter the dividend "<<endl;
    cin>>x;
    cout<<"Enter the divisor "<<endl;
    cin>>y;
    try
    {
        rethrow(x,y);
    }
    catch(int p)
    {
        cout<<"Caught divide by zero exception in main"<<endl;
    }
    return 0;
}
