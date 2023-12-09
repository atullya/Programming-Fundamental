#include <iostream>
using namespace std;
class MyClass {
  private:
    int x;
  public:
    MyClass(int x_val) : x(x_val) {}
    bool operator==( MyClass &other) {
        return x == other.x;
    }
};

int main() {
    MyClass a(10);
    MyClass b(15);
    MyClass c(10);
    if (a == b) 
        cout << "a and b are equal" << endl;
    else
        cout << "a and b are not equal" << endl;
    // Outputs: "a and b are not equal"
    if (a == c) 
        cout << "a and c are equal" << endl;
    else
        cout << "a and c are not equal" << endl;
    // Outputs: "a and c are equal"
}
