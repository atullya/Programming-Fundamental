#include<iostream>
using namespace std;

class Fahrenheit{
    float f;
    
    public:
    friend void operator >>(istream & fin, Fahrenheit& fobj);
    friend void operator <<(ostream & fout, Fahrenheit& fobj);
    
    operator float(){
        return (f-32)*(5.0/9.0);
    }
};

void operator>>(istream& fin, Fahrenheit& fobj){
    fin>>fobj.f;
}

void operator<<(ostream& fout, Fahrenheit& fobj){
    fout<<fobj.f<<endl;
}

class Celcius{
    float c;
    
    public:
    friend void operator >>(istream & fin, Celcius& fobj);
    friend void operator <<(ostream & fout, Celcius& fobj);
    
    Celcius(Fahrenheit& f){
        c=f;
    }
};

void operator>>(istream& fin, Celcius& cobj){
    fin>>cobj.c;
}

void operator<<(ostream& fout, Celcius& cobj){
    fout<<cobj.c<<endl;
}

int main(){
    Fahrenheit f;
    cin>>f;
    Celcius c=f;
    cout<<c;
    return 0;
}
