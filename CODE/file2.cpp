#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
class student
{
    int roll;
    string name;
    string address;
    float marks;

public:
    student()
    {
        roll = 0;
        name = "";
        address = "";
        marks = 0.0;
    }
    void writeRecord()
    {   
        
        fstream Wfile;
        Wfile.open("student.txt", fstream::app);
        if (Wfile.is_open())
        {

            cout << "enter roll no ,name, address, marks ";
            cin >> roll;
            // getline(cin,name);
            cin >> name;
            cin.ignore();
            // getline(cin,address);
            cin >> address;
            cin.ignore();
            cin >> marks;
            cin.ignore();
            Wfile << roll << " " << name << " " << address << " " << marks << endl;
        }
        else
        {
            cerr << "The file cannot be opened";
        }
       Wfile.close();
    }
    void readRecord()
    {
        bool found = false;
        int sROLL;
        cout << "Enter the roll no of student that you want to search: ";
        cin >> sROLL;
        cin.ignore();
        fstream Rfile;
        Rfile.open("student.txt", fstream::in);
        if (Rfile.is_open())

        {
            int sRoll;
        string sname;
        string saddress;
        float smarks;
            while (Rfile>>sRoll>>sname>>saddress>>smarks)
            {
               
                if (sROLL==sRoll)
                {
                    cout << "Student roll: " << sRoll << endl;
                    cout << "Student name: " << sname << endl;
                    cout << "Student address:  " << saddress << endl;
                    cout << "Student marks:  " << smarks << endl;
                    found = true;
                    break;
                }
            }
            if (!found )
            {
                cout << "Error cannot find that student with roll no: " << sRoll;
            }
        }
        else
        {
            cerr << "The file cannot be opened";
        }
    }
};
int main()
{
    student stds;
    int choice;
    cout << "1. New Record\n 2. Search Record\n  YOUR CHOICE: ";
    cin >> choice;
    if (choice==1)
    {
        stds.writeRecord();
    }
    else if(choice==2)
    {
        stds.readRecord();
    }
    else{
        cout<<"Invalid choice"<<endl;
    }
    
    
    // switch (choice)
    // {
    // case 1:
        
    //     stds.writeRecord();
    //     break;
    // case 2:
    //     stds.readRecord();
    //     break;
    // default:
    //     break;
    // }

    return 0;
}