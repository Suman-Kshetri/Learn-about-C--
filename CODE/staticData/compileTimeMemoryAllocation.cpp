//compile time memory allocation using char[]

#include<iostream>
#include<cstring>
#define MAX_LENGTH 100

using namespace std;

class STRING
{
private:
    char str[MAX_LENGTH+1];
    int length;
public:
    STRING(){
        str[0]= '\0';
        length=0;
    }
    STRING (const char*s)
    {
        strncpy(str,s,MAX_LENGTH);
        str[MAX_LENGTH]='\0';
        length=strlen(str);
    }
    STRING operator = (STRING& s2)
    {
        if(this!=&s2)
        {
        strncpy(str,s2.str,MAX_LENGTH);
        str[MAX_LENGTH]='\0';
        length=strlen(str);
    }
    return *this;
    }
    STRING operator + (STRING& s2)
    {
        STRING temp;
        strncpy(temp.str,str,MAX_LENGTH);
        temp.str[MAX_LENGTH]='\0';
        strncat(temp.str,s2.str,MAX_LENGTH-strlen(temp.str));
        temp.length=strlen(temp.str);
        return temp;
    }
    bool operator == (STRING & s2)
    {
        return strcmp(str,s2.str)==0;
    }
    void display()
    {
        cout<<str<<endl;
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
    STRING str3=str1+str2;
   
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

