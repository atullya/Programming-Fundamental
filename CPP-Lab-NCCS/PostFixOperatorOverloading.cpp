
#include<iostream>
using namespace std;
class MyClass {
    int value;
public:
    MyClass(int v) : value(v) {}
    friend MyClass operator++ (MyClass &obj, int);
    void display() {
        cout << value << endl;
    }
};

MyClass operator++ (MyClass &obj, int) {
    MyClass temp=obj;
    obj.value++;
    return temp;
}

int main(){
    MyClass obj(5);
MyClass temp = obj++;
temp.display();

}
