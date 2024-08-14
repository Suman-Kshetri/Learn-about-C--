#include<iostream>
using namespace std;
class Exception{
    int i;
    float f;
    char c;
    friend int main();
};
int main(){
    Exception e;
    try
    {
       // e.i=1;
        e.f=1.1;
        // e.c='s';
        throw (e);
    }
    catch(Exception &obj)
    {
        if (obj.i==21)
        {
            cout<<"Integer Exception Caught!";
        }
        if(obj.f==2.2)
        {
            cout<<"float exception caught";
        }
        if(obj.c=='y')
        {
            cout<<"Char exception caught";
        }
    }
    return 0;
}