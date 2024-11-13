#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    int getArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5, 3);
    cout << "Area: " << rect.getArea() << endl;
    return 0;
}
