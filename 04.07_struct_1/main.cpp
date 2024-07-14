#include <iostream>

using namespace std;


struct Complex {
    double real;
    double imag;

    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    Complex operator/(const Complex& other) const {
        double denominator = other.real * other.real + other.imag * other.imag;
        return Complex((real * other.real + imag * other.imag) / denominator,
            (imag * other.real - real * other.imag) / denominator);
    }

    void print() const {
        cout << real << " + " << imag << "i";
    }
};

int main() {
    double r1, i1, r2, i2;

    cout << "Enter real and imaginary parts for the first complex number: ";
    cin >> r1 >> i1;
    Complex c1(r1, i1);

    cout << "Enter real and imaginary parts for the second complex number: ";
    cin >> r2 >> i2;
    Complex c2(r2, i2);

    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    Complex product = c1 * c2;
    Complex division = c1 / c2;

    cout << "Sum: ";
    sum.print();
    cout << "\nDifference: ";
    difference.print();
    cout << "\nProduct: ";
    product.print();
    cout << "\nDivision: ";
    division.print();
    cout << "\n";

	return 0;
}