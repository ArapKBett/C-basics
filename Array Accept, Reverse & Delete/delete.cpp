#include <iostream>
using namespace std;

int main() {
    int arr[4];
    int pos;

    cout << "Enter 4 integer elements: ";
    for (int i = 0; i < 4; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the position (1-4) of the element to delete: ";
    cin >> pos;

    if (pos < 1 || pos > 4) {
        cout << "Invalid position!" << endl;
    } else {
        for (int i = pos - 1; i < 3; ++i) {
            arr[i] = arr[i + 1];
        }

        cout << "Array after deletion: ";
        for (int i = 0; i < 3; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
