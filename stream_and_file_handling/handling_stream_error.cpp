#include<iostream>
using namespace std;

int main(){
    int i;
    while(true)
    {
        cout<<"Enter an integer: ";
        cin>>i;
        if(cin.good())
        {
            cin.ignore(10,'\n');
            break;
        }
        cin.clear();
        cout<<"Incorrect Input: ";
        cin.ignore(10,'\n');
    }
    cout<<"Integer is: "<<i;
    
    return 0;
}