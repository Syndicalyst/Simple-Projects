#include <ostream>
#include "Complex.h"

Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary) {
}

Complex::~Complex() = default;

double Complex::getReal() const {
    return this->real;
}

double Complex::getImaginary() const {
    return this->imaginary;
}

bool Complex::operator==(const Complex& other) const {
    return real == other.real && imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex& other) const {
    return !(*this == other);
}

void Complex::operator+=(const Complex& other) {
    real += other.real;
    imaginary += other.imaginary;
}

void Complex::operator-=(const Complex& other) {
    real -= other.real;
    imaginary -= other.imaginary;
}

Complex Complex::operator+(const Complex& other) const {
    Complex temp(real, imaginary);

    temp += other;
    return temp;
}

Complex Complex::operator-(const Complex& other) const {
    Complex temp(real, imaginary);

    temp -= other;
    return temp;
}

Complex Complex::operator*(const Complex& other) const {
    Complex temp(real, imaginary);

    temp.real = real * other.real - imaginary * other.imaginary;
    temp.imaginary = real * other.imaginary + imaginary * other.real;
    return temp;
}

std::ostream& operator<<(std::ostream& out, const Complex& complex) {
    return out << '(' << complex.getReal() << ',' << complex.getImaginary() << 'i' << ')';
}
