// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int &sum(int *m,int *n){
   static int res;
    res=*m+*n;
    return res;
}
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    int a=3,b=5;
    int &c= sum(&a,&b);
cout<<c;
// delete c;

    return 0;
}
