#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Inline function to calculate the area
    inline double area() const {
        return length * width;
    }

    // Inline function to calculate the perimeter
    inline double perimeter() const {
        return 2 * (length + width);
    }

    // Function to display dimensions
    void display() const {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << endl;           // Using inline function
        cout << "Perimeter: " << perimeter() << endl; // Using inline function
    }
};

int main() {
    // Create a Rectangle object
    Rectangle rect(10.5, 5.5);
    
    // Display dimensions, area, and perimeter
    rect.display();

    return 0;
}
