// #include <iostream>
// #include <cmath>
// #include <cstring>

// using namespace std;

// class NEG {
// public:
//     double value;
//     char description[50];

//     // Default constructor
//     NEG() {
//         value = 0;
//         strcpy(description, "\0");
//     }

//     // Parameterized constructor with const char*
//     NEG(double v, const char* desc) {
//         value = v;
//         strcpy(description, desc);
//     }
// };

// class Number {
//     double num;
// public:
//     void readnum() throw();    // Function is not supposed to throw any exceptions
//     double sqroot() throw(NEG); // Function might throw NEG exception
// };

// void Number::readnum() throw() {
//     cout << "Enter the number: ";
//     cin >> num;
// }

// double Number::sqroot() throw(NEG) {
//     if (num < 0)
//         throw NEG(num, "Negative number!!");
//     else
//         return sqrt(num);
// }

// int main() {
//     Number n1;
//     double result;
//     n1.readnum();
//     try {
//         cout << "Trying to find the square root..." << endl;
//         result = n1.sqroot();
//         cout << "\nSquare root is: " << result << endl;
//         cout << "Success.... Exception is not raised!!!" << endl;
//     } catch (NEG n) {
//         cout << "Cannot find the square root of: " << n.value << endl;
//         cout << "\nError!!! " << n.description << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

class NEG {
public:
    double value;
    char description[50];

    // Default constructor
    NEG() {
        value = 0;
        strcpy(description, "\0");
    }

    // Parameterized constructor with const char*
    NEG(double v, const char* desc) {
        value = v;
        strcpy(description, desc);
    }
};

class Number {
    double num;
public:
    void readnum() noexcept;       // Function is guaranteed not to throw any exceptions
    double sqroot() noexcept(false); // Function might throw exceptions
};

void Number::readnum() noexcept {
    cout << "Enter the number: ";
    cin >> num;
}

double Number::sqroot() noexcept(false) {
    if (num < 0)
        throw NEG(num, "Negative number!!");
    else
        return sqrt(num);
}

int main() {
    Number n1;
    double result;
    n1.readnum();
    try {
        cout << "Trying to find the square root..." << endl;
        result = n1.sqroot();
        cout << "\nSquare root is: " << result << endl;
        cout << "Success.... Exception is not raised!!!" << endl;
    } catch (NEG n) {
        cout << "Cannot find the square root of: " << n.value << endl;
        cout << "\nError!!! " << n.description << endl;
    }

    return 0;
}
