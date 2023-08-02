/*
In C++, a friend function is a function that is not a member of a class but has access to the private and protected members of that class. It is declared inside the class using the friend keyword and is typically defined outside the class. Friend functions are used to allow external functions or classes to access private or protected members of a class when needed, without the need for them to be a member of that class.f */

#include <iostream>
using namespace std;

class MyClass {
private:
    int x;

public:
    MyClass(int val) : x(val) {}

    // Declaration of the friend function inside the class
    friend void displayX(const MyClass& obj);
};

// Definition of the friend function outside the class
void displayX(const MyClass& obj) {
    cout << "Value of x: " << obj.x << endl;
}

int main() {
    MyClass obj(42);

    // The friend function can access the private member 'x' of MyClass
    displayX(obj); // Output: Value of x: 42

    return 0;
}
