#include <iostream>
using namespace std;

union laptop {
    char brand;  // Only one member can hold a value at a time in a union
    int ram;
    int rate;
};

int main() {
    union laptop lap;
    lap.brand = 'h';  // Assigning value to brand
    cout << "Laptop brand (as char): " << lap.brand << endl;
    
    lap.ram = 16;  // Now assigning value to ram, overwrites previous value
    cout << "The laptop ram is: " << lap.ram << endl;

    lap.rate = 1000;  // Overwriting with rate
    cout << "The laptop rate is: " << lap.rate << endl;
    
    // After assigning rate, lap.ram and lap.brand will be invalid.
    

    //enumeration [ENUM]
    char gender;
    cout<<"Enter the gender [M/F]: ";
    cin>>gender;
    enum find_gender{male,female};
    find_gender gen;
    if(gender = 'M' || 'm')
    {
        gen = male;
    }
    else if (gender ='F'||'f' )
    {
        gen =female;
    }
    else {
        cout<<"Error in input: ";

    }
    switch(gen)
    {
        case male:
        cout<<"The gender is Male.. ";
        break;

        case female:
        cout<<"The gender is female... ";
        break;

        defalut:
        cout<<"Error!!!!!";
    }
    return 0;
}
