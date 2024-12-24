#include <iostream>
#include <fstream>
using namespace std;

class student
{
    int roll;
    float marks;
    char name[50];
    char address[50];

public:
    void writeRecord()
    {
        fstream wr;
        wr.open("student.bin", ios::out | ios::app | ios::binary);
        if (!wr.is_open())
        {
            cout << "File cannot be opened";
        }
        else
        {
            int n;
            cout << "Enter no of students: ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "Enter roll number: ";
                cin >> roll;
                cin.ignore();
                cout << "Enter marks: ";
                cin >> marks;
                cin.ignore();
                cout << "Enter name: ";
                cin.getline(name, 50);

                cout << "Enter address: ";
                cin.getline(address, 50);

                wr.write((char *)&roll, sizeof(roll));
                wr.write((char *)&marks, sizeof(marks));
                wr.write((char *)name, sizeof(name));
                wr.write((char *)address, sizeof(address));
            }
            wr.close();
        }
    }
    void displayRecord()
    {
        fstream dr;
        dr.open("student.bin", ios::in | ios::binary);
        if (!dr.is_open())
        {
            cout << "File cannot be opened";
        }
        else
        {
            while (dr.read((char *)&roll, sizeof(roll)))
            {

                dr.read((char *)&marks, sizeof(marks));
                dr.read((char *)&name, sizeof(name));
                dr.read((char *)&address, sizeof(address));
                cout << "Roll Number: " << roll << endl;
                cout << "Marks: " << marks << endl;
                cout << "Name: " << name << endl;
                cout << "Address: " << address << endl;
            }
        }
        dr.close();
    }
    void searchRecord()
    {
        int tempRoll;
        bool found = false;
        cout << "Enter Roll no to search:" << endl;
        cin >> tempRoll;
        fstream sr;
        sr.open("student.bin", ios::in | ios::binary);
        if (!sr.is_open())
        {
            cout << "File cannot be opened";
        }
        else
        {

            while (sr.read((char *)&roll, sizeof(roll)))
            {
                if (tempRoll == roll)
                {

                    sr.read((char *)&marks, sizeof(marks));
                    sr.read((char *)&name, sizeof(name));
                    sr.read((char *)&address, sizeof(address));
                    cout << "Roll Number: " << roll << endl;
                    cout << "Marks: " << marks << endl;
                    cout << "Name: " << name << endl;
                    cout << "Address: " << address << endl;
                }
                else
                {
                    cout << "Record not found" << endl;
                }
            }
        }
        sr.close();
    }
};
int main()
{
    student s;
    int choice;
    cout << "1. Add Record\n 2. Display all Record \n 3.Search Record \n 4. Exit" << endl;

    cout << "enter your choice";
    cin >> choice;

    
        switch (choice)
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
            exit;

        default:
            break;
        }
    
    return 0;
}
