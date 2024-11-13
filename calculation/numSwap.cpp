#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    // Swapping logic
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping, first number: " << a << ", second number: " << b << endl;
    return 0;
}
