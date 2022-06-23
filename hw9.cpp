/******************************************************************************

                              Mariah Balandran

*******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

class Complex {
    private:
        double realPart;
        double imaginaryPart;
        
    public:
        Complex(double real = 0.0, double imag = 0.0) {
            realPart = real;
            imaginaryPart = imag;
        }
        void showComplexValues();
        void assignNewValues(double real, double imag);
        Complex operator+(const Complex&);
        Complex operator*(const Complex&);
        void swap(Complex&);
};

void Complex::showComplexValues() {
    char sign = '+';
    if (imaginaryPart < 0) {
        sign = '-';
    }
    cout << realPart << ' ' << sign << ' ' << abs(imaginaryPart) << 'i';
}

void Complex::assignNewValues(double real, double imag) {
    realPart = real;
    imaginaryPart = imag;
}

Complex Complex::operator+(const Complex& complex2) {
    Complex temp;
    temp.realPart = realPart + complex2.realPart;
    temp.imaginaryPart = imaginaryPart + complex2.imaginaryPart;
    
    return temp;
}

Complex Complex::operator*(const Complex& complex3) {
    Complex temp;
    temp.realPart = realPart*imaginaryPart - imaginaryPart*complex3.imaginaryPart;
    temp.imaginaryPart = realPart*complex3.imaginaryPart + imaginaryPart*complex3.realPart;
    
    return temp;
}

void Complex::swap(Complex& b) {
    Complex temp;
    temp = b;
    b = Complex(realPart, imaginaryPart);
    realPart = temp.realPart;
    imaginaryPart = temp. imaginaryPart;
}

int main()
{
    
    Complex a(2.3, 10.5), b(6.3, 19.2), c, d;
    
    cout << "Complex number a is ";
    a.showComplexValues();
    cout << "\nComplex number b is ";
    b.showComplexValues();
    
    c = a + b;
    
    cout << "\n\nThe sum of a and b: ";
    c.showComplexValues();
    
    d = a * b;
    
    cout << "\n\nThe product of a and b: ";
    d.showComplexValues();
    
    cout << "\n\na and b swapped: ";
    a.swap(b);
    a.showComplexValues();
    cout << " and ";
    b.showComplexValues();

    return 0;
}
