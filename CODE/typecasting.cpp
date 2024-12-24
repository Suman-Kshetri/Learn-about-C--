//implicit conversion


#include<iostream>

using namespace std;
class farenheit;
class celcius{
    float cel;
    public:
    void input()
    {
        cout<<"Enter the temperature in degree Celcius: ";
        cin>>cel;
    }
    void display()

    {
        cout<<"Celcius is: "<<cel<<endl;
    }
    operator farenheit();
};
class farenheit{
    float far;
    public:
    farenheit(float f):far(f){};
    void display(){
        cout<<"Farenheit is: "<<far<<endl;
    }
};
celcius::operator farenheit(){
    float f=(9.0/5.0)*cel+32.0;
    return farenheit(f);
}

int main()
{
    celcius c;
    c.input();
    c.display();
    // farenheit f=c;
    farenheit f= static_cast<farenheit>(c);
    f.display();
    return 0;
}