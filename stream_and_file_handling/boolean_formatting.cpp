#include <iostream>
using namespace std;

int main() {
    bool flag =true;// 1 or 0

    cout << "Default bool: " << flag << endl; // Output: "Default bool: 1"

    cout.setf(ios::boolalpha);               // Set flag to show bool as true/false
    cout << "Boolalpha: " << flag << endl;   // Output: "Boolalpha: true"

    return 0;
}