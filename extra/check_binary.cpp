#include<iostream>

using namespace std;
 
 class Binary{
    private:
    string s;
    void check_binary(void);
    public:
    void read_binary(void);
    void ones_complement(void);
    void display_binary(void);
 };
 void Binary::  read_binary(){
    cout<<"Enter the binary Number:";
    cin>>s;
 }
 void Binary:: check_binary(){
    for(int i=1;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect Binary!!";
            exit(0);
        }
    }
 }
void Binary:: ones_complement(){
    check_binary();
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
    cout<<endl;
}
void Binary:: display_binary(){
    check_binary();
    // cout<<"The binary Number is: "<<s;
     cout<<"The binary number is:";
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
}
int main(){
    Binary b;
    b.read_binary();
    // b.check_binary();
    b.display_binary();
    b.ones_complement();
    cout<<"The 1's complement is"<<endl;
    b.display_binary();
    return 0;
}