// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int &sum(int n, int m){
    // we can't use local variable in return by reference

  static int s;
   s=n+m;
   return s;
}
int main() {
  int a=5,b=4;
  int &f=sum(a,b);
cout<<f;
// delete f;
    return 0;
}
