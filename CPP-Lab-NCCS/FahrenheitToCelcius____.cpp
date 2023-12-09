#include<iostream>
using namespace std;

class Fahrenheit
{
    private:
        float f;
    public:
    friend class Celsius;
       
        Fahrenheit(){f=0;}
        friend ostream& operator<< (ostream& out, const Fahrenheit &fah);
        friend istream& operator>> (istream& in, Fahrenheit &fah);
};

class Celsius
{
    private:
        float c;
    public:
        Celsius(){c=0;}
        void convertFahrenheit(Fahrenheit& fah);
        friend ostream& operator<< (ostream& out, const Celsius &cel);
        friend istream& operator>> (istream& in, Celsius &cel);
};

// Overloading << operator for Fahrenheit
ostream& operator<< (ostream& out, const Fahrenheit &fah)
{
    out << fah.f;
    return out;
}

// Overloading >> operator for Fahrenheit
istream& operator>> (istream& in, Fahrenheit &fah)
{
    in >> fah.f;
    return in;
}

// Overloading << operator for Celsius
ostream& operator<< (ostream& out, const Celsius &cel)
{
    out << cel.c;
    return out;
}

// Overloading >> operator for Celsius
istream& operator>> (istream& in, Celsius &cel)
{
    in >> cel.c;
    return in;
}

// function to convert Fahrenheit to Celsius
void Celsius::convertFahrenheit(Fahrenheit& fah)
{
    c = (fah.f - 32) * 5 / 9;
}

// main function
int main()
{
    Fahrenheit fah;
    Celsius cel;
    cout << "Enter temperature in Fahrenheit : ";
    cin >> fah;
    cel.convertFahrenheit(fah);
    cout << "Temperature in Celsius : " << cel << endl;
    return 0;
}
