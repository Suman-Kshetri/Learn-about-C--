#include<iostream>
#include <string.h>
using namespace std;
void division(int x,int y)
{
    int r=x-y;
    try{
    if(r!=0)
    {
        cout<<"successful";
    }
    else{
        throw r;
    }
    }
    catch(int x)
    {
        cout<<"can't deal!!! rethrowing....."<<endl;
        throw;
    }

}
int main()
{
    int x,y,a;
    char string[20];
    cout<<"ENter your name: "<<endl;
    cin>>string;
    cout<<"ENter value of two number for division: ";
    cin>>x>>y;
    try{
    division(x,y);
    }
    catch(int p)
    {
        cout<<"Exception thrown: x= "<<p<<endl;
    }
    // try{
    //     a=x-y;
    //     if(a==0)
    //     {throw a;}
    //     else{
    //         cout<<"THe division is: x/a : "<<x/a<<endl;
    //     } 
    //     int length =strlen(string);
    //     for(int i=0;i<length;i++)
    //     {
    //         if(i>=6)
    //         {
    //             throw string[i];
        
    //         }
    //         cout<<string[i];
    //     }
    // }
    // //mutltiple catch statement
    // catch(int i)
    // {
    //     cout<<"Exception occured ie: a= "<<i<<endl;
    // }
    // catch(char chr)
    // {
    //     cout<<"Array out of bound: "<<endl;
    //  }
    //  //for catching all exception .
    // // catch(...)
    // // {
    // //     cout<<"Exception occured!!!";
    // // }
    return 0;
}