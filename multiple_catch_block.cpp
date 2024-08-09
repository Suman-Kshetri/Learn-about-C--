//wap to illustrate the concept of multiple catch block

#include<iostream>

using namespace std;
int main()
{
    char name[]="Pokhara";
    int a,b,x,n;
    cout<<"Enter the two number a and b: ";
    cin >>a>>b;
    x=a-b;
    try{
        if(x==0)
        {
            throw(x);
        }
        else {
            cout<<"Result of a/x is : "<<a/x<<endl;
        }
        for (int i=0;i<10;i++)
        {
            if (i>6)
            {
                throw(name[i]);
            }
            else{
                cout<<name[i];
            }

        }
    }
    catch(int num)
    {
        cout<<"\nDivide by zero error"<<endl;
    }
    catch(char c)
    {
        cout<<"\nArray out of bound exception"<<endl;
    }
    return 0;
}