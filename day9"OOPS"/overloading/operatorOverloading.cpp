/*
Operator overloading allow you to redefined the way operator work for user-defined(classes).
It enables to use operator +,-,*,etc. with objects for your class
    Note.
        not all operator can be overloaded (eg. :: , .* , .).
        Operator Overloading also resolve at the Compile time or you can say static Binding
Syntax:-     returnType operator op(parameterList){
                // implementation of the logic Here
            }
*/
// Below Program is to add two complex number
#include <iostream>
using namespace std;

class Complex
{
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {};
    Complex operator+(const Complex &obj)
    {
        return Complex(real + obj.real, imag + obj.imag);
    }
    void display()
    {
        cout << real << "+" <<"i"<< imag << endl;
    }
};
int
main()
{

    Complex c1(2.5, 3.5), c2(1.5, 2.5);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}