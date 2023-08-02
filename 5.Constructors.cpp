#include <iostream>
using namespace std;

// Default Constructor
class MyClassDefault {
public:
    int value;

    // Default constructor
    MyClassDefault() : value(0) {}
};

// Parameterized Constructor
class Point {
public:
    int x, y;

    // Parameterized constructor
    Point(int xVal, int yVal) : x(xVal), y(yVal) {}
};

// Copy Constructor
class Student {
public:
    string name;
    int age;

    // Copy constructor
    Student(const Student& other) : name(other.name), age(other.age) {}
};

// Constructor Overloading
class Rectangle {
public:
    int length, width;

    // Default constructor
    Rectangle() : length(0), width(0) {}

    // Parameterized constructor
    Rectangle(int l, int w) : length(l), width(w) {}

    // Constructor with a single parameter (Square)
    Rectangle(int side) : length(side), width(side) {}
};

// Explicit Constructor
class ExplicitDemo {
public:
    int value;

    // Explicit constructor
    explicit ExplicitDemo(int val) : value(val) {}
};

int main() {
    // Default Constructor
    MyClassDefault objDefault;
    cout << "Default Constructor: " << objDefault.value << endl; // Output: Default Constructor: 0

    // Parameterized Constructor
    Point point(5, 10);
    cout << "Parameterized Constructor: (" << point.x << ", " << point.y << ")" << endl; // Output: Parameterized Constructor: (5, 10)

    


}
   
