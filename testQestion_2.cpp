// Assume class employee stores Name, Age, and ID , basic salaty,total overtime(hr) in a month and hourly rate. write a c++ program to read to read the data of N employee and compute Net Salary of Each Employee(consider Income Tax(IT)= 30% of the gross salary)

#include<iostream>
 #define max 100

using namespace std;

class Employee{
    private:
    char empName[50];
    int ID,Age,hour_overtime;
    double basic_sal,hour_rate,total_overtime,net_sal,income_tax,gross_salary;
    static int i;
    public:
    void input_data()
    {
        cout<<"Enter Employee No: "<<i<<endl;
        cout<<"Employee ID: ";
        cin>>ID;
        cout<<"Name: ";
        cin>>empName;
        cout<<"Age: ";
        cin>>Age;
        cout<<"Basic Salary: ";
        cin>>basic_sal;
        cout<<"Enter the overtime hour in a month: ";
        cin>>hour_overtime;
        cout<<"Enter the rate of overtime per Hour: ";
        cin>>hour_rate;
        cout<<endl;
    }
    void calculate()
    {
        total_overtime=hour_overtime*hour_rate;
        gross_salary=basic_sal+total_overtime;
        income_tax=0.3*gross_salary;
        net_sal=gross_salary-income_tax;
        i++;
    }
    
    void output()
    {
        cout<<"The details of "<<i<<" Employee is: "<<endl;
        cout<<"---------------------------------------------"<<endl;
        cout<<"Employee ID: "<<ID<<endl;
        cout<<"Name: "<<empName<<endl;
        cout<<"Age: "<<Age<<endl;
        cout<<"Basic Salary: "<<basic_sal<<endl;
        cout<<"Net Salary: "<<net_sal<<endl;
        cout<<"---------------------------------------------"<<endl<<endl;
        
    }
};
int Employee:: i=1;

int main()
{
    Employee Emp[max];
    int N,j;
    cout<<"Enter the number of Employee you want to input: "<<endl;
    cin>>N;
    for(j=1;j<=N;j++)
    {
        Emp[j].input_data();
        Emp[j].calculate();
    }
    for(j=1;j<=N;j++)
    {
        Emp[j].output();
    }
    return 0;
}