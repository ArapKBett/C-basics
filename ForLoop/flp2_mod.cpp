#include <iostream>
using namespace std;

int main() {
    for (int X = 50; X <= 60; ++X) {
        if (X == 55) {
            continue; // Skip the rest of the loop when X is 55
        }
        if (X == 58) {
            break; // Exit the loop when X is 58
        }
        cout << X << " ";
    }
    return 0;
}
