 //both derived and base class having the same function in both the classes
 
 #include<iostream>
using namespace std;
 class A{
    protected:
    int a;
    public:
    void input()
    {
        cout<<"Enter the value: ";
        cin>>a;
    }
    void output()
    {
        cout<<"A= "<<a<<endl;
    }
 };
 class B {
    protected:
    int b;
    public:
   void input(){
    cout<<"Enter the value : ";
    cin>>b;
   }
    void getdata()
    {
        cout<<"B= "<<b<<endl;
    }
 };
class C:public A, public B{
    int c;
    public:
    // void input()
    // {
    //     cout<<"\n   Enter value: ";
    //     cin>>c;
    //     A::input(); // to remove ambiguity
    //     B::input();
    // }
    void getdata()
    {
        cout<<"\nEnter the value: ";
        cin>>c;
        A::input();
        B::input();
    }
    void display()
    {
        cout<<"A= "<<a<<" B= "<<b<<" C= "<<c;
    }
};
int main()
{
    C cc;
    cc.getdata();
    cc.display();
    // cc.getdata();
    // cc.output();
    return 0;
}