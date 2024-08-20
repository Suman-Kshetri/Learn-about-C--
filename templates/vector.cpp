// In C++, a vector is a part of the Standard Template Library (STL)
//  and represents a dynamic array. The vector class is a sequence container that allows elements to be stored in contiguous memory locations, 
//  providing the ability to access elements by index, dynamically resize the array, and efficiently manage memory.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> myVector;

    // Insert elements
    myVector.push_back(20);
    myVector.push_back(10);
    myVector.push_back(40);
    myVector.push_back(30);

    // Sort the vector
    sort(myVector.begin(), myVector.end());

    // Display the sorted vector
    cout << "Sorted vector: ";
    for (int val : myVector) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
