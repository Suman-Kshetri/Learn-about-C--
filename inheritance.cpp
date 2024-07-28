//is a concept/gives capability  of code reusiability
// or using the prexisting code
//types of inheritance 
//  1. single inhertance
//  2. multiple inheritance 
//  3. multievel inheritance 
//  4. hybrid inheritance: when two or more heritance are combined
//  5. hierarchical inheritance:when two classes inherit the properties of the one base class


//defining derived classes

//  acccess specifiers: are called visibility modifiers in inheritance
//these modifiers are used to define the inherit classes
//by default the inherit is private
/*
visibility            private       protected    public
modifiers

private              no inherit      private     private
protected            no inherit      protected   protected
public               no inherit      protected   public
*/



//single inheritance
// when one base class is inhertited by the only one sub-class
 // base class/parent/super class
 // derived classs/child/ sub class

#include<iostream>
#include<conio.h>
using namespace std;

class A{
    protected:
    // private:
    int x;
    public:
    void input(){
        cout<<"Enter the number: "<<endl;
        cin>>x;
    }

    // int getx(){
    // return x;
    // }
    
};

class B:public A
{
    int y;
    public:
    void getdata()
    {
        cout<<"Enter the number: "<<endl;
        cin>>y;
    }
    void putdata()
    {
        cout<<"The addition is: "<<x+y;
        // cout<<"The addition is: "<< getx()+y;
    }
};

/*
class A{                        class B{
    protected---x                   private----y
    public---input                  protected---x
}                                   public-----getdata, putdata,input
                                    }
*/


int main(){
    B aa;
    aa.input();
    aa.getdata();
    aa.putdata();
    return 0;
}
