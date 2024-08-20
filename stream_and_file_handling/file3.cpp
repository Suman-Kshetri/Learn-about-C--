#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

class student{
    char name[40];
    char address[50];
    int roll;
    float marks;
    public:
    void getdata()
    {
        cout<<"Enter Name: ";
        cin.getline(name,40);
        cout<<"Enter Address: ";
        cin.getline(address,50);
        cout<<"Enter the Roll no: ";
        cin>>roll;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void putdata()
    {
        cout << setw(10) << name << setw(20)
     << address << setw(10) << roll << fixed << setprecision(2) << setw(10)
     << marks << endl;

    }
};
int main(){
    student s;
    fstream inout;
    inout.open("file3.txt",ios::out| ios::binary);//The file made is not available for reading
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
        // Write student data to file
    
    for(int i=0;i<n;i++)
    {
        cin.ignore(10,'\n');
        s.getdata();
        inout.write((char *) &s,sizeof(s));
    }
    cout<<"File Written!!"<<endl;
    inout.close();
    cout<<"The details of students are: "<<endl;
    inout.open("file3.txt",ios::in|ios::binary);
    if(inout.fail())//if(!inout)
    {
        cout<<"File doesn't exist!!"<<endl;
        exit(1);
    }
    while(inout.read((char *)&s,sizeof(s)))
    {
        s.putdata();
        cout<<endl;
    }
    inout.close();
    return 0;
}