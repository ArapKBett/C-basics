#include <iostream>
using namespace std;

class Print {
public:
    void display(int i) {
        cout << "Integer: " << i << endl;
    }

    void display(double f) {
        cout << "Float: " << f << endl;
    }

    void display(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print obj;
    obj.display(5);
    obj.display(3.14);
    obj.display("Hello");
    return 0;
}
