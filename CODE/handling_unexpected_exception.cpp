/*if a function specifies which exception it throws and it throws and unexpected exception then , an unexpected function is called-> unexcepted()
we can specify our own unexception function =->> set_unxecepted()
if no set_unexception then unexcepted is called then terminate() is called 
*/

#include<iostream>

using namespace std;

void unexception()
{
    cout<<"Unexception exception occured !!"<<endl;
    terminate();
}
void calculate(int x, int y) throw(int)
{
    if(y==0)
    {
        throw "A";
    }
    if(x==1)
    {
        throw 1.0;
    }
}
int main()
{
    set_unexpected(unexception);
    try{
        calculate(10,20);
    }
    catch(int c)
    {
        cout<<"Integer Exceeption!!!"<<endl;
    }
    catch(double d)
    {
        cout<<"double exception>"<<endl;
    }
    return 0;
}