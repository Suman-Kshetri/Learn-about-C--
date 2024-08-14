#include <iostream>
// #include <exception>

using namespace std;

// Custom unexpected exception handler
void unexpectedHandler() {
    cout << "Unexpected exception occurred!" << endl;
    terminate(); 
}

void mightThrow() throw(int) { // Specifying that mightThrow() only throws int
    throw 3.14;  // double, which is unexpected
}

int main() {
    // Set the custom unexpected handler
    set_unexpected(unexpectedHandler);

    try {
        mightThrow(); // function that may throw an unexpected exception
    } catch (int num) {
        cout << "Caught an integer exception: " << num << endl;
    }

    return 0;
}
