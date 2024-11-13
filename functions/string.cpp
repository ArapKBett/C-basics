#include <iostream>
#include <cstring> // Include the cstring header for strlen()
using namespace std;

int main() {
    char str[] = "Hello, World!";
    int length = strlen(str); // Get the length of the string
    cout << "The length of the string is: " << length << endl;
    return 0;
}
