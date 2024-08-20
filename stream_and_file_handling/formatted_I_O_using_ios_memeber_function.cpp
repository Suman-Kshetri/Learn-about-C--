// Using ios Member Functions

#include <iostream>
using namespace std;

int main() {
    cout.width(10);            // Set field width to 10
    cout.fill('*');            // Set fill character to '*'
    cout.setf(ios::left);      // Left-align the output
    cout << 123 << endl;       // Output: "123*******"

    cout.width(10);            // Set field width to 10
    cout.fill(' ');            // Set fill character to space (default)
    cout.setf(ios::right);     // Right-align the output
    cout << 123 << endl;       // Output: "       123"

    cout.precision(4);         // Set precision to 4 digits
    cout.setf(ios::fixed);     // Use fixed-point notation
    cout << 123.456789 << endl; // Output: "123.4568"

    return 0;
}
