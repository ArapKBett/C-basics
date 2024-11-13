#include <iostream>
using namespace std;

int main() {
    int Q = 10;
    int* P = &Q; // Pointer P holds the address of variable Q

    cout << "Value of Q: " << Q << endl; // Output: 10
    cout << "Address of Q: " << &Q << endl; // Output: Address of Q
    cout << "Pointer P points to value: " << *P << endl; // Output: 10

    return 0;
}
