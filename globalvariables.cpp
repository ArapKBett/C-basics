#include <iostream>
using namespace std;

int globalVar = 10; // Global variable

void display() {
    int localVar = 20; // Local variable
    cout << "Global Variable: " << globalVar << endl;
    cout << "Local Variable: " << localVar << endl;
}

int main() {
    display();
    cout << "Global Variable in main: " << globalVar << endl;
    // cout << "Local Variable in main: " << localVar << endl; // This would cause an error
    return 0;
}
