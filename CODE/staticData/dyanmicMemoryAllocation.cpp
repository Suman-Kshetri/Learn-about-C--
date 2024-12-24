//dynamic memory allocation using char* and length

#include<iostream>
#include<cstring>

using namespace std;

class STRING{
    char* string;
    int length;
    public:
    STRING()
    {
        string=nullptr;
        length=0;
    }
    STRING(char* str)
    {
        length=strlen(str);
        string=new char[length+1];
        strcpy(string,str);
    }
    STRING(const STRING& another)
    {
        length=another.length;
        string=new char[length+1];
        strcpy(string,another.string);
    }
    void display()
    {
        if(string)
        {
            cout<<string<<endl;
        }
        else{
            cout<<"EMpty string";
        }
    }
    STRING operator = (const STRING& another)
    {
        if(this!=&another)
        {
            delete[] string;
        length=another.length;
        string=new char[length+1];
        strcpy(string,another.string);
    }
    return *this;
    }

    STRING operator + (const STRING& another)
    {
        STRING temp;
        temp.length=length+another.length;
        temp.string= new char[temp.length+1];
        strcpy(temp.string,string);
        strcat(temp.string,another.string);
        return temp;
    }
    bool operator ==(const STRING& another)
    {
        return strcmp(string,another.string)==0;
    }
    ~STRING(){
        delete[] string;
    }
};

int main()
{
    STRING str1("suman");
    STRING str2("kshetri");
    cout<<"String 1= ";
    str1.display();
    cout<<"String 2= ";
    str2.display();
    STRING str3;
    str3=str1+str2;//= operator overloading
    cout<<"String 3 = ";
    str3.display();
    STRING str4;
    str4=str1;//  copy constructor 
    cout<<"After using assignment operator:[=] ";
    str4.display();

    if(str1==str4)
    {
        cout<<"String 1 is equall to String 4";

    }
    else{
        cout<<"String1 us not equall to string 3";
    }
    return 0;
}