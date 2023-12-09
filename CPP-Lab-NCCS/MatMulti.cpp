// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class matrix{
    int r,c;
    int mat[23][23];
    public:
    matrix(){}
    
    matrix(int x,int y){
        r=x;
        c=y;
    }
    void setmat(){
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cout<<"Enter a["<<i+1<<"]"<<"["<<j+1<<"] :";
                cin>>mat[i][j];
            }
        }
    }
    
    
      void display(){
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    matrix operator +(matrix &b){
        matrix D;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                D.mat[i][j]=mat[i][j]+b.mat[i][j];
            }
        }
        return D;
    }
    
    matrix operator *(matrix &b){
        matrix C(r,c);
         for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
              C.mat[i][j]=0;
              for(int k=0; k<r; k++){
                  C.mat[i][j]+=mat[i][j]*b.mat[i][j];
              }
            }
        }
        return C;
    }
};

int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    matrix m1(2,2);
    cout<<"Enter the element of 1st matrix "<<endl;
    m1.setmat();
    matrix m2(2,2);
    cout<<"Enter the element of 2nd matrix"<<endl;
    m2.setmat();
    matrix m3;
    m3=m1*m2;
    m3.display();
    matrix m4;
    m4=m1+m2;
    m4.display();
    
    
    

    return 0;
}
