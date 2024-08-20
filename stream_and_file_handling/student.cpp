// write a program in c++ using complete input/output operation on data file: 
// 1. use a class named student with member : name, roll, marks, address 
// 2. n number of file 
// 3. read current record stored on the file 
// 4. update record on the file 
// 5. search record on the file 
// 6. modify a record on the file 
// 7. delete a record in the file 
// 8. compute the number of record and find file size

#include<iostream>
#include<fstream>
#include<iomanip>
#define max 100

using namespace std;

class student{
    char name[50],address[60];
    int roll;
    float marks;
    public:
    void input(){
        cin.ignore();
        cout<<"Enter Name: ";
        cin.getline(name,20);
        cout<<"Enter roll number: ";
        cin>>roll;
        cin.ignore();
        cout<<"Enter Address: ";
        cin.getline(address,30);
        cout<<"Enter Marks: ";
        cin>>marks;
        cin.ignore();
    }
    void showdata()
    {
         cout << setw(10) << roll
                 << setw(30) << name
                 << setw(40) << address
                 << setw(10) << fixed << setprecision(2) << marks << endl;
    }
    void WriteInFile();
    void ReadFromFile();
    void SearchRecord(int);
    void UpdateRecord(int);
    void DeleteRecord(int);
    void CountRecord();
    void SizeOfFile();
};
void student::WriteInFile(){
    
        ofstream out;
        out.open("Student.txt", ios::app| ios::binary);
        input();
        out.write((char*)this,sizeof(*this));
        out.close();
        cout<<"Record Saved Successfully"<<endl;

}
void student::ReadFromFile()
{
    ifstream in;
    in.open("Student.txt",ios::in|ios::binary);
    if (!in) {
            cout << "Error opening file for reading." << endl;
        }
    cout<<"Detail of student are: "<<endl;
     cout << left << setw(10) << "Roll" << setw(30) << "Name" << setw(40) << "Address" << setw(10) << "Marks" << endl;
    while(in.read((char*)this,sizeof(*this)))
    {
       showdata();
       cout<<"-------------------------------------------------------"<<endl;
    }
    in.close();
}
void student::SearchRecord(int roll){
    ifstream in;
    bool found=false;
    in.open("Student.txt",ios::in);
    
    while(in.read((char*)this,sizeof(*this)))
    {
        if(this->roll==roll)
        {
            cout<<"Detail of student are: "<<endl;
     cout << left << setw(10) << "Roll" << setw(30) << "Name" << setw(40) << "Address" << setw(10) << "Marks" << endl;
            showdata();
            found=true;
            break;
        }
    }
    in.close();
    if(!found)
    {
        cout<<"Record Not Found !!"<<endl;
    }
}
void student::UpdateRecord(int roll)
{
    fstream file;
    file.open("Student.txt",ios::in|ios::out);
    bool found=false;
    while(file.read((char*)this,sizeof(*this)))
    {
        if(this->roll==roll)
        {
            cout<<"Record Found. Enter new Details: "<<endl;
            input();
            file.seekp(-static_cast<int>(sizeof(*this)),ios::cur);
            file.write((char*)this,sizeof(*this));
            found=true;
            cout<<"Record updated Successfully "<<endl;
            break;
        }

    }
    file.close();
    if(!found)
    {
        cout<<"Record not found..Error!!!"<<endl;
    }
}
void student::DeleteRecord(int roll)
{
    ifstream in;
    ofstream out;
    in.open("Student.txt",ios::out);
    out.open("Temporary.txt",ios::in);
    bool found=false;
    while(in.read((char*)this,sizeof(*this)))
    {
        if(this->roll!=roll)
        {
            out.write((char*)this,sizeof(*this));
        }
        else
        {
            found=true;
        }
    }
    in.close();
    out.close();
    remove("Student.txt");
    rename("Temporary.txt","Student.txt");
}
void student::CountRecord() {
    ifstream inFile;
    inFile.open("student.dat",ios::binary);
    int count = 0;
    while (inFile.read(reinterpret_cast<char*>(this), sizeof(*this))) {
        ++count;
    }
    inFile.close();
    cout << "Total number of records: " << count << endl;
}
void student::SizeOfFile()
{
    ifstream infile;
    infile.open("Student.txt",ios::ate);
    long size=static_cast<long>(infile.tellg());
    cout<<"File size: "<<size<<" bytes "<<endl;
    
}
int main(){
    student s;
    int choice;
    do{
        cout<<endl;
    cout<<"MENU: \n 1. Write to file \n 2. Read from file \n 3. Search Record \n 4. Update record \n 5. Delete record \n 6. Count records and file size \n 7.Size of file \n 8. Exit \n ---------------------------------------------------\n Enter your choice:\t";

    cin>>choice;

    
    switch(choice)
    {
        case 1:
        s.WriteInFile();
        break;
        case 2:
        s.ReadFromFile();
        break;
        case 3:
        {
        cout<<"Enter the roll number for searching: ";
        int r=0;
        cin>>r;
        s.SearchRecord(r);
        }
        break;
        case 4:
        {
        cout<<"Enter the roll number for Editing: ";
        int r=0;
        cin>>r;
        s.UpdateRecord(r);
        }
        break;
        case 5:
        {
        cout<<"Enter the roll number for Editing: ";
        int r=0;
        cin>>r;
        s.DeleteRecord(r);
        }
        break;
        case 6:
        s.CountRecord();
        break;
        case 7:
        s.SizeOfFile();
        break;
        case 8:
        exit(0);
        cout<<"Exitting............";
        break;
        default:
        cout<<"\nInput the valid choice...Error!!!!! "<<endl;
    }
    }while(choice!=7);
    return 0;
}