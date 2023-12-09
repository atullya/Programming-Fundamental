#include <iostream>
using namespace std;

int main() {
    int a = 5;
    double b = 7.8;

    // Implicit type casting from int to double
    double c = a;
    cout << "c = " << c << endl;

    // Explicit type casting from double to int
    int d = (int) b;
    cout << "d = " << d << endl;

    return 0;
}
