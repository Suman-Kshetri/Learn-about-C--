//wap to write and read the details of n students entered by the user using the concept of formatting output/input to a file

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char name[20],add[20];
    int roll;
    int n;
    long long int tel;
    //writing in a file
    ofstream out;
    out.open("file2.txt",ios::out);
    cout<<"Enter the number of record to be stored:";
    cin>>n;
    for(int i=01;i<=n;i++)

    {
        cout<<"Enter the details of the students: "<<endl;
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll no:" ;
        cin>>roll;
        cout<<"Address: ";
        cin>>add;
        cout<<"Telephone: ";
        cin>>tel;
        out<<name<<'\t'<<roll<<'\t'<<add<<'\t'<<tel<<'\n';
        cin.ignore(200,'\n');
    }
    out.close();
    cout<<"Written in file: "<<endl;

    // reading from a file
    ifstream in;
    in.open("file2.txt",ios::in);
    in>>name>>roll>>add>>tel;
    cout<<"Name"<<'\t'<<"Roll "<<'\t'<<"Address"<<'\t'<<"Telephone"<<'\t'<<endl;
    while(in)
    {
        cout<<name<<'\t'<<roll<<'\t'<<add<<'\t'<<tel<<'\n';
        in>>name>>roll>>add>>tel;
    }
    in.close();
    return 0;
}