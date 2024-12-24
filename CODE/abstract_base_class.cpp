//havin at least on one do-nothing function ie: pure virtual function

#include<iostream>
#define pi 3.1415

using namespace std;
//abstract class
class Shape{
    protected: 
    float area;
    public:
    virtual void input()=0;
    virtual void display()=0;
    virtual void calculate_area()=0;
    virtual ~Shape(){};
};
class circle:public Shape{
    float radius;
    public:
    void input()
    {
        cout<<"Enter the radius:"<<endl;
        cin>>radius;
    }
    void calculate_area()
    {
        area=pi*radius*radius;
  
    }

    void display()
    {
        
        cout<<"The area is of circle is: "<<area<<endl;
    }
};
class rectangle: public Shape{
    float length,breadth;
    public:
    void input()
    {
        cout<<"Enter the length and breadth of rectangle: ";
        cin>>length>>breadth;
    }
    void calculate_area(){
        area=length*breadth;

    }
    void display()
    {
        cout<<"The are of rectangle is: "<<area;
    }
};
int main()
{
    Shape* Circle =new circle();
    Shape* Rectangle= new rectangle();

    cout<<"For Circle: "<<endl;
    Circle->input();
    Circle->calculate_area();
    Circle->display();

    cout<<"For rectangle: "<<endl;
    Rectangle->input();
    Rectangle->calculate_area();
    Rectangle->display();
    delete Circle;
    delete Rectangle;
    return 0;
    
}