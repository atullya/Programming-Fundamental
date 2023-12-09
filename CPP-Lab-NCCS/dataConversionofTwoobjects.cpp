#include <iostream>
using namespace std;

class d1 {
    int feet;
    int inch;

public:
    d1(){};
    d1(int f, int i){
        feet = f;
        inch = i;
    }

    operator int ()  {
        return feet * 12 + inch;
    }
     void display()  {
        cout << "feet: " << feet << " Inch: " << inch << endl;
    }
};

class d2 {
    int centimeter;
    int meter;

public:
    d2(){};
    d2(int cm, int mm){
        centimeter = cm;
        meter = mm;
    }

    d2(d1 d){
        int totalInches = d;
        meter = totalInches / 100;
        centimeter = (totalInches % 100) * 2.5;
    }

    void display()  {
        cout << "Meter: " << meter << " Centimeter: " << centimeter << endl;
    }
};

int main() {
    d1 d(10, 6);
    d2 d22 = d;
    d.display();
    d22.display();
    return 0;
}
