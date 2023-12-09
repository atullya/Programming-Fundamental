/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
using namespace std;
class gram{
    int gm;
    public:
    gram(){};
    gram(int g){
        gm=g;
    }
    void display(){
        cout<<"The weight is gram is "<<gm;
    }
};
class kilo{
    int kg;
    public:
    kilo(){};
    kilo(int k){
        kg=k;
    }
    operator gram(){
        return kg*1000;
    }
};


int main()
{
    // cout<<"Hello World";
    kilo k1(5);
    gram g1;
    g1=k1;
    g1.display();

    return 0;
}
