// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class shape{
protected: // if private then we can't acces from derived class
    int s;
    public:
   
    void setdata(){
        cout<<"Enter value of s:";
        cin>>s;
    }
    void display(){
        cout<<s;
    }
};
class square:public shape{
    public:
    void perimeter(){
        cout<<"the perimeter is "<<4*s<<endl;
    }
};
int main() {
 shape *s;
 square s1;
 s=&s1;
 s->setdata();
 s1.perimeter();
//  s->perimeter(); // This line of code can't be used because there is no member named 'perimeter' in base class

    return 0;
}
