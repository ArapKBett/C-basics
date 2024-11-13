#include <iostream>
using namespace std;

class ScopeDemo {
public:
    int globalVar; // Global variable within the class

    void setGlobalVar(int val) {
        globalVar = val;
    }

    void display() {
        int localVar = 10; // Local variable
        cout << "Global Variable: " << globalVar << endl;
        cout << "Local Variable: " << localVar << endl;
    }
};

int main() {
    ScopeDemo obj;
    obj.setGlobalVar(20);
    obj.display();
    return 0;
}
  
