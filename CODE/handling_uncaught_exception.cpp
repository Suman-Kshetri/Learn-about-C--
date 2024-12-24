/*if the exception is thrown but no exception handler is found then the exception is not caught then the program calls the terminate()
function--> terminate()
we can specify our own terminate function with set_terminate() function 
*/
#include<iostream>

using namespace std;

//custom terminate handler
void customterminate()
{
    cout<<"Unhandled exception occured!! terminating the program!!"<<endl;
    abort();//calls the abort to terminate the message is displayed
}
int main()
{
    try{
    set_terminate(customterminate);
    cout<<"throwing an integer exception!!"<<endl;
    throw 32;
    }
    catch(double p)
    {
        cout<<"caught an double exception..."<<endl;
    }
    return 0;
}