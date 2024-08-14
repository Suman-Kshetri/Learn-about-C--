//destroy the object and is called automatically
//member function 
//no return type
//doesn't accept any arguments
// same as the class name and has the tilted[~] sign
//used the values/objects once the object goes out of the scope.

#include<iostream>
using namespace std;

int count=0;

class demo{
    public:
    demo(){
        count++;
        cout<<"No of object created: "<<count<<endl;
    }
    ~demo(){
        count--;
        cout<<"No of object destroyed: "<<count<<endl;
    }
};
int main(){
    demo aa,bb,cc,dd;
    {
        demo ee;
    }//one scope is closed then distructors is automatically invoked
    cout<<"Checking"<<endl;
    return 0;
}