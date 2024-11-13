#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 integer elements: ";
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reversing the array
    for (int i = 0; i < 5 / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[5 - i - 1];
        arr[5 - i - 1] = temp;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
