/******************************************************************************

               UserDefine to Basic

*******************************************************************************/

#include <iostream>

using namespace std;
class A{
    int x;
    public:
    A (int a){
        x=a;
        
    }
    void display(){
        cout<<x<<endl;
    }
    operator int(){
        return x;
    }
    
};

int main()
{
   
    A a1(5);
    int num=a1;
    cout<<num<<endl;
    
    
    

    return 0;
}
