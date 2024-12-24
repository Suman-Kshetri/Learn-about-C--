#include<iostream>

using namespace std;

class Binary{
    string s;
    public:
    void read_binary(){
        cout<<"Enter the binary number: "<<endl;
        cin>>s;
    }
    void check_binary(){
        for(int i=0;i<s.length();i++)
        {
    
    if(s[i]!='1'&&s[i]!='0')
    {
        cout<<"Incorrect binary number!!!"<<endl;
    }
        }
    }
    void ones_complement()
    {
        check_binary();
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                s[i]='1';
            }
            else{
               s[i]='0';
            }
        }
    }
    void display_binary()
    {
        check_binary();
        cout<<"THe binary number is: "<<endl;
        for(int i=0;i<s.length();i++)
        {
            cout<<s[i]<<" ";
        }
    }
};

int main()
{
    Binary bin;
    bin.read_binary();
    bin.display_binary();
    bin.ones_complement();
    cout<<"The 1's complement is: "<<endl;
    bin.display_binary();
    return 0;
}