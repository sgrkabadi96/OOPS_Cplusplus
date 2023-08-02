#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    Shape()
    {
        cout << "Shape constructor called." << endl;
    }

    ~Shape()
    {
        cout << "Shape destructor called." << endl;
    }

    void draw()
    {
        cout << "Drawing a shape." << endl;
    }
};

// Derived class
class Circle : public Shape
{
public:
    Circle()
    {
        cout << "Circle constructor called." << endl;
    }

    ~Circle()
    {
        cout << "Circle destructor called." << endl;
    }

    void draw()
    {
        cout << "Drawing a circle." << endl;
    }
};

int main()
{
    // Creating an object of the derived class
    Circle circleObj;
    cout << "Object creation complete." << endl;

    // Accessing the base class method from the derived class object
    circleObj.draw();

    return 0;
}
