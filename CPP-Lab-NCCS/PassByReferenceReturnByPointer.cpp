// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int *sum(int &n, int &m){
    
//   int *s; // If we don't allocate memorey it show erroe
  int *s=new int;
   *s=n+m;
   return s;
}
int main() {
  int a=5,b=4;
  int *f=sum(a,b);
cout<<*f;
delete f;
    return 0;
}
