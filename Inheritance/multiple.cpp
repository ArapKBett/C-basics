#include <iostream>
using namespace std;

class Mammal {
public:
    void mammalFeature() {
        cout << "I am a mammal." << endl;
    }
};

class WingedAnimal {
public:
    void wingedFeature() {
        cout << "I can fly." << endl;
    }
};

class Bat : public Mammal, public WingedAnimal {
public:
    void batFeature() {
        cout << "I am a bat." << endl;
    }
};

int main() {
    Bat bat;
    bat.mammalFeature();
    bat.wingedFeature();
    bat.batFeature();
    return 0;
}
