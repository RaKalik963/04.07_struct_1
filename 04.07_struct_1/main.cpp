#include <iostream>

using namespace std;


struct Fraction{
    int numerator;
    int denominator;

    Fraction(int num = 0, int denom = 1) {
        if (denom == 0) {
            denom = 1;
        }
        numerator = num;
        denominator = denom;
        reduce();
    }

    int gcd(int a, int b) const {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    void reduce() {
        int gcdValue = gcd(numerator, denominator);
        numerator /= gcdValue;
        denominator /= gcdValue;
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

    Fraction operator+(const Fraction& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    Fraction operator-(const Fraction& other) const {
        int num = numerator * other.denominator - other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    Fraction operator*(const Fraction& other) const {
        int num = numerator * other.numerator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    Fraction operator/(const Fraction& other) const {
        int num = numerator * other.denominator;
        int denom = denominator * other.numerator;
        return Fraction(num, denom);
    }

    void print() const {
        if (denominator == 1) {
            cout << numerator;
        }
 else {
  cout << numerator << "/" << denominator;
}
}
};

int main() {
    int num1, denom1, num2, denom2;

    cout << "Enter numerator and denominator for the first fraction(2 nums): ";
    cin >> num1 >> denom1;
    Fraction frac1(num1, denom1);

    cout << "Enter numerator and denominator for the second fraction(2 nums): ";
    cin >> num2 >> denom2;
    Fraction frac2(num2, denom2);

    Fraction sum = frac1 + frac2;
    Fraction difference = frac1 - frac2;
    Fraction product = frac1 * frac2;
    Fraction division = frac1 / frac2;

    cout << "Sum: ";
    sum.print();
    cout << "\nDifference: ";
    difference.print();
    cout << "\nProduct: ";
    product.print();
    cout << "\nDivision: ";
    division.print();
    cout << "\n";
	system("pause");
	return 0;
}