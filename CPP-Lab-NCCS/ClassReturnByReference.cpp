/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class point{
  int x;
  int y;
  public:
  point(){};
  point(int a, int b){
      x=a;
      y=b;
  }
//   point operator +(point &p1){
//       point p;
//       p.x=x+p1.x;
//       p.y=y+p1.y;
//       return p;
//   }
//   point Add(point &p1){
//       point p;
//       p.x=p1.x+x;
//       p.y=p1.y+y;
//       return p;
//   }

friend point &sum(point &p1, point &p2);
  void print(){
      cout<<x<<" "<<y<<endl;
  }
  
};
 point &sum(point &p1, point &p2){
     point *p;
     p->x=p1.x+p2.x;
     p->y=p1.y+p2.y;
     return *p;
 }

int main()
{
    
    point p1(1,2);
    point p2(1,3);
    point &p3=sum(p1,p2);
    

    p3.print();
    

    return 0;
}
