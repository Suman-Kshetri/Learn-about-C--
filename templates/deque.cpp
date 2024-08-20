// deque (double-ended queue) is an alternative to
// vector that provides efficient insertion and deletion at both the front and back:
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> myDeque = {10, 20, 30};

    // Add element to the front
    myDeque.push_front(5);

    // Remove element from the front
    myDeque.pop_front();

    // Display the deque
    cout << "Deque contents: ";
    for (int val : myDeque) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
