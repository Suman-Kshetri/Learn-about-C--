#include<iostream>

using namespace std;

template<class T>
T Max(T x, T y)
{
    if (x > y)
        return x;
    else
        return y;
}

template<class T>
T Max(T x, T y, T z)
{
    if (x > y && x > z)
        return x;
    else if (y > x && y > z)
        return y;
    else
        return z;
}

int main()
{
    int x, y, z;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "Enter the third number: ";
    cin >> z;

    int maximum1 = Max(x, y);
    cout << "The maximum of two numbers is: " << maximum1 << endl;

    int maximum2 = Max(x, y, z);  // Corrected the variable name from 'maxmum2' to 'maximum2'
    cout << "The maximum of three numbers is: " << maximum2 << endl;

    return 0;
}
