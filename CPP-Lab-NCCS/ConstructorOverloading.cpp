
#include<iostream>
using namespace std;
class MyClass {
    int value1;
    int value2;
public:
    // Default constructor
    MyClass() {
        value1 = 0;
        value2 = 0;
    }
    // Overloaded constructor with one parameter
    MyClass(int v) {
        value1 = v;
        value2 = 0;
    }
    // Overloaded constructor with two parameters
    MyClass(int v1, int v2) {
        value1 = v1;
        value2 = v2;
    }
    
    void display(){
        cout<<value1<<" "<<value2<<endl;
    }
};

int main() {
    MyClass obj1; // calls default constructor
    obj1.display();
    MyClass obj2(5); // calls constructor with one parameter
    obj2.display();
    
    MyClass obj3(5, 10); // calls constructor with two parameters
    obj3.display();
    return 0;
}
