#include <iostream>

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;

    // Virtual destructor
    virtual ~Shape(){};
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() {
        std::cout << "Drawing Circle" << std::endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw()  {
        std::cout << "Drawing Rectangle" << std::endl;
    }
};

int main() {
    // Shape s; // Error: Cannot instantiate an abstract class
    // Create derived class objects
    Shape* circle = new Circle();
    Shape* rectangle = new Rectangle();

    circle->draw();      // Output: Drawing Circle
    rectangle->draw();   // Output: Drawing Rectangle

    // Clean up
    delete circle;
    delete rectangle;

    return 0;
}
