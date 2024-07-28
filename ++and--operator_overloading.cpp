// Why int Parameter for Postfix Increment?
// The int parameter in the postfix increment operator is not used in the function but serves as a distinguishing feature to differentiate it from the prefix increment operator. The C++ language uses this parameter to identify which version of the operator++ is being called.

// Prefix Increment (++x): Does not take any parameters and returns the object itself.
// Postfix Increment (x++): Takes an int parameter (which is ignored inside the function) and returns the object before incrementing.


// #include <iostream>
// using namespace std;

// class count_number {
//     static int count1, count2;  // Static members to count the calls to postfix and prefix increments
// public:
//     // Postfix increment: takes an int parameter (unused), increments count1
//     void operator++(int) {
//         count1 = count1 + 1;
//     }

//     // Prefix increment: increments count2
//     void operator++() {
//         count2 = count2 + 1;
//     }

//     // Static methods to access the counts
//     static int getCount1() {
//         return count1;
//     }

//     static int getCount2() {
//         return count2;
//     }
// };

// // Initialize static members
// int count_number::count1 = 0;
// int count_number::count2 = 0;

// int main() {
//     count_number c1, c2;
//     int num;
//     cout << "Enter the number: ";
//     cin >> num;

//     while (num != 0) {
//         num = num / 2;  // Halve the number in each iteration

//         ++c2;    // Prefix increment: calls operator++() for c2
//         c1++;    // Postfix increment: calls operator++(int) for c1
//     }

//     // Output the counts of postfix and prefix increments
//     cout << "Postfix increment (c++): " << count_number::getCount1() << endl;
//     cout << "Prefix increment (++c): " << count_number::getCount2() << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

class count_number {
    static int count;
public:
    void operator++(int) {
        count=count+1;
    }
    void operator++() {
        count=count+1;
    }
    static int getCount() {
        return count;
    }
};


int count_number::count = 0;

int main() {
    count_number c,c2;
    int num;

    cout << "Enter the number: ";
    cin >> num;
    while (num != 0) {
        num=num/2;
        c++;      // Postfix increment
        cout << "Postfix increment (c++): " << count_number::getCount() << endl;

        ++c2;     // Prefix increment
        cout << "Prefix increment (++c2): " << count_number::getCount() << endl;
    }

    cout << "Final count value: " << count_number::getCount() << endl;

    return 0;
}
