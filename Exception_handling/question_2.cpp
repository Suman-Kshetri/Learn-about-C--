// write a program to read your date of birth and display it. your progrma should throw multiple 
// exception for day,month and other values not in range using the exception class and each exception'
// is handled by separate handler

#include<iostream>
using namespace std;

class DOB
{
    int day, month,year;
    public:
    DOB()
    {
        day=month=year=0;
    }
    DOB(int d,int m,int y)
    {
        year=y;
        month=m;
        day=d;
    }
    class wrongmonth{};
    class wrongday{};
    class wrongyear{};
    void input(){
        cout<<"Year: ";
        cin>>year;
        cout<<"Month: ";
        cin>>month;
        cout<<"Day:";
        cin>>day;
        }
        void check(DOB db)
        {
            if(db.year>2024||db.year<0)
            {
                throw wrongyear();
            }
           else if(db.month>12||db.month<0)
            throw wrongmonth();
           else if(db.day>30||db.day<0)
            throw wrongday();
        }

};
int main()
{
    DOB dob;
    dob.input();
    try{
        cout<<"Enter your date of birth: "<<endl;
        dob.check(dob);

    }
    catch(DOB::wrongyear)
    {
        cout<<"Please check your year. \n 1. Should be less than 2024\n 2. Shouldn't be negative";
    }
    catch(DOB::wrongmonth)
    {
                cout<<"Please check your month. \n 1. Should be less than 12 month\n 2. Shouldn't be negative";

    }
    catch(DOB::wrongday)
    {
                cout<<"Please check your Day. \n 1. Should be less than 30\n 2. Shouldn't be negative";

    }
    return 0;
}