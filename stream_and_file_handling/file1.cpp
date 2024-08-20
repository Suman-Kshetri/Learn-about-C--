// wap to write the character entered by the unser until the user presses enter key

#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    char ch;
    //writing character to a file
    cout<<"Writing character to a file: "<<endl;
    ofstream out;
    out.open( "file1.txt",ios::out);
    cout<<"Enter the character: "<<endl;
    while((ch=cin.get())!='\n')
    {
        out.put(ch);
    }
    out.close();
    cout<<"File written!!"<<endl;
    //reading from file
    cout<<"Reading the character from the file: "<<endl;
    ifstream in;
    in.open("file1.txt",ios::in);
    while(in.fail())// error handling while opening the file
    {
        cout<<"Error opening the file !!!"<<endl;
        exit(1);
    }
    cout<<"Context of the file are:"<<endl;
    while(in.get(ch))
    {
        cout<<ch;
    }
    in.close();

    return 0;
}