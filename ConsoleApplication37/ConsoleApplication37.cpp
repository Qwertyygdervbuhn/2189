#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) {
        if (den == 0) {
            cout << "Denominator can't be zero. Setting to 1 by default." << endl;
            denominator = 1;
        }
    }

    void print() const {
        cout << numerator << "/" << denominator << endl;
    }
    Fraction operator+(const Fraction& fraction) const {
        int num = numerator * fraction.denominator + fraction.numerator * denominator;
        int den = denominator * fraction.denominator;
        return Fraction(num, den);
    }
    Fraction operator-(const Fraction& fraction) const {
        int num = numerator * fraction.denominator - fraction.numerator * denominator;
        int den = denominator * fraction.denominator;
        return Fraction(num, den);
    }
    Fraction operator*(const Fraction& fraction) const {
        int num = numerator * fraction.numerator;
        int den = denominator * fraction.denominator;
        return Fraction(num, den);
    }
    Fraction operator/(const Fraction& fraction) const {
        int num = numerator * fraction.denominator;
        int den = denominator * fraction.numerator;
        return Fraction(num, den);
    }
};

int main() {
    Fraction frac1(1, 2);
    Fraction frac2(1, 3);

    Fraction sum = frac1 + frac2;
    Fraction diff = frac1 - frac2;
    Fraction prod = frac1 * frac2;
    Fraction quot = frac1 / frac2;

    cout << "Sum: ";
    sum.print();

    cout << "Difference: ";
    diff.print();

    cout << "Product: ";
    prod.print();

    cout << "Quotient: ";
    quot.print();

}
