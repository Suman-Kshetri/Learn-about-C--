/*types of error:
1. syntax error- due to poor understanding of the programming language
2. run time error- during the running of the program
3. logical error- due to the poor understanding of the problem
4. latent error- the hidden or unknown errors are latent error

error handling refers to the anticipation detection and resolution of errors in the program

different type of exception that may arise in a program
1. divide by zero
2. short of memory
3. trying to open non existing file for read mode
4. array out of bound
5. attempting to initialize an object to an impossible value

throw- throw an exception when a problem shows up
catch- a program cathces an exception with an hander at the place in program where you want to handle the problem
try- identifies a block of code for which particular exception will be activated

*/

// wap in cpp to handle divide by zero exception using the conceot of exception handling
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers a and b"<<endl;
    cin>>a>>b;
    int x;
    try{
        if(a>b)
        {
            x=a-b;
        }
        else 
        x=b-a;
        if(x!=0){
            cout<<"Result of a/x: "<<a/x<<endl;
        } else {
            throw(x);
        }
    }
    catch(int i)
    {
        cout<<"Exception caught: X = "<<x<<endl;
    }
    return 0;

}
