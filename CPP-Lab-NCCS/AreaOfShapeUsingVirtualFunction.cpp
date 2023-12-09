#include <iostream>
using namespace std;

class Shape {
protected:
    double x, y;
    int atullya;
public:
    void get_data() {
        cout << "Enter x: ";
        cin >> x;
        cout << "Enter y: ";
        cin >> y;
    }
    virtual void display_area() {}
};

class Triangle : public Shape {
public:
    void display_area() {
        cout << "Area of Triangle: " << 0.5 * x * y << endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() {
        cout << "Area of Rectangle: " << x * y << endl;
    }
};

int main() {
    Shape *s;
    Triangle t;
    Rectangle r;

    cout << "Enter dimensions of Triangle:" << endl;
    s = &t;
    s->get_data();
    s->display_area();

    cout << "Enter dimensions of Rectangle:" << endl;
    s = &r;
    s->get_data();
    s->display_area();

    return 0;
}
