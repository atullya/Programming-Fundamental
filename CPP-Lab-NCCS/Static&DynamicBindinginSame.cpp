// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class parent{
    public:
   virtual void show(){
        cout<<"If virtual is used i won't be shown"<<endl;
    }
    void print(){
        cout<<"I will be displayed because there is no virtual"<<endl;
    }
};

class child:public parent{
    public:
    void show(){
        cout<<"I will be displayed because there is virtual in base class"<<endl;
    }
    void print(){
        cout<<"I won't be displayed"<<endl;
    }
};
int main() {
   parent *p;
   child c;
   p=&c;
   p->show(); //run time binding(dynamic binding/late binding)
   p->print(); // complie time (overloading method/also called as static binding or complier time binding)

    return 0;
}
