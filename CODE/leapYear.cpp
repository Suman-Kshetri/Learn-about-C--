#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"ENter the year to check the leap year or not : ";
    cin>>year;

    // if(year%4==0)
    // {
    //     if(year%100!=0)
    //     {
    //        cout<<"LEAP YEAR!!"<<endl;
    //     }
    //         else{
    //             cout<<"NOT LEAP YEAR!!"<<endl;
    //         }
    //     }
    //     else{
    //         if (year%400==0)
    //         {
    //             cout<<"LEAP YEAR!! ";
    //         }
    //         else{
    //             cout<<"NOT LEAP YEAR!! ";
    //         }
            
    //     }
    if (year%4==0 && year%100!=0 || year%400==0)
    {
        cout<<"LEAP YEAR!!!"<<endl;
    }
    else{
        cout<<"NOT LEAP YEAR!!! "<<endl;
    }
    return 0;
    
    }
