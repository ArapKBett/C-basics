#include <iostream>
using namespace std;

void sum(int A[], int B[], int size) {
    int C[size];
    for (int i = 0; i < size; ++i) {
        C[i] = A[i] + B[i];
    }
    cout << "Sum of corresponding elements: ";
    for (int i = 0; i < size; ++i) {
        cout << C[i] << " ";
    }
    cout << endl;
}

int main() {
    int A[5] = {1, 2, 3, 4, 5};
    int B[5] = {6, 7, 8, 9, 10};
    sum(A, B, 5);
    return 0;
}
