#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n <= 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << number << " = " << factorial(number) << endl;
    }

    return 0;
}
