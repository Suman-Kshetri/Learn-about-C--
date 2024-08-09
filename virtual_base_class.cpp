// Need for Virtual Base Classes: Consider the situation where we have one class A . This class A is inherited by two other classes B and C. Both these class are inherited into another in a new class D
// data members/function of class A are inherited twice to class D. One through class B and second through class C. When any data / function member of class A is accessed by an object of class D, ambiguity arises as to which data/function member would be called? One inherited through B or the other inherited through C. This confuses compiler and it displays error. --- this is called ambiguity then to reduce this the concept of virtual base class came into......


#include <iostream> 
using namespace std; 

class A { 
    protected:
    int a; 
}; 

class B : virtual public A { 
}; 

class C : public virtual A { 
}; 

class D : public B, public C { 
        public:
    D(int x) 
    { 
        a = x; 
    } 
    void output()
    {
        cout<<"Number is : "<<a<<endl;
    }
}; 

int main() 
{ 
    int n;
    cout<<"Enter the number: ";
    cin>>n;
     D num(n);
     num.output();
    return 0; 
} 
