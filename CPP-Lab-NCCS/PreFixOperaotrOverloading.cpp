
#include<iostream>
using namespace std;
class MyClass {
    int value;
public:
    MyClass(int v) : value(v) {}
    friend MyClass& operator++ (MyClass &obj);
    void display() {
        cout << value << endl;
    }
};

MyClass& operator++ (MyClass &obj) {
    obj.value++;
    return obj;
}


int main(){
  MyClass obj(5);
++obj;
obj.display();

}
