#include<iostream>
using namespace std;

class cout_number{
    static int count;
    public:
    void operator ++ (int )//postfixed increament
    {
        count= count+1;
    }
    void operator ++()//prefix increment
    {
        count = count+1;
    }
    static int getcount()
    {
        return count;
    }
};
int cout_number ::count =0;
int main()
{
    cout_number c1,c2;
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    while(num!=0)
    {
        num=num/2;
        c1++;
        cout<<"Postfix increment( c++ ): "<<cout_number::getcount()<<endl;
        ++c2;
        cout<<"Prefix increment( ++c ): "<<cout_number::getcount()<<endl;
    }
    cout<<"Final count value: "<<cout_number::getcount()<<endl;
    return 0;
}