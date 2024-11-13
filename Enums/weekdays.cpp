#include <iostream>
using namespace std;

enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    Day today = Wednesday;
    cout << "Day: " << today << endl; // Output will be the integer value of Wednesday
    return 0;
}
