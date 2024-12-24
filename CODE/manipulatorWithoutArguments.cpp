#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    char userInput[30];
    string user;
    string input;
    cout<<"Enter your name:";
    cin>>userInput;
    cout<<"After using normal input function: "<<userInput<<endl;
    cin.ignore();
    cout<<"Enter the second name:";
    getline(cin,user);
    cout<<"After using of the getline function: "<<user<<endl;

    cout<<"Enter the third name: ";
    getline(cin,input);
    istringstream  inputString(input);
    string result;
    inputString>>ws;
    getline(inputString,result);
    cout<<"After using of the ws manipulator: "<<result;
    return 0;
}