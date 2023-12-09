#include<iostream>
using namespace std;

class A{
    int x;
    public:
    A(){};
    A(int a){
        x=a;
    }
    void displayA(){
        cout<<"x="<<x<<endl;
    }
};
class B{
    public:
    int y;
    B(int b){
        y=b;
    }
    void displayB(){
        cout<<"y="<<y<<endl;
    }
};
class C:public A,public B{
    int z;
    int zz;
    public:
    
    C(int c, int d):A(c), B(d){
        z=c;
        zz=d;
    }
    void displayC(){
        cout<<"z="<<z<<endl;
    }
};

int main(){
    
    C c1(1,2);
    c1.displayC();
    c1.B::displayB();
    c1.A::displayA();
    
    
    
    
    return 0;
}
