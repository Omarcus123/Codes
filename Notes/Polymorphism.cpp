#include <iostream>
using namespace std;

// Compile-Time Polymorphism

// Function Overloading - When there are multiple functions with the same name but different parameters, then the functions are said to be overloaded, hence this is known as Function Overloading. Functions can be overloaded by changing the number of arguments or/and changing the type of arguments.

class Geeks {
public:
    // Function with 1 int parameter
    void func(int x) {
        cout << "value of x is " << x << endl;
    }
  
    // Function with same name but
    // 1 double parameter
    void func(double x) {
        cout << "value of x is " << x << endl;
    }
  
    // Function with same name and
    // 2 int parameters
    void func(int x, int y) {
        cout << "value of x and y is " << x << ", " << y
             << endl;
    }
};

// Operator Overloading - Allows you can use operators for user defined data types. In the example below, the operator ‘+’ is overloaded. Usually, this operator is used to add two numbers (integers or floating point numbers), but here the operator is made to perform the addition of two imaginary or complex numbers.
  
class Complex {
private:
    int real, imag;
    
public:
    // Constructor
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
  
    // Operator Overloading Syntax
    Complex operator+ (Complex c) {
        Complex res;
        res.real = real + c.real;
        res.imag = imag + c.imag;
        return res;
    }
    void print() {
        cout << real << " + " << imag << endl;
    }
};
  
int main() {
    
    // Function Overloading
    Geeks obj1;
  
    // Function being called depends on the parameters passed
    // func() is called with int value
    obj1.func(7);
    // func() is called with double value
    obj1.func(9.132);
    // func() is called with 2 int values
    obj1.func(85, 64);
    
    // Operator Overloading
    // An example call to "operator+"
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
    
    return 0;
}
