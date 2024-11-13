#include <iostream>
using namespace std;

int globalVar = 10; // Global variable

void display() {
    int localVar = globalVar; // Accessing global variable
    cout << "Local variable (assigned from global): " << localVar << endl;
}

int main() {
    cout << "Global variable: " << globalVar << endl;
    display();
    return 0;
}
