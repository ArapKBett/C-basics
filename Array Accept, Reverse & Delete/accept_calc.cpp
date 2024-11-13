#include <iostream>
using namespace std;

int main() {
    int arr[4];
    int sum = 0;

    cout << "Enter 4 integer elements: ";
    for (int i = 0; i < 4; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "The sum of the elements is: " << sum << endl;
    return 0;
}
