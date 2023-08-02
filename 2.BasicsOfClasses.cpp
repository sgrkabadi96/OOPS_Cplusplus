#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int a, b; // Private member variables, accessible only within the class.

public:
    int c, d; // Public member variables, accessible from outside the class.

    void set(int a, int b)
    {
        this->a = a; // "this" pointer is used to distinguish between local variables and class member variables.
        this->b = b;
    }

    void getData()
    {
        cout << a << " " << b << endl; // Print the values of private member variables.
    }
};

int main()
{
    // Access Modifiers in C++:
    // 1. public: Members are accessible from outside the class.
    // 2. private: Members are accessible only within the class itself. Not accessible from outside.
    // 3. protected: Similar to private, but accessible from derived classes (Inheritance).

    Employee emp; // Creating an object of the Employee class.

    // The code below demonstrates the use of public member variables and member functions.
    emp.c = 10; // Accessing and setting public member variable 'c'.
    emp.d = 20; // Accessing and setting public member variable 'd'.

    emp.set(5, 15); // Calling the member function 'set' to set private member variables 'a' and 'b'.

    emp.getData(); // Calling the member function 'getData' to print the private member variables 'a' and 'b'.

    return 0;
}
