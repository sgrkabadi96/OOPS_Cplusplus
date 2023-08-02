#include <iostream>
using namespace std;

// Base class - Single Inheritance
class Shape
{
public:
    void draw()
    {
        cout << "Drawing a shape." << endl;
    }
};

// Derived class - Single Inheritance
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a circle." << endl;
    }
};

// Base classes - Multiple Inheritance
class Swimming
{
public:
    void swim()
    {
        cout << "Swimming in water." << endl;
    }
};

class Flying
{
public:
    void fly()
    {
        cout << "Flying in the sky." << endl;
    }
};

// Derived class - Multiple Inheritance
class Duck : public Swimming, public Flying
{
public:
    void makeSound()
    {
        cout << "Duck quacks." << endl;
    }
};

// Base class - Multilevel Inheritance
class Polygon
{
public:
    void draw()
    {
        cout << "Drawing a polygon." << endl;
    }
};

// Derived classes - Multilevel Inheritance
class Triangle : public Polygon
{
public:
    void draw()
    {
        cout << "Drawing a triangle." << endl;
    }
};

class EquilateralTriangle : public Triangle
{
public:
    void draw()
    {
        cout << "Drawing an equilateral triangle." << endl;
    }
};

int main()
{
