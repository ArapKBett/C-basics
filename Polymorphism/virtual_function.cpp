#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { // Virtual function
        cout << "Base class show function" << endl;
    }
    virtual ~Base() = default; // Virtual destructor
};

class Derived : public Base {
public:
    void show() override { // Overriding the virtual function
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;

    // Virtual function, binded at runtime
    basePtr->show(); // Output: Derived class show function

    return 0;
}
