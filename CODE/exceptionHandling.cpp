#include<iostream>
using namespace std;
void divide(int x,int y,int z)
{
    int r=x-y;
    if(r!=0)
    {
        cout<<"Result of z/r = "<<z/r<<endl;
    }
    else{
        throw (r);
    }
}
int main()
{
    try{
        cout<<"we are inside the try block:"<<endl;
        divide(10,10,30);
        divide(30,20,30);
    }
    catch(int i)
    {
        cout<<"Exception caught"<<" x= "<<i<<endl;
    }
    return 0;
}