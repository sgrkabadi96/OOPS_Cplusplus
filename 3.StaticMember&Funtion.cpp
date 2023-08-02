#include <iostream>
using namespace std;

class MyClass
{
public:
    static int staticVar; // Static data member

    // Static member function to access and modify staticVar
    static void modifyStaticVar(int value)
    {
        staticVar = value;
    }

    // Static member function to retrieve the value of staticVar
    static int getStaticVar()
    {
        return staticVar;
    }

    int x; // Non-static data member

    // Constructor to initialize x
    MyClass(int val) : x(val) {}

    // Static member function cannot access non-static data members directly
    // But it can access non-static members through an object
    static void displayXUsingObj(const MyClass &obj)
    {
        cout << "x value using object: " << obj.x << endl;
    }
};

// Initialization of static data member
int MyClass::staticVar = 0;

int main()
{
    // Using static member function and static data member
    cout << "Initial value of staticVar: " << MyClass::getStaticVar() << endl; // Output: 0

    MyClass::modifyStaticVar(42);                                                         // Modifying staticVar using static member function
    cout << "Value of staticVar after modification: " << MyClass::getStaticVar() << endl; // Output: 42

    // Creating objects of the class
    MyClass obj1(10);
    MyClass obj2(20);

    // Static member function can be called without objects
    MyClass::displayXUsingObj(obj1); // Output: x value using object: 10
    MyClass::displayXUsingObj(obj2); // Output: x value using object: 20

    return 0;
}
