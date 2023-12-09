// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int *sum(int *n, int *m){
    // int *d=n+m;
  int *s=new int;
   *s=*n+*m;
   return s;
}
int main() {
  int a=5,b=4;
  int *f=sum(&a,&b);
cout<<*f;
delete f;
    return 0;
}
