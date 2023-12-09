#include <iostream>

using namespace std;

class Feet {
    int length;
public:
    Feet() {}
    Feet(int l) {
        length = l;
    }
    void display() const {
        cout << "The distance in feet is " << length << endl;
    }
};

class Meters {
    double length;
public:
    Meters() {}
    Meters(double l) {
        length = l;
    }
    operator Feet()  { // type casting operator
        return Feet(length * 3.281);
    }
};

int main() {
    Meters m(10);
    Feet f =m; // type casting from Meters to Feet
    f.display(); // output: The distance in feet is 32.81
    return 0;
}
