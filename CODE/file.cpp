#include<iostream>
#include<fstream>

using namespace std;

class Student{
        int roll;
        float marks;
        char name[30];
        char address[30];
    public:
        void writeRecord(){
            ofstream out;
            out.open("student.dat",ios::out| ios::binary| ios::app);
            if(!out.is_open())
            {cout<<"File cannot be opened";}
            else{
                int n;
                cout<<"Enter the number of students: ";
                cin>>n;
                for(int i=0;i<n;i++)
                {
                    cout<<"Enter Roll no: ";
                    cin>>roll;
                    cin.ignore();
                    cout << "Enter marks: ";
                    cin >> marks;
                    cin.ignore();
                    cout << "Enter name: ";
                    cin.getline(name, 50);
                    cout << "Enter address: ";
                    cin.getline(address, 50);

                    out.write((char*)&roll,sizeof(roll));
                    out.write((char*)&marks,sizeof(marks));
                    out.write((char*)name,sizeof(name));
                    out.write((char*)address,sizeof(address));
                }

            }
            out.close();
        }
        void displayRecord(){
            fstream output;
            output.open("student.dat",ios::in|ios::binary);
            if(!output.is_open())
            {
                cout<<"File cannot be opened!!!!";
            }
            else{
                while(output.read((char*)&roll,sizeof(roll)))
                {
                    output.read((char*)&marks,sizeof(marks));
                    output.read((char*)name,sizeof(name));
                    output.read((char*)address,sizeof(address));
                    cout<<"Roll Number: "<<roll<<endl;
                    cout<<"Marks: "<<marks<<endl;
                    cout<<"Name: "<< name<<endl;
                    cout<<"Address: "<< address<<endl;
                }
            }
            output.close();
        }
        void searchRecord(){
            int temproll;
            bool found=false;
            cout<<"Enter the roll number to search: "<<endl;
            cin>>temproll;
            fstream search;
            search.open("student.dat",ios::in| ios::binary);
            if(!search.is_open())
            {
                cout<<"File cannot be opened!!";
            }
            else{
                while(search.read((char*)&roll,sizeof(roll)))
                {
                    if(temproll==roll)
                    {
                    search.read((char*)&marks,sizeof(marks));
                    search.read((char*)name,sizeof(name));
                    search.read((char*)address,sizeof(address));
                    cout<<"Roll Number: "<<roll<<endl;
                    cout<<"Name: "<< name<<endl;
                    cout<<"Address: "<< address<<endl;
                    }
                    
                }
            }
            search.close();
        }
        void updateRecord()
        {
            int temproll;
            cout<<"Enter the roll number of student for updating record: "<<endl;
            cin>>temproll;

            fstream update;
            update.open("student.dat",ios::in|ios::out|ios::binary);
            if(!update.is_open()){
                cout<<"File cannot be opened!!"<<endl;
            }
            else{
                while(update.read((char* )&roll,sizeof(roll)))
                {
                    if(temproll==roll)
                    {
                    update.read((char*)&marks,sizeof(marks));
                    update.read((char*)name,sizeof(name));
                    update.read((char*)address,sizeof(address));
                    cout<<"Record found!!!\nEnter the new data:"<<endl;
                    cout<<"Name: "<<endl;
                    cin>>name;
                    cout<<"Address: "<<endl;
                    cin>>address;
                    cout<<"Marks: "<<endl;
                    cin>>marks;
                    cout<<"Roll no: "<<endl;
                    cin>>roll;
                    update.seekp(-(sizeof(marks)+sizeof(name)+sizeof(roll)+sizeof(address)),ios::cur);

                    update.write((char*)&roll,sizeof(roll));
                    update.write((char*)&marks,sizeof(marks));
                    update.write((char*)name,sizeof(name));
                    update.write((char*)address,sizeof(address));
                    }
                }
                update.close();
            }
        }
};
int main()

{
    Student s;
    int choice;
    while(1){
    cout<<"1. Add record\n2.Display all record\n3.Search Record \n4.Update Record \n5.Exit\n";
    cout<<"Enter your choice";
    cin>>choice;
    switch(choice)
    {
        case 1:
        s.writeRecord();
        break;
        case 2:
        s.displayRecord();
        break;
        case 3:
        s.searchRecord();
        break;
        case 4:
        s.updateRecord();
        break;
        case 5:
        exit(0);
        default:
        cout<<"Input Error!!!!!";
    }
    }
    return 0;

}