#include <iostream>
using namespace std;

int main() {
    int num = 255;
    double pi = 3.141592653589793;

    cout.setf(ios::hex, ios::basefield);    // Set number base to hexadecimal
    cout.setf(ios::showbase);               // Show base (0x for hex)
    cout << "Hexadecimal: " << num << endl; // Output: "Hexadecimal: 0xff"

    cout.setf(ios::dec, ios::basefield);    // Set number base to decimal
    cout << "Decimal: " << num << endl;     // Output: "Decimal: 255"

    cout.setf(ios::scientific);             // Set scientific notation
    cout.setf(ios::uppercase);              // Uppercase exponent 'E'
    cout << "Scientific: " << pi << endl;   // Output: "Scientific: 3.141593E+00"

    cout.unsetf(ios::scientific);           // Unset scientific notation
    cout.setf(ios::fixed);                  // Set fixed-point notation
    cout << "Fixed: " << pi << endl;        // Output: "Fixed: 3.141593"

    return 0;
}
