// we restrict the type of exception that a function can throw outside of itself
// Wap to illustrate the concept of handling uncaught
#include <iostream>
// #include <exception>

using namespace std;

// Custom terminate handler
void customTerminate() {
    cout << "Unhandled exception occurred. Terminating the program." << endl;
    // abort();  // Calls abort to terminate the program after displaying the message
    exit(0);
}

int main() {
    // Set the custom terminate handler
    

    try {
        set_terminate(customTerminate);
        cout << "Throwing an integer exception..." << endl;
        throw 42;  // Throw an uncaught exception
    }
    catch (double) {
        cout << "Caught a double exception." << endl;
    }

    // No catch for the integer exception, so customTerminate will be called
    return 0;
}
