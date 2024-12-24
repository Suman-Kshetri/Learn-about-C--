/*
write a program which contains base class that ask the user to enter the a complex number and make a derived class thats add the complex  number of its own with the base. Finally make the third class that is friend of derived and calculate the difference of base complex number and its own complex number.
*/

#include <iostream>

using namespace std;

class complex{
    int realBase , imgBase;

    public:
    void inputBase()
    {
        cout<<"Base complex: "<<end;
  
        cout<<"Enter the real number : ";
        cin>>realBase;
        cout<<"Enter the img number: ";
        cin>>imgBase;
    }
};
class derived: public complex{
    int derivedReal, derivedImaginary;
    public:
    void inputDerived()
    {
        cout<<"Enter the real number: ";
        cin>>derivedReal;
        cout<<"ENter the imaginary number: ";
        cin>>derivedImaginary;
    }
}
int main()
{
    return 0;
}