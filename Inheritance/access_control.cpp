#include <iostream>
using namespace std;

class Base {
protected:
    int protectedVar;
public:
    int publicVar;
    Base() : protectedVar(0), publicVar(0) {}
};

class Derived : public Base {
public:
    void setValues(int a, int b) {
        protectedVar = a; // Accessible because it's protected
        publicVar = b;    // Accessible because it's public
    }
    void display() {
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Public Variable: " << publicVar << endl;
    }
};

int main() {
    Derived obj;
    obj.setValues(10, 20);
    obj.display();
    return 0;
}
